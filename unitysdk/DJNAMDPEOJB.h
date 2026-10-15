#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define DJNAMDPEOJB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9FD5F0)

inline static constexpr unsigned int DJNAMDPEOJB_TypeDefinitionIndex = 42795;

	class DJNAMDPEOJB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "DJNAMDPEOJB")->GetStaticField(0x32150);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DJNAMDPEOJB")->GetStaticField(0x32158);
		}

		// static const ::System::Object KGNLOJIHHAD; // 0x0
		// static const ::System::Object AAIOPLGFFGD; // 0x0
		// static const ::System::Object KFMEJCCIJIJ; // 0x0
		// static const ::System::Object IILPDGGBHKG; // 0x0
		// static const ::System::Object OBKFNIINLNF; // 0x0
		// static const ::System::Object ECJLGGNJNBC; // 0x0
		// static const ::System::Object KHIAHDOBKLD; // 0x0
		// static const ::System::Object NFHDFICPEKD; // 0x0
		// static const ::System::Object LLCANILJNPK; // 0x0
		// static const ::System::Object KKBIGCEKNIA; // 0x0
		// static const ::System::Object BHLBDPHFKHF; // 0x0
		// static const ::System::Object HPKIDPFGIIM; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJNAMDPEOJB_CCTOR_OFFSET))();
		}

	};
