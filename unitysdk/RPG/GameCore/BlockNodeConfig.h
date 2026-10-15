#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BlockNodeRegionType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BLOCKNODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4417E0)
#define RPG_GAMECORE_BLOCKNODECONFIG_FJMEKOEIMOM_OFFSET UNITYSDK_OFFSET(0x1D443080)
#define RPG_GAMECORE_BLOCKNODECONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4417F0)
#define RPG_GAMECORE_BLOCKNODECONFIG_MDDLPALAJDC_OFFSET UNITYSDK_OFFSET(0x1D443060)
#define RPG_GAMECORE_BLOCKNODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D441100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockNodeConfig_TypeDefinitionIndex = 19118;

	class BlockNodeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean MarkForDelete; // 0x10
		::System::Boolean RuntimeEnable; // 0x11
		::System::Boolean IsBetaShield; // 0x12
		::System::Byte _padding0[0x1];
		::System::Int32 Index; // 0x14
		::System::String* BlockName; // 0x18
		::System::String* BlockTag; // 0x20
		::System::UInt32 IslandID; // 0x28
		::RPG::GameCore::BlockNodeRegionType BlockRegionType; // 0x2C
		::System::String* StreamingLayerOverride; // 0x30
		::System::Boolean Independent; // 0x38
		::System::Boolean PcOnly; // 0x39
		::System::Byte _padding1[0x2];
		::System::Single PosX; // 0x3C
		::System::Single PosY; // 0x40
		::System::Single PosZ; // 0x44
		::System::Single RotY; // 0x48
		::System::Byte _padding2[0x4];
		::System::String* Alias; // 0x50
		::System::String* HLODPath; // 0x58
		::RPG::GameCore::HoyoTagContainer* TagContainer; // 0x60
		::System::SByte BlockGrassQualityLowerBoundsOverride; // 0x68
		::System::Byte _padding3[0x7];
		::System::String* PrefabName; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKNODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BlockNodeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKNODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BlockNodeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKNODECONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		::System::String* MDDLPALAJDC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKNODECONFIG_MDDLPALAJDC_OFFSET))(this);
		}

		::System::Boolean FJMEKOEIMOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKNODECONFIG_FJMEKOEIMOM_OFFSET))(this);
		}

	};
}
