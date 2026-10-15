#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define STAGEHARMONYTARGETLIGHT_CTOR_OFFSET UNITYSDK_OFFSET(0xE996330)

	class StageHarmonyTargetLight : public ::System::Object
	{
	public:
		::System::Int32 targetLightIndex; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYTARGETLIGHT_CTOR_OFFSET))(this);
		}

	};
