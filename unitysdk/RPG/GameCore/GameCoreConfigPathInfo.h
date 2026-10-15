#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameCoreConfigPathInfo; }
namespace System { class String; }

#define RPG_GAMECORE_GAMECORECONFIGPATHINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E47C0)
#define RPG_GAMECORE_GAMECORECONFIGPATHINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DC1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameCoreConfigPathInfo_TypeDefinitionIndex = 17127;

	class GameCoreConfigPathInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* DirectoryPaths; // 0x10
		::Il2CppArray<::System::String*>* FilePaths; // 0x18
		::Il2CppArray<::System::String*>* WhiteDirectoryPaths; // 0x20
		::Il2CppArray<::System::String*>* WhiteFilePaths; // 0x28
		::Il2CppArray<::System::String*>* FightDirectoryPaths; // 0x30
		::Il2CppArray<::System::String*>* FightFilePaths; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGPATHINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameCoreConfigPathInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameCoreConfigPathInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMECORECONFIGPATHINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
