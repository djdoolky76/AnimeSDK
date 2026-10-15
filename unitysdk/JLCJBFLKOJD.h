#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLCJBFLKOJD;
class LBKMCGDMNJO;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define JLCJBFLKOJD_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB2393D0)
#define JLCJBFLKOJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB2393A0)
#define JLCJBFLKOJD_CTOR_2_OFFSET UNITYSDK_OFFSET(0xB23A140)
#define JLCJBFLKOJD_CTOR_OFFSET UNITYSDK_OFFSET(0xB239390)
#define JLCJBFLKOJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB239D50)
#define JLCJBFLKOJD_EQUALS_OFFSET UNITYSDK_OFFSET(0xB239C50)
#define JLCJBFLKOJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB2398B0)
#define JLCJBFLKOJD_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xB239340)
#define JLCJBFLKOJD_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xB239370)
#define JLCJBFLKOJD_GET_ISTRIAL_OFFSET UNITYSDK_OFFSET(0xB239380)
#define JLCJBFLKOJD_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB239810)
#define JLCJBFLKOJD_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB239770)
#define JLCJBFLKOJD_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB2396A0)
#define JLCJBFLKOJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB239460)
#define JLCJBFLKOJD__CLONE___OFFSET UNITYSDK_OFFSET(0xB23A0E0)

inline static constexpr unsigned int JLCJBFLKOJD_TypeDefinitionIndex = 81461;

	class JLCJBFLKOJD : public ::System::Object
	{
	public:
		::System::Boolean _IsTrial_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 _InstanceID_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + JLCJBFLKOJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::LBKMCGDMNJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBKMCGDMNJO*))((::PBYTE)hIl2Cpp + JLCJBFLKOJD_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::JLCJBFLKOJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLCJBFLKOJD*))((::PBYTE)hIl2Cpp + JLCJBFLKOJD_CTOR_2_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCJBFLKOJD_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCJBFLKOJD_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Boolean get_IsTrial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCJBFLKOJD_GET_ISTRIAL_OFFSET))(this);
		}

		::System::Int32 CompareTo(::JLCJBFLKOJD* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::JLCJBFLKOJD*))((::PBYTE)hIl2Cpp + JLCJBFLKOJD_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCJBFLKOJD_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + JLCJBFLKOJD_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::JLCJBFLKOJD* a1, ::JLCJBFLKOJD* a2)
		{
			return ((::System::Boolean(*)(::JLCJBFLKOJD*, ::JLCJBFLKOJD*))((::PBYTE)hIl2Cpp + JLCJBFLKOJD_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::JLCJBFLKOJD* a1, ::JLCJBFLKOJD* a2)
		{
			return ((::System::Boolean(*)(::JLCJBFLKOJD*, ::JLCJBFLKOJD*))((::PBYTE)hIl2Cpp + JLCJBFLKOJD_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCJBFLKOJD_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLCJBFLKOJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLCJBFLKOJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLCJBFLKOJD*))((::PBYTE)hIl2Cpp + JLCJBFLKOJD_EQUALS_1_OFFSET))(this, a1);
		}

		::JLCJBFLKOJD* _Clone__()
		{
			return ((::JLCJBFLKOJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCJBFLKOJD__CLONE___OFFSET))(this);
		}

	};
