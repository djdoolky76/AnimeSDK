#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class Test_Mesh; }
namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_TEST_MESH_CTOR_OFFSET UNITYSDK_OFFSET(0x2087CFF0)
#define HOUDINIENGINEUNITY_TEST_MESH_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x2087D020)
#define HOUDINIENGINEUNITY_TEST_MESH_ISNULL_OFFSET UNITYSDK_OFFSET(0x2087D000)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_Mesh_TypeDefinitionIndex = 41709;

	class Test_Mesh : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* self; // 0x10
		::System::Void _ctor(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_ISNULL_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_Mesh* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_MESH_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

	};
}
