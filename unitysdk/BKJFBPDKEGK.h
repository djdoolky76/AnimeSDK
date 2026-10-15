#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define BKJFBPDKEGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8BC320)

	class BKJFBPDKEGK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "BKJFBPDKEGK")->GetStaticField(0x1A0E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BKJFBPDKEGK")->GetStaticField(0x1A0E8);
		}

		// static const ::System::Object JJJHILHFEJL; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKJFBPDKEGK_CCTOR_OFFSET))();
		}

	};
