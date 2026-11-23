#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class PSAccountInfoDialog; }
namespace MiHoYo::SDK::PS { class UserGameServerInfo; }
namespace System { class String; }
namespace System { template <typename T> class E891BA3236FD13E7; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_BFD351B6C66D1424_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x38F5300)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_BFD351B6C66D1424_F0B92CA147ADB067_OFFSET UNITYSDK_OFFSET(0x38F5510)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_BFD351B6C66D1424_FAD355F75D2ECFC1_OFFSET UNITYSDK_OFFSET(0x38F5540)
#define MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_BFD351B6C66D1424__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSAccountInfoDialog_BFD351B6C66D1424_TypeDefinitionIndex = 11767;

	class PSAccountInfoDialog_BFD351B6C66D1424 : public ::System::Object
	{
	public:
		::System::String* E584F98E04C16B82; // 0x10
		::System::String* AAA79195584BBBA9; // 0x18
		::System::Collections::Generic::List_1<::MiHoYo::SDK::PS::UserGameServerInfo*>* B918010F05C22662; // 0x20
		::System::String* B833A8D9C61223DD; // 0x28
		::System::E891BA3236FD13E7<::MiHoYo::SDK::PS::UserGameServerInfo*>* BDCB87964C751DB1; // 0x30
		::System::E891BA3236FD13E7<::MiHoYo::SDK::PS::UserGameServerInfo*>* FC1BFCAB993D006C; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_BFD351B6C66D1424__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::PS::PSAccountInfoDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSAccountInfoDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_BFD351B6C66D1424_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}

		::System::Boolean F0B92CA147ADB067(::MiHoYo::SDK::PS::UserGameServerInfo* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::PS::UserGameServerInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_BFD351B6C66D1424_F0B92CA147ADB067_OFFSET))(this, BB8C609F76620E45);
		}

		::System::Boolean FAD355F75D2ECFC1(::MiHoYo::SDK::PS::UserGameServerInfo* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::PS::UserGameServerInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTINFODIALOG_BFD351B6C66D1424_FAD355F75D2ECFC1_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
