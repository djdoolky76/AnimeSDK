#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFPNIJINMJA_PEFBMMJJAMI;
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CFPNIJINMJA_PEFBMMJJAMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0xCC61F40)
#define CFPNIJINMJA_PEFBMMJJAMI_CTOR_OFFSET UNITYSDK_OFFSET(0xCC60B50)
#define CFPNIJINMJA_PEFBMMJJAMI_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xCC61F70)
#define CFPNIJINMJA_PEFBMMJJAMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xCC61A70)
#define CFPNIJINMJA_PEFBMMJJAMI_EQUALS_OFFSET UNITYSDK_OFFSET(0xCC61970)
#define CFPNIJINMJA_PEFBMMJJAMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xCC614E0)
#define CFPNIJINMJA_PEFBMMJJAMI_GET_ACTIONSCORE_OFFSET UNITYSDK_OFFSET(0xCC61020)
#define CFPNIJINMJA_PEFBMMJJAMI_GET_DAMAGEDHPPERCENT_OFFSET UNITYSDK_OFFSET(0xCC60FE0)
#define CFPNIJINMJA_PEFBMMJJAMI_GET_DAMAGESCORE_OFFSET UNITYSDK_OFFSET(0xCC61000)
#define CFPNIJINMJA_PEFBMMJJAMI_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xCC60FB0)
#define CFPNIJINMJA_PEFBMMJJAMI_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xCC61440)
#define CFPNIJINMJA_PEFBMMJJAMI_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xCC613A0)
#define CFPNIJINMJA_PEFBMMJJAMI_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xCC61280)
#define CFPNIJINMJA_PEFBMMJJAMI_SET_ACTIONSCORE_OFFSET UNITYSDK_OFFSET(0xCC61030)
#define CFPNIJINMJA_PEFBMMJJAMI_SET_DAMAGEDHPPERCENT_OFFSET UNITYSDK_OFFSET(0xCC60FF0)
#define CFPNIJINMJA_PEFBMMJJAMI_SET_DAMAGESCORE_OFFSET UNITYSDK_OFFSET(0xCC61010)
#define CFPNIJINMJA_PEFBMMJJAMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCC61040)
#define CFPNIJINMJA_PEFBMMJJAMI__CLONE___OFFSET UNITYSDK_OFFSET(0xCC61EE0)

	class CFPNIJINMJA_PEFBMMJJAMI : public ::System::Object
	{
	public:
		::System::Nullable* _ActionScore_k__BackingField; // 0x10
		::System::Int32 _DamageScore_k__BackingField; // 0x18
		::System::Int32 _DamagedHpPercent_k__BackingField; // 0x1C
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Nullable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Nullable*))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::CFPNIJINMJA_PEFBMMJJAMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFPNIJINMJA_PEFBMMJJAMI*))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::Int32 get_DamagedHpPercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_GET_DAMAGEDHPPERCENT_OFFSET))(this);
		}

		::System::Void set_DamagedHpPercent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_SET_DAMAGEDHPPERCENT_OFFSET))(this, a1);
		}

		::System::Int32 get_DamageScore()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_GET_DAMAGESCORE_OFFSET))(this);
		}

		::System::Void set_DamageScore(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_SET_DAMAGESCORE_OFFSET))(this, a1);
		}

		::System::Nullable* get_ActionScore()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_GET_ACTIONSCORE_OFFSET))(this);
		}

		::System::Void set_ActionScore(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_SET_ACTIONSCORE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::CFPNIJINMJA_PEFBMMJJAMI* a1, ::CFPNIJINMJA_PEFBMMJJAMI* a2)
		{
			return ((::System::Boolean(*)(::CFPNIJINMJA_PEFBMMJJAMI*, ::CFPNIJINMJA_PEFBMMJJAMI*))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::CFPNIJINMJA_PEFBMMJJAMI* a1, ::CFPNIJINMJA_PEFBMMJJAMI* a2)
		{
			return ((::System::Boolean(*)(::CFPNIJINMJA_PEFBMMJJAMI*, ::CFPNIJINMJA_PEFBMMJJAMI*))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFPNIJINMJA_PEFBMMJJAMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFPNIJINMJA_PEFBMMJJAMI*))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_EQUALS_1_OFFSET))(this, a1);
		}

		::CFPNIJINMJA_PEFBMMJJAMI* _Clone__()
		{
			return ((::CFPNIJINMJA_PEFBMMJJAMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::System::Int32 a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
		}

	};
