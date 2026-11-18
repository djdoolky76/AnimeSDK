#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/BaseEmoAnimation.h"

namespace miHoYoEmotion { class ElementManager; }

#define MIHOYOEMOTION_FRAMEEMOANIMATION_INIT_OFFSET UNITYSDK_OFFSET(0x1D59AC80)
#define MIHOYOEMOTION_FRAMEEMOANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D59AF60)
#define MIHOYOEMOTION_FRAMEEMOANIMATION___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x1D59AFE0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FrameEmoAnimation_TypeDefinitionIndex = 38000;

	class FrameEmoAnimation : public ::miHoYoEmotion::BaseEmoAnimation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Init(::miHoYoEmotion::ElementManager* elemManager)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ElementManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOANIMATION_INIT_OFFSET))(this, elemManager);
		}

		::System::Void __base_Init(::miHoYoEmotion::ElementManager* P0)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ElementManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOANIMATION___BASE_INIT_OFFSET))(this, P0);
		}
	};
}
