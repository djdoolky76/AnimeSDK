#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define GADAOKHODDG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA73B40)

	class GADAOKHODDG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "GADAOKHODDG")->GetStaticField(0x25730);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GADAOKHODDG")->GetStaticField(0x25738);
		}

		// static const ::System::Object LMKDKIACLHP; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GADAOKHODDG_CCTOR_OFFSET))();
		}

	};
