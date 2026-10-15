#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define AKGCCADNCEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C58B9C0)

	class AKGCCADNCEK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AKGCCADNCEK")->GetStaticField(0x15E30);
		}

		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "AKGCCADNCEK")->GetStaticField(0x15E38);
		}

		// static const ::System::Object NMGAJKCCJKO; // 0x0
		// static const ::System::Object BBPOCOGDMLB; // 0x0
		// static const ::System::Object JEHGANPGOGO; // 0x0
		// static const ::System::Object CLNGFDPINDB; // 0x0
		// static const ::System::Object GNLAGMCLFFI; // 0x0
		// static const ::System::Object PPKODAGEEDL; // 0x0
		// static const ::System::Object ADCPPJNMGJP; // 0x0
		// static const ::System::Object IMICNEFJMJN; // 0x0
		// static const ::System::Object HOEKDHBPGAI; // 0x0
		// static const ::System::Object NMKMMAIGELD; // 0x0
		// static const ::System::Object DDPCMLLJCFG; // 0x0
		// static const ::System::Object DJNJDJIJDDL; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGCCADNCEK_CCTOR_OFFSET))();
		}

	};
