#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define FKNMAKMLFNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA71030)

	class FKNMAKMLFNB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FKNMAKMLFNB")->GetStaticField(0x31910);
		}

		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "FKNMAKMLFNB")->GetStaticField(0x31918);
		}

		// static const ::System::Object JKECHJIELDD; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKNMAKMLFNB_CCTOR_OFFSET))();
		}

	};
