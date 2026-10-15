#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_Transform_OffsetType.h"
#include "unitysdk/RPG/Client/FloatAxis.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Effect_Transform; }
namespace RPG::GameCore { class TimelineOverrideEffectTransformOffsetParams; }

#define RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMOFFSETPARAMS_ANLOAIENLBA_OFFSET UNITYSDK_OFFSET(0xE7A0FE0)
#define RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMOFFSETPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0xE7A0FD0)
#define RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMOFFSETPARAMS_FNGBMCBEOCP_OFFSET UNITYSDK_OFFSET(0xE7A0F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimelineOverrideEffectTransformOffsetParams_TypeDefinitionIndex = 57358;

	class TimelineOverrideEffectTransformOffsetParams : public ::System::Object
	{
	public:
		::RPG::Client::Effect_Transform_OffsetType TransOffsetType; // 0x10
		::System::Boolean UseLocalTransform; // 0x14
		::System::Boolean FloatObjectSpace; // 0x15
		::System::Byte _padding0[0x2];
		::RPG::Client::FloatAxis FloAxis; // 0x18
		::System::Single FloatFrequency; // 0x1C
		::System::Single FloatDistance; // 0x20
		::System::Single OffsetNoise3DSpeed; // 0x24
		::System::Single RandomMove3DBoxSize; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMOFFSETPARAMS_CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams* FNGBMCBEOCP(::RPG::Client::Effect_Transform* a1)
		{
			return ((::RPG::GameCore::TimelineOverrideEffectTransformOffsetParams*(*)(::RPG::Client::Effect_Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMOFFSETPARAMS_FNGBMCBEOCP_OFFSET))(a1);
		}

		::System::Void ANLOAIENLBA(::RPG::Client::Effect_Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Effect_Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEOVERRIDEEFFECTTRANSFORMOFFSETPARAMS_ANLOAIENLBA_OFFSET))(this, a1);
		}

	};
}
