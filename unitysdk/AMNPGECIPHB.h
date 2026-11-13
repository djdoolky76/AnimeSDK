#pragma once
#include "unitysdk/unitysdk.h"

#define AMNPGECIPHB_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x197E3240)
#define AMNPGECIPHB_CTOR_OFFSET UNITYSDK_OFFSET(0x3E3B2B0)
#define AMNPGECIPHB_GET_BLOCKDELAYTIME_OFFSET UNITYSDK_OFFSET(0xFDD0D0)
#define AMNPGECIPHB_GET_LOADINGWHEELDELAY_OFFSET UNITYSDK_OFFSET(0xFDCAE0)
#define AMNPGECIPHB_GET_MAXWAITTIME_OFFSET UNITYSDK_OFFSET(0x7CEEB0)
#define AMNPGECIPHB_GET_RSPCMDID_OFFSET UNITYSDK_OFFSET(0xADC750)

inline static constexpr unsigned int AMNPGECIPHB_TypeDefinitionIndex = 71355;

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
