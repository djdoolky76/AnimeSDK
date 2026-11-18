#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR4_GETVALUE_OFFSET UNITYSDK_OFFSET(0x165459E0)
#define MOLEMOLE_CONFIG_SCREENEFFECTVECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0x16545B80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectVector4_TypeDefinitionIndex = 85461;

	class ScreenEffectVector4 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* XCurve; // 0x10
		::UnityEngine::AnimationCurve* WCurve; // 0x18
		::UnityEngine::AnimationCurve* ZCurve; // 0x20
		::UnityEngine::AnimationCurve* YCurve; // 0x28
		::System::Boolean EnableOverrideDefaultValue; // 0x30
		::System::Boolean EnableFade; // 0x31
		::System::Boolean XUseCurve; // 0x32
		::System::Boolean YUseCurve; // 0x33
		::System::Boolean WUseCurve; // 0x34
		::System::Boolean ZUseCurve; // 0x35
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector4 OverrideDefaultValue; // 0x38
		::System::Single ZValue; // 0x48
		::System::Single XValue; // 0x4C
		::System::Single WValue; // 0x50
		::System::Single YValue; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTVECTOR4__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 GetValue(::System::Single curTime, ::System::Single totalTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTVECTOR4_GETVALUE_OFFSET))(this, curTime, totalTime);
		}
	};
}
