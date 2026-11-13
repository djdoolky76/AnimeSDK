#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define JGELGFLEHJF_CTOR_OFFSET UNITYSDK_OFFSET(0x3E36D30)
#define JGELGFLEHJF_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3E36E20)
#define JGELGFLEHJF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3E36E00)
#define JGELGFLEHJF_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E36D90)
#define JGELGFLEHJF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3E36D80)
#define JGELGFLEHJF_GET_HCOINNUM_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define JGELGFLEHJF_GET_ISAFFORDABLE_OFFSET UNITYSDK_OFFSET(0x3DDA6C0)
#define JGELGFLEHJF_GET_NEEDCOUNT_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define JGELGFLEHJF_GET_TICKETNUM_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define JGELGFLEHJF_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1934C4D0)
#define JGELGFLEHJF_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1934C4A0)
#define JGELGFLEHJF_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3E36D60)
#define JGELGFLEHJF_SET_HCOINNUM_OFFSET UNITYSDK_OFFSET(0x3D73BE0)
#define JGELGFLEHJF_SET_ISAFFORDABLE_OFFSET UNITYSDK_OFFSET(0x3E34860)
#define JGELGFLEHJF_SET_NEEDCOUNT_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define JGELGFLEHJF_SET_TICKETNUM_OFFSET UNITYSDK_OFFSET(0xFDBF80)
#define JGELGFLEHJF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E36D50)

inline static constexpr unsigned int JGELGFLEHJF_TypeDefinitionIndex = 76963;

	struct alignas(4) JGELGFLEHJF
	{
		::System::UInt32 _NeedCount_k__BackingField; // 0x10
		::System::UInt32 _TicketNum_k__BackingField; // 0x14
		::System::UInt32 _HcoinNum_k__BackingField; // 0x18
		::System::Boolean _IsAffordable_k__BackingField; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + JGELGFLEHJF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_NeedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELGFLEHJF_GET_NEEDCOUNT_OFFSET))(this);
		}

		::System::Void set_NeedCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGELGFLEHJF_SET_NEEDCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TicketNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELGFLEHJF_GET_TICKETNUM_OFFSET))(this);
		}

		::System::Void set_TicketNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGELGFLEHJF_SET_TICKETNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_HcoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELGFLEHJF_GET_HCOINNUM_OFFSET))(this);
		}

		::System::Void set_HcoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGELGFLEHJF_SET_HCOINNUM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAffordable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELGFLEHJF_GET_ISAFFORDABLE_OFFSET))(this);
		}

		::System::Void set_IsAffordable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGELGFLEHJF_SET_ISAFFORDABLE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELGFLEHJF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + JGELGFLEHJF_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::JGELGFLEHJF a1, ::JGELGFLEHJF a2)
		{
			return ((::System::Boolean(*)(::JGELGFLEHJF, ::JGELGFLEHJF))((::PBYTE)hIl2Cpp + JGELGFLEHJF_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::JGELGFLEHJF a1, ::JGELGFLEHJF a2)
		{
			return ((::System::Boolean(*)(::JGELGFLEHJF, ::JGELGFLEHJF))((::PBYTE)hIl2Cpp + JGELGFLEHJF_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELGFLEHJF_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGELGFLEHJF_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::JGELGFLEHJF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGELGFLEHJF))((::PBYTE)hIl2Cpp + JGELGFLEHJF_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + JGELGFLEHJF_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4);
		}

	};
