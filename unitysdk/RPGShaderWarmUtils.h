#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGSHADERWARMUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE273C0)
#define RPGSHADERWARMUTILS_ISENABLESHADERMEMTESTCONFIG_OFFSET UNITYSDK_OFFSET(0x1DE27120)
#define RPGSHADERWARMUTILS_SWITCHSHADERMEMTESTFILE_OFFSET UNITYSDK_OFFSET(0x1DE27210)

inline static constexpr unsigned int RPGShaderWarmUtils_TypeDefinitionIndex = 38409;

	class RPGShaderWarmUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_swCapsFilePath()
		{
			return (::System::String**)UnitySDK::FromName("", "RPGShaderWarmUtils")->GetStaticField(0x300C0);
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
