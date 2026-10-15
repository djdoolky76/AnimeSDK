#pragma once
#include "unitysdk/unitysdk.h"
class GOKNJPBGBLE;
class HIKAAGHELPH;
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_AVATARHPBARCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xC6F3D20)
#define RPG_CLIENT_AVATARHPBARCONTROL__BINDHP_OFFSET UNITYSDK_OFFSET(0xC6F32C0)
#define RPG_CLIENT_AVATARHPBARCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xC6F3260)
#define RPG_CLIENT_AVATARHPBARCONTROL__BINDPLUSHP_OFFSET UNITYSDK_OFFSET(0xC6F3990)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarHpBarControl_TypeDefinitionIndex = 60090;

	class AvatarHpBarControl
	{
	public:
		::UnityEngine::UI::Slider* _HpDangerSlider; // 0x70
		::UnityEngine::UI::Slider* _HpNormalSlider; // 0x78
		::UnityEngine::UI::Slider* _HpPlusSlider; // 0x80
		// static const ::System::Object _DangerHpRatioThreshold; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _BindHp(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL__BINDHP_OFFSET))(this, a1);
		}

		::System::Void _BindPlusHp(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL__BINDPLUSHP_OFFSET))(this, a1);
		}

	};
}
