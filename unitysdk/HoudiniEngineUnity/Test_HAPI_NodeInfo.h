#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_NodeInfo.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class Test_HAPI_NodeInfo; }

#define HOUDINIENGINEUNITY_TEST_HAPI_NODEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B16F0)
#define HOUDINIENGINEUNITY_TEST_HAPI_NODEINFO_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B9B1720)

namespace HoudiniEngineUnity
{
	class Test_HAPI_NodeInfo : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HAPI_NodeInfo self; // 0x10
		::System::Void _ctor(::HoudiniEngineUnity::HAPI_NodeInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_NodeInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_NODEINFO_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_NodeInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::Test_HAPI_NodeInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_NODEINFO_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

	};
}
