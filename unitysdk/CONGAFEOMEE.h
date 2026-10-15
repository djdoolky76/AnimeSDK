#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CONGAFEOMEE_BKIMNDILPHI_OFFSET UNITYSDK_OFFSET(0xDCC04E0)
#define CONGAFEOMEE_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0xDCC0320)
#define CONGAFEOMEE_CTOR_OFFSET UNITYSDK_OFFSET(0xDCC0570)
#define CONGAFEOMEE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xDCC0280)
#define CONGAFEOMEE_MNPFDFDBMNG_OFFSET UNITYSDK_OFFSET(0xDCC0420)

	class CONGAFEOMEE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* HOIBDAGLICO; // 0x10
		::System::UInt32 MPNGLIJBEEL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONGAFEOMEE_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONGAFEOMEE_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::UInt32 BKJGMFOKKKN(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONGAFEOMEE_BKJGMFOKKKN_OFFSET))(this, a1);
		}

		::System::Boolean MNPFDFDBMNG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONGAFEOMEE_MNPFDFDBMNG_OFFSET))(this, a1, a2);
		}

		::System::Void BKIMNDILPHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONGAFEOMEE_BKIMNDILPHI_OFFSET))(this);
		}

	};
