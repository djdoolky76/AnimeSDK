#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ObjectInfo.h"
namespace HoudiniEngineUnity { class Test_HAPI_ObjectInfo; }

#define HOUDINIENGINEUNITY_TEST_HAPI_OBJECTINFO_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1B9B1BC0)

namespace HoudiniEngineUnity
{
	class Test_HAPI_ObjectInfo_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_HAPI_ObjectInfo* ToTestObject(::HoudiniEngineUnity::HAPI_ObjectInfo a1)
		{
			return ((::HoudiniEngineUnity::Test_HAPI_ObjectInfo*(*)(::HoudiniEngineUnity::HAPI_ObjectInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_OBJECTINFO_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

	};
}
