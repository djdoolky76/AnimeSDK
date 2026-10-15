#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureCharacterIdleShowConfig; }
namespace RPG::GameCore { class AdventureCharacterIdleShowShapeConfig; }

#define RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D399C50)
#define RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D399A50)
#define RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x1D399C20)
#define RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D398F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCharacterIdleShowConfig_TypeDefinitionIndex = 17436;

	class AdventureCharacterIdleShowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single IdleShow1DetectDistance; // 0x10
		::System::Single IdleShow2DetectDistance; // 0x14
		::RPG::GameCore::AdventureCharacterIdleShowShapeConfig* IdleShow1ShapeConfig; // 0x18
		::RPG::GameCore::AdventureCharacterIdleShowShapeConfig* IdleShow2ShapeConfig; // 0x20
		static ::RPG::GameCore::AdventureCharacterIdleShowConfig** StaticGet__Default_k__BackingField()
		{
			return (::RPG::GameCore::AdventureCharacterIdleShowConfig**)UnitySDK::FromName("RPG.GameCore", "AdventureCharacterIdleShowConfig")->GetStaticField(0x1D660);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG_CCTOR_OFFSET))();
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureCharacterIdleShowConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureCharacterIdleShowConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::AdventureCharacterIdleShowConfig* get_Default()
		{
			return ((::RPG::GameCore::AdventureCharacterIdleShowConfig*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERIDLESHOWCONFIG_GET_DEFAULT_OFFSET))();
		}

	};
}
