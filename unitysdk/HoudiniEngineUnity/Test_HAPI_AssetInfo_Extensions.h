#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AssetInfo.h"
namespace HoudiniEngineUnity { class Test_HAPI_AssetInfo; }

#define HOUDINIENGINEUNITY_TEST_HAPI_ASSETINFO_EXTENSIONS_TOTESTOBJECT_OFFSET UNITYSDK_OFFSET(0x1B9B1200)

namespace HoudiniEngineUnity
{
	class Test_HAPI_AssetInfo_Extensions : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::Test_HAPI_AssetInfo* ToTestObject(::HoudiniEngineUnity::HAPI_AssetInfo a1)
		{
			return ((::HoudiniEngineUnity::Test_HAPI_AssetInfo*(*)(::HoudiniEngineUnity::HAPI_AssetInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_TEST_HAPI_ASSETINFO_EXTENSIONS_TOTESTOBJECT_OFFSET))(a1);
		}

	};
}
