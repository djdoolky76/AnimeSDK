#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define IPOELPGBLDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB8A9F0)

inline static constexpr unsigned int IPOELPGBLDC_TypeDefinitionIndex = 42802;

	class IPOELPGBLDC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IPOELPGBLDC")->GetStaticField(0x1D070);
		}

		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "IPOELPGBLDC")->GetStaticField(0x1D078);
		}

		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPOELPGBLDC_CCTOR_OFFSET))();
		}

	};
