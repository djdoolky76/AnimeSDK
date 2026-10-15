#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define EFFNDOLEDJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA33A50)

	class EFFNDOLEDJC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EFFNDOLEDJC")->GetStaticField(0x264D0);
		}

		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "EFFNDOLEDJC")->GetStaticField(0x264D8);
		}

		// static const ::System::Object FLJNCJHKBDP; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFFNDOLEDJC_CCTOR_OFFSET))();
		}

	};
