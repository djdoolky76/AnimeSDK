#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKAJMEMCBLC;
class KJCPCOELJAG;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }

#define KJCPCOELJAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB43A790)
#define KJCPCOELJAG_CTOR_2_OFFSET UNITYSDK_OFFSET(0xB43AFC0)
#define KJCPCOELJAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB43A730)
#define KJCPCOELJAG_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xB43AFE0)
#define KJCPCOELJAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB43ABF0)
#define KJCPCOELJAG_EQUALS_OFFSET UNITYSDK_OFFSET(0xB43AF00)
#define KJCPCOELJAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB43AD50)
#define KJCPCOELJAG_GET_CARDS_OFFSET UNITYSDK_OFFSET(0xB43A770)
#define KJCPCOELJAG_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xB43A740)
#define KJCPCOELJAG_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB43ABD0)
#define KJCPCOELJAG_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB43ABA0)
#define KJCPCOELJAG_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB43AA90)
#define KJCPCOELJAG_SET_CARDS_OFFSET UNITYSDK_OFFSET(0xB43A780)
#define KJCPCOELJAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB43A7F0)
#define KJCPCOELJAG__CLONE___OFFSET UNITYSDK_OFFSET(0xB43AF60)

inline static constexpr unsigned int KJCPCOELJAG_TypeDefinitionIndex = 81095;

	class KJCPCOELJAG : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>* _Cards_k__BackingField; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>*))((::PBYTE)hIl2Cpp + KJCPCOELJAG_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::HKAJMEMCBLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + KJCPCOELJAG_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::KJCPCOELJAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJCPCOELJAG*))((::PBYTE)hIl2Cpp + KJCPCOELJAG_CTOR_2_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCPCOELJAG_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>* get_Cards()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCPCOELJAG_GET_CARDS_OFFSET))(this);
		}

		::System::Void set_Cards(::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::HKAJMEMCBLC*>*))((::PBYTE)hIl2Cpp + KJCPCOELJAG_SET_CARDS_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCPCOELJAG_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + KJCPCOELJAG_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::KJCPCOELJAG* a1, ::KJCPCOELJAG* a2)
		{
			return ((::System::Boolean(*)(::KJCPCOELJAG*, ::KJCPCOELJAG*))((::PBYTE)hIl2Cpp + KJCPCOELJAG_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::KJCPCOELJAG* a1, ::KJCPCOELJAG* a2)
		{
			return ((::System::Boolean(*)(::KJCPCOELJAG*, ::KJCPCOELJAG*))((::PBYTE)hIl2Cpp + KJCPCOELJAG_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCPCOELJAG_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJCPCOELJAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJCPCOELJAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJCPCOELJAG*))((::PBYTE)hIl2Cpp + KJCPCOELJAG_EQUALS_1_OFFSET))(this, a1);
		}

		::KJCPCOELJAG* _Clone__()
		{
			return ((::KJCPCOELJAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCPCOELJAG__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJCPCOELJAG_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
