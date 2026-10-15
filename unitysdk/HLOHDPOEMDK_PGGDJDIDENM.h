#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLOHDPOEMDK_APFBEFJEGOK.h"
class COOONBGCCCM;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define HLOHDPOEMDK_PGGDJDIDENM_CTOR_OFFSET UNITYSDK_OFFSET(0x10480)
#define HLOHDPOEMDK_PGGDJDIDENM_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x2305FF0)
#define HLOHDPOEMDK_PGGDJDIDENM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2E7EF80)
#define HLOHDPOEMDK_PGGDJDIDENM_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E7EF10)
#define HLOHDPOEMDK_PGGDJDIDENM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E7EF00)
#define HLOHDPOEMDK_PGGDJDIDENM_GET_CARDS_OFFSET UNITYSDK_OFFSET(0x1D30)
#define HLOHDPOEMDK_PGGDJDIDENM_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1D40)
#define HLOHDPOEMDK_PGGDJDIDENM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x15D756F0)
#define HLOHDPOEMDK_PGGDJDIDENM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x15D756C0)
#define HLOHDPOEMDK_PGGDJDIDENM_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2E7EEE0)
#define HLOHDPOEMDK_PGGDJDIDENM_SET_CARDS_OFFSET UNITYSDK_OFFSET(0x94B0)
#define HLOHDPOEMDK_PGGDJDIDENM_SET_KEY_OFFSET UNITYSDK_OFFSET(0x94C0)
#define HLOHDPOEMDK_PGGDJDIDENM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E7EED0)

inline static constexpr unsigned int HLOHDPOEMDK_PGGDJDIDENM_TypeDefinitionIndex = 81101;

	struct alignas(8) HLOHDPOEMDK_PGGDJDIDENM
	{
		::System::Collections::Generic::List_1<::COOONBGCCCM*>* _Cards_k__BackingField; // 0x10
		::HLOHDPOEMDK_APFBEFJEGOK _Key_k__BackingField; // 0x18
		::System::Void _ctor(::System::Collections::Generic::List_1<::COOONBGCCCM*>* a1, ::HLOHDPOEMDK_APFBEFJEGOK a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::COOONBGCCCM*>*, ::HLOHDPOEMDK_APFBEFJEGOK))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_PGGDJDIDENM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::COOONBGCCCM*>* get_Cards()
		{
			return ((::System::Collections::Generic::List_1<::COOONBGCCCM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_PGGDJDIDENM_GET_CARDS_OFFSET))(this);
		}

		::System::Void set_Cards(::System::Collections::Generic::List_1<::COOONBGCCCM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::COOONBGCCCM*>*))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_PGGDJDIDENM_SET_CARDS_OFFSET))(this, a1);
		}

		::HLOHDPOEMDK_APFBEFJEGOK get_Key()
		{
			return ((::HLOHDPOEMDK_APFBEFJEGOK(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_PGGDJDIDENM_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::HLOHDPOEMDK_APFBEFJEGOK a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLOHDPOEMDK_APFBEFJEGOK))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_PGGDJDIDENM_SET_KEY_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_PGGDJDIDENM_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_PGGDJDIDENM_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::HLOHDPOEMDK_PGGDJDIDENM a1, ::HLOHDPOEMDK_PGGDJDIDENM a2)
		{
			return ((::System::Boolean(*)(::HLOHDPOEMDK_PGGDJDIDENM, ::HLOHDPOEMDK_PGGDJDIDENM))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_PGGDJDIDENM_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::HLOHDPOEMDK_PGGDJDIDENM a1, ::HLOHDPOEMDK_PGGDJDIDENM a2)
		{
			return ((::System::Boolean(*)(::HLOHDPOEMDK_PGGDJDIDENM, ::HLOHDPOEMDK_PGGDJDIDENM))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_PGGDJDIDENM_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_PGGDJDIDENM_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_PGGDJDIDENM_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::HLOHDPOEMDK_PGGDJDIDENM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLOHDPOEMDK_PGGDJDIDENM))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_PGGDJDIDENM_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::System::Object* a1, ::HLOHDPOEMDK_APFBEFJEGOK a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::HLOHDPOEMDK_APFBEFJEGOK))((::PBYTE)hIl2Cpp + HLOHDPOEMDK_PGGDJDIDENM_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
