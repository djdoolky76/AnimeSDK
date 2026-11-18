#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOZENKOVRESULTPAGECONFIG_GETENDANIMINTERVALSAMPLE_OFFSET UNITYSDK_OFFSET(0x14B0B4C0)
#define MOLEMOLE_MONOZENKOVRESULTPAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14B0B570)

namespace MoleMole
{
	inline static constexpr unsigned int MonoZenkovResultPageConfig_TypeDefinitionIndex = 87883;

	class MonoZenkovResultPageConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Number; // 0x18
		::System::Boolean Win; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single StartEndAnimTime; // 0x20
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* EndAnimIntervalCurve; // 0x28
		::System::Single BoxDisplayInterval; // 0x30
		::System::Single BoxAnimSpeed; // 0x34
		::Il2CppArray<::System::Object*>* Configs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZENKOVRESULTPAGECONFIG__CTOR_OFFSET))(this);
		}

		::System::Single GetEndAnimIntervalSample(::System::Int32 ABHBKFJKINO, ::System::Int32 JHFKDGBCOBA)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZENKOVRESULTPAGECONFIG_GETENDANIMINTERVALSAMPLE_OFFSET))(this, ABHBKFJKINO, JHFKDGBCOBA);
		}
	};
}
