#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define NGIOCFNJNKB_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA3B90)
#define NGIOCFNJNKB_GET_CMDID_OFFSET UNITYSDK_OFFSET(0xBBA3B70)
#define NGIOCFNJNKB_GET_TIMEOUTMS_OFFSET UNITYSDK_OFFSET(0xBBA3B80)

inline static constexpr unsigned int NGIOCFNJNKB_TypeDefinitionIndex = 69404;

	class NGIOCFNJNKB : public ::System::Exception
	{
	public:
		::System::Int32 _TimeoutMs_k__BackingField; // 0x88
		::System::UInt16 _CmdID_k__BackingField; // 0x8C
		::System::Void _ctor(::System::UInt16 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Int32))((::PBYTE)hIl2Cpp + NGIOCFNJNKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt16 get_CmdID()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOCFNJNKB_GET_CMDID_OFFSET))(this);
		}

		::System::Int32 get_TimeoutMs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOCFNJNKB_GET_TIMEOUTMS_OFFSET))(this);
		}

	};
