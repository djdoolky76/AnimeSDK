#pragma once
#include "unitysdk/unitysdk.h"

#define AMNPGECIPHB_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x15588B70)
#define AMNPGECIPHB_CTOR_OFFSET UNITYSDK_OFFSET(0x2E73840)
#define AMNPGECIPHB_GET_BLOCKDELAYTIME_OFFSET UNITYSDK_OFFSET(0x1C80)
#define AMNPGECIPHB_GET_LOADINGWHEELDELAY_OFFSET UNITYSDK_OFFSET(0x1D20)
#define AMNPGECIPHB_GET_MAXWAITTIME_OFFSET UNITYSDK_OFFSET(0x1D10)
#define AMNPGECIPHB_GET_RSPCMDID_OFFSET UNITYSDK_OFFSET(0x2E73830)

	struct alignas(4) AMNPGECIPHB
	{
		::System::UInt16 _RspCmdID_k__BackingField; // 0x10
		::System::Byte _padding0[0x2];
		::System::Single _MaxWaitTime_k__BackingField; // 0x14
		::System::Single _LoadingWheelDelay_k__BackingField; // 0x18
		::System::Single _BlockDelayTime_k__BackingField; // 0x1C
		// static const ::System::Object DGLNJBJKAJB; // 0x0
		// static const ::System::Object EPDCKPDMLPO; // 0x0
		// static const ::System::Object JFOIAFEKNIN; // 0x0
		::System::Void _ctor(::System::UInt16 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AMNPGECIPHB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt16 get_RspCmdID()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNPGECIPHB_GET_RSPCMDID_OFFSET))(this);
		}

		::System::Single get_MaxWaitTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNPGECIPHB_GET_MAXWAITTIME_OFFSET))(this);
		}

		::System::Single get_LoadingWheelDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNPGECIPHB_GET_LOADINGWHEELDELAY_OFFSET))(this);
		}

		::System::Single get_BlockDelayTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNPGECIPHB_GET_BLOCKDELAYTIME_OFFSET))(this);
		}

		/*
		static ::AMNPGECIPHB BBNJCKPKPDN(::System::UInt16 a1)
		{
			return ((::AMNPGECIPHB(*)(::System::UInt16))((::PBYTE)hIl2Cpp + AMNPGECIPHB_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

	};
