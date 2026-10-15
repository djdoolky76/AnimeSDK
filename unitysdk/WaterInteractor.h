#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define WATERINTERACTOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE9F79F0)
#define WATERINTERACTOR_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xE9F79A0)
#define WATERINTERACTOR_TRIGGERWAVE_OFFSET UNITYSDK_OFFSET(0xE9F7940)

	class WaterInteractor
	{
	public:
		::System::Single radius; // 0x30
		::System::Single TriggerTick; // 0x34
		::System::Single timecounter; // 0x38
		::System::Single maxDepth; // 0x3C
		::System::Boolean enableQuasiContinuousCollision; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 maxInteractCount; // 0x44
		::System::Single TirggerRadius; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WATERINTERACTOR_CTOR_OFFSET))(this);
		}

		::System::Void TriggerWave(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WATERINTERACTOR_TRIGGERWAVE_OFFSET))(this, a1);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WATERINTERACTOR_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
