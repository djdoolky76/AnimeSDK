#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MonopolyMapCellLayerType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyMapCellLayer; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYMAPCELLLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A3580)
#define RPG_GAMECORE_MONOPOLYMAPCELLLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8A3400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapCellLayer_TypeDefinitionIndex = 16237;

	class MonopolyMapCellLayer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 LayerID; // 0x10
		::RPG::GameCore::MonopolyMapCellLayerType LayerType; // 0x14
		::System::String* PrefabPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPCELLLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyMapCellLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyMapCellLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYMAPCELLLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
