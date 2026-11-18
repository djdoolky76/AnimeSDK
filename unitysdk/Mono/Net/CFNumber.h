#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

#define MONO_NET_CFNUMBER_ASBOOL_OFFSET UNITYSDK_OFFSET(0x1DD277A0)
#define MONO_NET_CFNUMBER_ASINT32_OFFSET UNITYSDK_OFFSET(0x1DD27980)
#define MONO_NET_CFNUMBER_CFNUMBERCREATE_OFFSET UNITYSDK_OFFSET(0x1DD27A20)
#define MONO_NET_CFNUMBER_CFNUMBERGETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1DD278F0)
#define MONO_NET_CFNUMBER_CFNUMBERGETVALUE_OFFSET UNITYSDK_OFFSET(0x1DD27710)
#define MONO_NET_CFNUMBER_FROMINT32_OFFSET UNITYSDK_OFFSET(0x1DD27AB0)
#define MONO_NET_CFNUMBER_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1DD27B70)
#define MONO_NET_CFNUMBER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DD27840)
#define MONO_NET_CFNUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD27690)

namespace Mono::Net
{
	inline static constexpr unsigned int CFNumber_TypeDefinitionIndex = 2585;

	class CFNumber : public ::Mono::Net::CFObject
	{
	public:
		::System::Void _ctor(::System::IntPtr handle, ::System::Boolean own)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFNUMBER__CTOR_OFFSET))(this, handle, own);
		}

		static ::System::Boolean CFNumberGetValue(::System::IntPtr handle, ::System::IntPtr type, ::System::Boolean& value)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::Boolean&))((::PBYTE)hIl2Cpp + MONO_NET_CFNUMBER_CFNUMBERGETVALUE_OFFSET))(handle, type, value);
		}

		static ::System::Boolean AsBool(::System::IntPtr handle)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFNUMBER_ASBOOL_OFFSET))(handle);
		}

		static ::System::Boolean op_Implicit(::Mono::Net::CFNumber* number)
		{
			return ((::System::Boolean(*)(::Mono::Net::CFNumber*))((::PBYTE)hIl2Cpp + MONO_NET_CFNUMBER_OP_IMPLICIT_OFFSET))(number);
		}

		static ::System::Boolean CFNumberGetValue_1(::System::IntPtr handle, ::System::IntPtr type, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + MONO_NET_CFNUMBER_CFNUMBERGETVALUE_1_OFFSET))(handle, type, value);
		}

		static ::System::Int32 AsInt32(::System::IntPtr handle)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFNUMBER_ASINT32_OFFSET))(handle);
		}

		static ::System::IntPtr CFNumberCreate(::System::IntPtr allocator, ::System::IntPtr theType, ::System::IntPtr valuePtr)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFNUMBER_CFNUMBERCREATE_OFFSET))(allocator, theType, valuePtr);
		}

		static ::Mono::Net::CFNumber* FromInt32(::System::Int32 number)
		{
			return ((::Mono::Net::CFNumber*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_CFNUMBER_FROMINT32_OFFSET))(number);
		}

		static ::System::Int32 op_Implicit_1(::Mono::Net::CFNumber* number)
		{
			return ((::System::Int32(*)(::Mono::Net::CFNumber*))((::PBYTE)hIl2Cpp + MONO_NET_CFNUMBER_OP_IMPLICIT_1_OFFSET))(number);
		}
	};
}
