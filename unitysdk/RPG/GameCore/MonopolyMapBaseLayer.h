#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MonopolyMapCellLayerType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyMapBaseLayer; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYMAPBASELAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A28C0)
#define RPG_GAMECORE_MONOPOLYMAPBASELAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8A2A80)
#define RPG_GAMECORE_MONOPOLYMAPBASELAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8A28D0)

namespace RPG::GameCore
{
	class MonopolyMapBaseLayer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 LayerID; // 0x10
		::RPG::GameCore::MonopolyMapCellLayerType LayerType; // 0x14
		::System::String* PrefabPath; // 0x18
		::System::String* IconPath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPBASELAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyMapBaseLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyMapBaseLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPBASELAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyMapBaseLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyMapBaseLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPBASELAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
