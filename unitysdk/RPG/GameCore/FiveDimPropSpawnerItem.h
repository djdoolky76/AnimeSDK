#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPropSpawnerItem; }
namespace RPG::GameCore { class FiveDimPropSpawnerParam; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMPROPSPAWNERITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A8260)
#define RPG_GAMECORE_FIVEDIMPROPSPAWNERITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A8100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPropSpawnerItem_TypeDefinitionIndex = 18590;

	class FiveDimPropSpawnerItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PresetName; // 0x10
		::System::Boolean UseDefaultSpawnParam; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FiveDimPropSpawnerParam* SpawnParam; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPSPAWNERITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPropSpawnerItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPropSpawnerItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPROPSPAWNERITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
