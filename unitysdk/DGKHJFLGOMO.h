#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define DGKHJFLGOMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5EC8E0)

	class DGKHJFLGOMO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "DGKHJFLGOMO")->GetStaticField(0x59760);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DGKHJFLGOMO")->GetStaticField(0x59768);
		}

		// static const ::System::Object JFPNDGAKHGH; // 0x0
		// static const ::System::Object JNJDNMKHOKB; // 0x0
		// static const ::System::Object FMHBDAOIDED; // 0x0
		// static const ::System::Object MOBBFEJHBGC; // 0x0
		// static const ::System::Object JBOHAAPLNBH; // 0x0
		// static const ::System::Object MCGDMLNJDIB; // 0x0
		// static const ::System::Object MFEIHOKGBHK; // 0x0
		// static const ::System::Object FPDOLHAAOAP; // 0x0
		// static const ::System::Object BHBOOBBMIBM; // 0x0
		// static const ::System::Object NPDNEEPHEKN; // 0x0
		// static const ::System::Object EJJNAPDBIOD; // 0x0
		// static const ::System::Object ICFIJBKPCLB; // 0x0
		// static const ::System::Object FODBMMCKAEN; // 0x0
		// static const ::System::Object JEELDBPDANA; // 0x0
		// static const ::System::Object MLBDBGHGPKK; // 0x0
		// static const ::System::Object EOIMBBFNKPP; // 0x0
		// static const ::System::Object KLOKABEPKLL; // 0x0
		// static const ::System::Object BCDPJKLJLLG; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGKHJFLGOMO_CCTOR_OFFSET))();
		}

	};
