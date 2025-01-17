#pragma once

// Include the modloader header, which allows us to tell the modloader which mod this is, and the version etc.
#include "modloader/shared/modloader.hpp"

// beatsaber-hook is a modding framework that lets us call functions and fetch field values from in the game
// It also allows creating objects, configuration, and importantly, hooking methods to modify their values
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/config/config-utils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "custom-types/shared/delegate.hpp"

// Lapiz is an abstraction layer between Zenject and the user, making their lives easier
#include "lapiz/shared/zenject/Zenjector.hpp"
#include "lapiz/shared/zenject/Location.hpp"

// Zenject includes
#include "Zenject/DiContainer.hpp"

// MpCore Installers
#include "Installers/AppInstaller.hpp"
#include "Installers/GameInstaller.hpp"
#include "Installers/MenuInstaller.hpp"

// Cpp includes
#include <map>
#include <set>
#include <string>

#include "logging.hpp"

// Define these functions here so that we can easily read configuration and log information from other files
Configuration& getConfig();
Logger& getLogger();

//extern std::string GetHash(const std::string& levelId);

extern ModInfo modInfo;

extern std::vector<std::string> DownloadedSongIds;

extern bool gotSongPackOverrides;

extern std::string missingLevelText;