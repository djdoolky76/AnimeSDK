#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class Test_CapsuleCollider; }
namespace UnityEngine { class CapsuleCollider; }

#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9AFA60)
#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B9AFA90)
#define HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_ISNULL_OFFSET UNITYSDK_OFFSET(0x1B9AFA70)

namespace HoudiniEngineUnity
{
	class Test_CapsuleCollider : public ::System::Object
	{
	public:
		::UnityEngine::CapsuleCollider* self; // 0x10
		::System::Void _ctor(::UnityEngine::CapsuleCollider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_CapsuleCollider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_CapsuleCollider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_CAPSULECOLLIDER_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

	};
}
