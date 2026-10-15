#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class CFPNIJINMJA_PEFBMMJJAMI;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CFPNIJINMJA_PEFBMMJJAMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0xCC5CA80)
#define CFPNIJINMJA_PEFBMMJJAMI_CTOR_OFFSET UNITYSDK_OFFSET(0xCC5B690)
#define CFPNIJINMJA_PEFBMMJJAMI_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xCC5CAB0)
#define CFPNIJINMJA_PEFBMMJJAMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xCC5C5B0)
#define CFPNIJINMJA_PEFBMMJJAMI_EQUALS_OFFSET UNITYSDK_OFFSET(0xCC5C4B0)
#define CFPNIJINMJA_PEFBMMJJAMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xCC5C020)
#define CFPNIJINMJA_PEFBMMJJAMI_GET_ACTIONSCORE_OFFSET UNITYSDK_OFFSET(0xCC5BB60)
#define CFPNIJINMJA_PEFBMMJJAMI_GET_DAMAGEDHPPERCENT_OFFSET UNITYSDK_OFFSET(0xCC5BB20)
#define CFPNIJINMJA_PEFBMMJJAMI_GET_DAMAGESCORE_OFFSET UNITYSDK_OFFSET(0xCC5BB40)
#define CFPNIJINMJA_PEFBMMJJAMI_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xCC5BAF0)
#define CFPNIJINMJA_PEFBMMJJAMI_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xCC5BF80)
#define CFPNIJINMJA_PEFBMMJJAMI_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xCC5BEE0)
#define CFPNIJINMJA_PEFBMMJJAMI_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xCC5BDC0)
#define CFPNIJINMJA_PEFBMMJJAMI_SET_ACTIONSCORE_OFFSET UNITYSDK_OFFSET(0xCC5BB70)
#define CFPNIJINMJA_PEFBMMJJAMI_SET_DAMAGEDHPPERCENT_OFFSET UNITYSDK_OFFSET(0xCC5BB30)
#define CFPNIJINMJA_PEFBMMJJAMI_SET_DAMAGESCORE_OFFSET UNITYSDK_OFFSET(0xCC5BB50)
#define CFPNIJINMJA_PEFBMMJJAMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0xCC5BB80)
#define CFPNIJINMJA_PEFBMMJJAMI__CLONE___OFFSET UNITYSDK_OFFSET(0xCC5CA20)

inline static constexpr unsigned int CFPNIJINMJA_PEFBMMJJAMI_TypeDefinitionIndex = 81607;

	class CFPNIJINMJA_PEFBMMJJAMI : public ::System::Object
	{
	public:
		::System::Nullable_1<::System::Int32> _ActionScore_k__BackingField; // 0x10
		::System::Int32 _DamagedHpPercent_k__BackingField; // 0x18
		::System::Int32 _DamageScore_k__BackingField; // 0x1C
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Nullable_1<::System::Int32> a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_CTOR_OFFSET))(this, a1, a2, a3);
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

		::System::Nullable_1<::System::Int32> get_ActionScore()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_GET_ACTIONSCORE_OFFSET))(this);
		}

		::System::Void set_ActionScore(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CFPNIJINMJA_PEFBMMJJAMI_SET_ACTIONSCORE_OFFSET))(this, a1);
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
