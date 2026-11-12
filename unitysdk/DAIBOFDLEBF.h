#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAIBOFDLEBF;

#define DAIBOFDLEBF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE926A00)
#define DAIBOFDLEBF_CTOR_OFFSET UNITYSDK_OFFSET(0xE926A70)
#define DAIBOFDLEBF_GET_ISGETCRITICALCHANCEPENALTY_OFFSET UNITYSDK_OFFSET(0xE9269E0)
#define DAIBOFDLEBF_GET_ISGETPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0xE9269C0)
#define DAIBOFDLEBF_GET_ISHASPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0xE9269A0)
#define DAIBOFDLEBF_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xE926980)
#define DAIBOFDLEBF_SET_ISGETCRITICALCHANCEPENALTY_OFFSET UNITYSDK_OFFSET(0xE9269F0)
#define DAIBOFDLEBF_SET_ISGETPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0xE9269D0)
#define DAIBOFDLEBF_SET_ISHASPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0xE9269B0)
#define DAIBOFDLEBF_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xE926990)

inline static constexpr unsigned int DAIBOFDLEBF_TypeDefinitionIndex = 76575;

	class DAIBOFDLEBF : public ::System::Object
	{
	public:
		::System::Single _Score_k__BackingField; // 0x10
		::System::Boolean _IsHasPropertyBonus_k__BackingField; // 0x14
		::System::Boolean _IsGetCriticalChancePenalty_k__BackingField; // 0x15
		::System::Boolean _IsGetPropertyBonus_k__BackingField; // 0x16
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIBOFDLEBF_CTOR_OFFSET))(this);
		}

		::System::Single get_Score()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIBOFDLEBF_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DAIBOFDLEBF_SET_SCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHasPropertyBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIBOFDLEBF_GET_ISHASPROPERTYBONUS_OFFSET))(this);
		}

		::System::Void set_IsHasPropertyBonus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAIBOFDLEBF_SET_ISHASPROPERTYBONUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGetPropertyBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIBOFDLEBF_GET_ISGETPROPERTYBONUS_OFFSET))(this);
		}

		::System::Void set_IsGetPropertyBonus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAIBOFDLEBF_SET_ISGETPROPERTYBONUS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGetCriticalChancePenalty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAIBOFDLEBF_GET_ISGETCRITICALCHANCEPENALTY_OFFSET))(this);
		}

		::System::Void set_IsGetCriticalChancePenalty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DAIBOFDLEBF_SET_ISGETCRITICALCHANCEPENALTY_OFFSET))(this, a1);
		}

		static ::DAIBOFDLEBF* BPLPBPMEODA()
		{
			return ((::DAIBOFDLEBF*(*)())((::PBYTE)hIl2Cpp + DAIBOFDLEBF_BPLPBPMEODA_OFFSET))();
		}

	};
