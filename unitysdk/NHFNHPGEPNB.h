#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKNLHDIFKPD.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Text { class StringBuilder; }

#define NHFNHPGEPNB_CTOR_OFFSET UNITYSDK_OFFSET(0x25DE0)
#define NHFNHPGEPNB_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x25F00)
#define NHFNHPGEPNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x25ED0)
#define NHFNHPGEPNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x25E60)
#define NHFNHPGEPNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x25E50)
#define NHFNHPGEPNB_GET_COMPLEXITYLIMITS_OFFSET UNITYSDK_OFFSET(0x94D0)
#define NHFNHPGEPNB_GET_INTERVALS_OFFSET UNITYSDK_OFFSET(0x1D30)
#define NHFNHPGEPNB_GET_MINREFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x25E00)
#define NHFNHPGEPNB_GET_SETPOOLSELECTED_OFFSET UNITYSDK_OFFSET(0xACE0)
#define NHFNHPGEPNB_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC49CB90)
#define NHFNHPGEPNB_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC49CB50)
#define NHFNHPGEPNB_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x25E30)
#define NHFNHPGEPNB_SET_COMPLEXITYLIMITS_OFFSET UNITYSDK_OFFSET(0x94E0)
#define NHFNHPGEPNB_SET_INTERVALS_OFFSET UNITYSDK_OFFSET(0x94B0)
#define NHFNHPGEPNB_SET_MINREFRESHINTERVAL_OFFSET UNITYSDK_OFFSET(0x25E10)
#define NHFNHPGEPNB_SET_SETPOOLSELECTED_OFFSET UNITYSDK_OFFSET(0xACF0)
#define NHFNHPGEPNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x25E20)

inline static constexpr unsigned int NHFNHPGEPNB_TypeDefinitionIndex = 79956;

	struct alignas(8) NHFNHPGEPNB
	{
		::System::Collections::Generic::IReadOnlyList_1<::System::Single>* _Intervals_k__BackingField; // 0x10
		::System::UInt32 _SetPoolSelected_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>* _ComplexityLimits_k__BackingField; // 0x20
		::System::Single _MinRefreshInterval_k__BackingField; // 0x28
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>*, ::System::Single))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Single>* get_Intervals()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_GET_INTERVALS_OFFSET))(this);
		}

		::System::Void set_Intervals(::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_SET_INTERVALS_OFFSET))(this, a1);
		}

		::System::UInt32 get_SetPoolSelected()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_GET_SETPOOLSELECTED_OFFSET))(this);
		}

		::System::Void set_SetPoolSelected(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_SET_SETPOOLSELECTED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>* get_ComplexityLimits()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_GET_COMPLEXITYLIMITS_OFFSET))(this);
		}

		::System::Void set_ComplexityLimits(::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::AKNLHDIFKPD>*))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_SET_COMPLEXITYLIMITS_OFFSET))(this, a1);
		}

		::System::Single get_MinRefreshInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_GET_MINREFRESHINTERVAL_OFFSET))(this);
		}

		::System::Void set_MinRefreshInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_SET_MINREFRESHINTERVAL_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::NHFNHPGEPNB a1, ::NHFNHPGEPNB a2)
		{
			return ((::System::Boolean(*)(::NHFNHPGEPNB, ::NHFNHPGEPNB))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::NHFNHPGEPNB a1, ::NHFNHPGEPNB a2)
		{
			return ((::System::Boolean(*)(::NHFNHPGEPNB, ::NHFNHPGEPNB))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::NHFNHPGEPNB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHFNHPGEPNB))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::Object* a1, ::System::UInt32 a2, ::System::Object* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::UInt32, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + NHFNHPGEPNB_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4);
		}

	};
