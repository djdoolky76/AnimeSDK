#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define TESTWHCLOGICMETHOD_LOCKTARGET_OFFSET UNITYSDK_OFFSET(0x1FF80D90)
#define TESTWHCLOGICMETHOD_STARTZOOM_OFFSET UNITYSDK_OFFSET(0x1FF80D70)
#define TESTWHCLOGICMETHOD_STOPZOOM_OFFSET UNITYSDK_OFFSET(0x1FF80D80)
#define TESTWHCLOGICMETHOD_TEST_OFFSET UNITYSDK_OFFSET(0x1FF80C30)
#define TESTWHCLOGICMETHOD_UNLOCK_OFFSET UNITYSDK_OFFSET(0x1FF80EF0)
#define TESTWHCLOGICMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF80F00)

inline static constexpr unsigned int TestWhcLogicMethod_TypeDefinitionIndex = 96681;

class TestWhcLogicMethod : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single fov; // 0x18
	::System::Single startTime; // 0x1C
	::UnityEngine::AnimationCurve* StartCurve; // 0x20
	::System::Single endTime; // 0x28
	::System::Byte _padding0[0x4];
	::UnityEngine::AnimationCurve* endCurve; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* uniqueids; // 0x38
	::UnityEngine::Transform* Target; // 0x40
	::System::Single max; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTWHCLOGICMETHOD__CTOR_OFFSET))(this);
	}

	::System::Void Test()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTWHCLOGICMETHOD_TEST_OFFSET))(this);
	}

	::System::Void StartZoom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTWHCLOGICMETHOD_STARTZOOM_OFFSET))(this);
	}

	::System::Void StopZoom()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTWHCLOGICMETHOD_STOPZOOM_OFFSET))(this);
	}

	::System::Void LockTarget()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTWHCLOGICMETHOD_LOCKTARGET_OFFSET))(this);
	}

	::System::Void Unlock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTWHCLOGICMETHOD_UNLOCK_OFFSET))(this);
	}
};
