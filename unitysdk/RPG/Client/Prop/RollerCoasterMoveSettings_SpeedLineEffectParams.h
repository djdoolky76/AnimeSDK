#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpeedLineEffectMode.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_PROP_ROLLERCOASTERMOVESETTINGS_SPEEDLINEEFFECTPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1745F2E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RollerCoasterMoveSettings_SpeedLineEffectParams_TypeDefinitionIndex = 81539;

	class RollerCoasterMoveSettings_SpeedLineEffectParams : public ::System::Object
	{
	public:
		::System::Boolean HiendOnly; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::SpeedLineEffectMode Mode; // 0x14
		::System::Single Speed; // 0x18
		::System::Boolean UseTwoTone; // 0x1C
		::System::Byte _padding1[0x3];
		::System::Single WhitePercent; // 0x20
		::System::Single Divide; // 0x24
		::System::Single Offset; // 0x28
		::System::Single Start; // 0x2C
		::System::Single End; // 0x30
		::System::Single Brightness; // 0x34
		::System::Single Density; // 0x38
		::System::Single Rotation; // 0x3C
		::System::Single PosX; // 0x40
		::System::Single PosY; // 0x44
		::System::String* SpeedlineSeedPath; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERMOVESETTINGS_SPEEDLINEEFFECTPARAMS_CTOR_OFFSET))(this);
		}

	};
}
