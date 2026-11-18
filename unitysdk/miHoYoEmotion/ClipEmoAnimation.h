#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/BaseEmoAnimation.h"

namespace miHoYoEmotion { class ElementManager; }

#define MIHOYOEMOTION_CLIPEMOANIMATION_INIT_OFFSET UNITYSDK_OFFSET(0x1D579C00)
#define MIHOYOEMOTION_CLIPEMOANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D57A100)
#define MIHOYOEMOTION_CLIPEMOANIMATION___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x1D57A180)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipEmoAnimation_TypeDefinitionIndex = 37992;

	class ClipEmoAnimation : public ::miHoYoEmotion::BaseEmoAnimation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Init(::miHoYoEmotion::ElementManager* elemManager)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ElementManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOANIMATION_INIT_OFFSET))(this, elemManager);
		}

		::System::Void __base_Init(::miHoYoEmotion::ElementManager* P0)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ElementManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOANIMATION___BASE_INIT_OFFSET))(this, P0);
		}
	};
}
