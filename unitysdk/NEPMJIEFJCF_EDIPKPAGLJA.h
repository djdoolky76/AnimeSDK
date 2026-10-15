#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayLinkExtraBehaviorMask.h"
namespace RPG::GameCore { class ActionDelayLinkExtraBehaviorGroup; }

#define NEPMJIEFJCF_EDIPKPAGLJA_CTOR_OFFSET UNITYSDK_OFFSET(0x20510)

	struct alignas(4) NEPMJIEFJCF_EDIPKPAGLJA
	{
		::RPG::GameCore::ActionDelayLinkExtraBehaviorMask ACGIACDMCII; // 0x10
		::System::Void _ctor(::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*))((::PBYTE)hIl2Cpp + NEPMJIEFJCF_EDIPKPAGLJA_CTOR_OFFSET))(this, a1);
		}

	};
