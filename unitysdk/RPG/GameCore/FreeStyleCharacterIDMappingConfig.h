#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleCharacterIDMapping; }
namespace RPG::GameCore { class FreeStyleCharacterIDMappingConfig; }

#define RPG_GAMECORE_FREESTYLECHARACTERIDMAPPINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C6470)
#define RPG_GAMECORE_FREESTYLECHARACTERIDMAPPINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C63B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleCharacterIDMappingConfig_TypeDefinitionIndex = 16312;

	class FreeStyleCharacterIDMappingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FreeStyleCharacterIDMapping*>* Map; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERIDMAPPINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleCharacterIDMappingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleCharacterIDMappingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERIDMAPPINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
