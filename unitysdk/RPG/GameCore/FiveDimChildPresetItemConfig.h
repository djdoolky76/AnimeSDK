#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimChildPresetItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCHILDPRESETITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D687350)
#define RPG_GAMECORE_FIVEDIMCHILDPRESETITEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D687010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimChildPresetItemConfig_TypeDefinitionIndex = 16718;

	class FiveDimChildPresetItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 LocalPosition; // 0x10
		::RPG::MVector3 LocalRotation; // 0x1C
		::System::String* PresetName; // 0x28
		::System::Boolean IsGridView; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 GridSizeX; // 0x34
		::System::UInt32 GridSizeY; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHILDPRESETITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimChildPresetItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimChildPresetItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHILDPRESETITEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
