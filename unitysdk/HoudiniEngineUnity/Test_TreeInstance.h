#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TreeInstance.h"
namespace HoudiniEngineUnity { class Test_TreeInstance; }

#define HOUDINIENGINEUNITY_TEST_TREEINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB40620)
#define HOUDINIENGINEUNITY_TEST_TREEINSTANCE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1CB40640)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int Test_TreeInstance_TypeDefinitionIndex = 41732;

	class Test_TreeInstance : public ::System::Object
	{
	public:
		::UnityEngine::TreeInstance self; // 0x10
		::System::Void _ctor(::UnityEngine::TreeInstance a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TreeInstance))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TREEINSTANCE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_TreeInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_TreeInstance*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_TREEINSTANCE_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

	};
}
