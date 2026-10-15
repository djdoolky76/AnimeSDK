#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMOPLAHDEPN;
class JLCJBFLKOJD;
class KHPENGJFKBB;
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Text { class StringBuilder; }

#define KHPENGJFKBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB414F90)
#define KHPENGJFKBB_CTOR_2_OFFSET UNITYSDK_OFFSET(0xB415DE0)
#define KHPENGJFKBB_CTOR_OFFSET UNITYSDK_OFFSET(0xB414E40)
#define KHPENGJFKBB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB415A40)
#define KHPENGJFKBB_EQUALS_OFFSET UNITYSDK_OFFSET(0xB415940)
#define KHPENGJFKBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB415610)
#define KHPENGJFKBB_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xB414E30)
#define KHPENGJFKBB_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xB414DF0)
#define KHPENGJFKBB_GET_LINEUP_OFFSET UNITYSDK_OFFSET(0xB414E20)
#define KHPENGJFKBB_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB415570)
#define KHPENGJFKBB_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB4154D0)
#define KHPENGJFKBB_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB415360)
#define KHPENGJFKBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB415120)
#define KHPENGJFKBB__CLONE___OFFSET UNITYSDK_OFFSET(0xB415D80)

inline static constexpr unsigned int KHPENGJFKBB_TypeDefinitionIndex = 81462;

	class KHPENGJFKBB : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::JLCJBFLKOJD*>* _Lineup_k__BackingField; // 0x10
		::System::Nullable* _BuffID_k__BackingField; // 0x18
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::JLCJBFLKOJD*>* a1, ::System::Nullable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::JLCJBFLKOJD*>*, ::System::Nullable*))((::PBYTE)hIl2Cpp + KHPENGJFKBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::CMOPLAHDEPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMOPLAHDEPN*))((::PBYTE)hIl2Cpp + KHPENGJFKBB_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::KHPENGJFKBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPENGJFKBB*))((::PBYTE)hIl2Cpp + KHPENGJFKBB_CTOR_2_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPENGJFKBB_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::JLCJBFLKOJD*>* get_Lineup()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::JLCJBFLKOJD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPENGJFKBB_GET_LINEUP_OFFSET))(this);
		}

		::System::Nullable* get_BuffID()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPENGJFKBB_GET_BUFFID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPENGJFKBB_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + KHPENGJFKBB_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::KHPENGJFKBB* a1, ::KHPENGJFKBB* a2)
		{
			return ((::System::Boolean(*)(::KHPENGJFKBB*, ::KHPENGJFKBB*))((::PBYTE)hIl2Cpp + KHPENGJFKBB_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::KHPENGJFKBB* a1, ::KHPENGJFKBB* a2)
		{
			return ((::System::Boolean(*)(::KHPENGJFKBB*, ::KHPENGJFKBB*))((::PBYTE)hIl2Cpp + KHPENGJFKBB_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPENGJFKBB_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHPENGJFKBB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHPENGJFKBB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPENGJFKBB*))((::PBYTE)hIl2Cpp + KHPENGJFKBB_EQUALS_1_OFFSET))(this, a1);
		}

		::KHPENGJFKBB* _Clone__()
		{
			return ((::KHPENGJFKBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPENGJFKBB__CLONE___OFFSET))(this);
		}

	};
