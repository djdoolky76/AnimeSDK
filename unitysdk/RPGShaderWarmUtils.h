#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGSHADERWARMUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC80220)
#define RPGSHADERWARMUTILS_ISENABLESHADERMEMTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1CC7FF80)
#define RPGSHADERWARMUTILS_SWITCHSHADERMEMTESTFILE_OFFSET UNITYSDK_OFFSET(0x1CC80070)

	class RPGShaderWarmUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_swCapsFilePath()
		{
			return (::System::String**)UnitySDK::FromName("", "RPGShaderWarmUtils")->GetStaticField(0x37A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGSHADERWARMUTILS_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsEnableShaderMemTestConfig()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGSHADERWARMUTILS_ISENABLESHADERMEMTESTCONFIG_OFFSET))();
		}

		static ::System::Void SwitchShaderMemTestFile(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGSHADERWARMUTILS_SWITCHSHADERMEMTESTFILE_OFFSET))(a1);
		}

	};
