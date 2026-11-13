#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAIBOFDLEBF;

#define DAIBOFDLEBF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19944E40)
#define DAIBOFDLEBF_CTOR_OFFSET UNITYSDK_OFFSET(0x19944EB0)
#define DAIBOFDLEBF_GET_ISGETCRITICALCHANCEPENALTY_OFFSET UNITYSDK_OFFSET(0x19944E20)
#define DAIBOFDLEBF_GET_ISGETPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0x19944E00)
#define DAIBOFDLEBF_GET_ISHASPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0x19944DE0)
#define DAIBOFDLEBF_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x19944DC0)
#define DAIBOFDLEBF_SET_ISGETCRITICALCHANCEPENALTY_OFFSET UNITYSDK_OFFSET(0x19944E30)
#define DAIBOFDLEBF_SET_ISGETPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0x19944E10)
#define DAIBOFDLEBF_SET_ISHASPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0x19944DF0)
#define DAIBOFDLEBF_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x19944DD0)

inline static constexpr unsigned int DAIBOFDLEBF_TypeDefinitionIndex = 76574;

	class DAIBOFDLEBF : public ::System::Object
	{
	public:
		::System::Boolean _IsGetCriticalChancePenalty_k__BackingField; // 0x10
		::System::Boolean _IsHasPropertyBonus_k__BackingField; // 0x11
		::System::Boolean _IsGetPropertyBonus_k__BackingField; // 0x12
		::System::Byte _padding0[0x1];
		::System::Single _Score_k__BackingField; // 0x14
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
