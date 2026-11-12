#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class CMOPLAHDEPN;
class FOMDMAGLLNI;
class KHPENGJFKBB;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Text { class StringBuilder; }

#define FOMDMAGLLNI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x16828B00)
#define FOMDMAGLLNI_CTOR_2_OFFSET UNITYSDK_OFFSET(0x16829860)
#define FOMDMAGLLNI_CTOR_OFFSET UNITYSDK_OFFSET(0x16828AA0)
#define FOMDMAGLLNI_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x16829880)
#define FOMDMAGLLNI_EDHLEDPGLHC_OFFSET UNITYSDK_OFFSET(0x16828C50)
#define FOMDMAGLLNI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x168295F0)
#define FOMDMAGLLNI_EQUALS_OFFSET UNITYSDK_OFFSET(0x168294F0)
#define FOMDMAGLLNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x168292F0)
#define FOMDMAGLLNI_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x16828AB0)
#define FOMDMAGLLNI_GET_STAGES_OFFSET UNITYSDK_OFFSET(0x16828AE0)
#define FOMDMAGLLNI_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x16829250)
#define FOMDMAGLLNI_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x168291B0)
#define FOMDMAGLLNI_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x168290A0)
#define FOMDMAGLLNI_SET_STAGES_OFFSET UNITYSDK_OFFSET(0x16828AF0)
#define FOMDMAGLLNI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16828E60)
#define FOMDMAGLLNI__CLONE___OFFSET UNITYSDK_OFFSET(0x16829800)

inline static constexpr unsigned int FOMDMAGLLNI_TypeDefinitionIndex = 84239;

	class FOMDMAGLLNI : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::KHPENGJFKBB*>* _Stages_k__BackingField; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::KHPENGJFKBB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::KHPENGJFKBB*>*))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::CMOPLAHDEPN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::CMOPLAHDEPN*>*))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::FOMDMAGLLNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOMDMAGLLNI*))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_CTOR_2_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KHPENGJFKBB*>* get_Stages()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KHPENGJFKBB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_GET_STAGES_OFFSET))(this);
		}

		::System::Void set_Stages(::System::Collections::Generic::IReadOnlyList_1<::KHPENGJFKBB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::KHPENGJFKBB*>*))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_SET_STAGES_OFFSET))(this, a1);
		}

		::FOMDMAGLLNI* EDHLEDPGLHC(::System::Int32 a1, ::System::Nullable_1<::System::UInt32> a2)
		{
			return ((::FOMDMAGLLNI*(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_EDHLEDPGLHC_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::FOMDMAGLLNI* a1, ::FOMDMAGLLNI* a2)
		{
			return ((::System::Boolean(*)(::FOMDMAGLLNI*, ::FOMDMAGLLNI*))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::FOMDMAGLLNI* a1, ::FOMDMAGLLNI* a2)
		{
			return ((::System::Boolean(*)(::FOMDMAGLLNI*, ::FOMDMAGLLNI*))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FOMDMAGLLNI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOMDMAGLLNI*))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_EQUALS_1_OFFSET))(this, a1);
		}

		::FOMDMAGLLNI* _Clone__()
		{
			return ((::FOMDMAGLLNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMDMAGLLNI__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOMDMAGLLNI_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
