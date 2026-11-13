#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
namespace HoudiniEngineUnity { class Test_LayerMask; }

#define HOUDINIENGINEUNITY_TEST_LAYERMASK_CTOR_OFFSET UNITYSDK_OFFSET(0x2087C9F0)
#define HOUDINIENGINEUNITY_TEST_LAYERMASK_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x2087CA00)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_LayerMask_TypeDefinitionIndex = 41718;

	class Test_LayerMask : public ::System::Object
	{
	public:
		::UnityEngine::LayerMask self; // 0x10
		::System::Void _ctor(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_LAYERMASK_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_LayerMask* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_LayerMask*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_LAYERMASK_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

	};
}
