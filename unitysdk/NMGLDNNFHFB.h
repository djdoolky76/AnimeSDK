#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NMGLDNNFHFB_CTOR_OFFSET UNITYSDK_OFFSET(0xC56B4D0)
#define NMGLDNNFHFB_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0xC56B490)
#define NMGLDNNFHFB_GET_REPORTMESSAGE_OFFSET UNITYSDK_OFFSET(0xC56B4B0)
#define NMGLDNNFHFB_GET_SUCCEED_OFFSET UNITYSDK_OFFSET(0xC56B470)
#define NMGLDNNFHFB_SET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0xC56B4A0)
#define NMGLDNNFHFB_SET_REPORTMESSAGE_OFFSET UNITYSDK_OFFSET(0xC56B4C0)
#define NMGLDNNFHFB_SET_SUCCEED_OFFSET UNITYSDK_OFFSET(0xC56B480)

inline static constexpr unsigned int NMGLDNNFHFB_TypeDefinitionIndex = 71350;

	class NMGLDNNFHFB : public ::System::Object
	{
	public:
		::System::String* _ReportMessage_k__BackingField; // 0x10
		::System::Int32 _ErrorCode_k__BackingField; // 0x18
		::System::Boolean _Succeed_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGLDNNFHFB_CTOR_OFFSET))(this);
		}

		::System::Boolean get_Succeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGLDNNFHFB_GET_SUCCEED_OFFSET))(this);
		}

		::System::Void set_Succeed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMGLDNNFHFB_SET_SUCCEED_OFFSET))(this, a1);
		}

		::System::Int32 get_ErrorCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGLDNNFHFB_GET_ERRORCODE_OFFSET))(this);
		}

		::System::Void set_ErrorCode(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMGLDNNFHFB_SET_ERRORCODE_OFFSET))(this, a1);
		}

		::System::String* get_ReportMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGLDNNFHFB_GET_REPORTMESSAGE_OFFSET))(this);
		}

		::System::Void set_ReportMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NMGLDNNFHFB_SET_REPORTMESSAGE_OFFSET))(this, a1);
		}

	};
