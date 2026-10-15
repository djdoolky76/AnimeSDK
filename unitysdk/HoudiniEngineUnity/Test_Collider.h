#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class Test_Collider; }
namespace UnityEngine { class Collider; }

#define HOUDINIENGINEUNITY_TEST_COLLIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9AFF80)
#define HOUDINIENGINEUNITY_TEST_COLLIDER_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B9AFFB0)
#define HOUDINIENGINEUNITY_TEST_COLLIDER_ISNULL_OFFSET UNITYSDK_OFFSET(0x1B9AFF90)

namespace HoudiniEngineUnity
{
	class Test_Collider : public ::System::Object
	{
	public:
		::UnityEngine::Collider* self; // 0x10
		::System::Void _ctor(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_COLLIDER_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_COLLIDER_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_Collider*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_COLLIDER_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

	};
}
