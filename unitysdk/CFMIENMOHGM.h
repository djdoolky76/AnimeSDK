#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorUnionConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CFMIENMOHGM_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0xCC53BF0)
#define CFMIENMOHGM_BAOFAHJOADO_OFFSET UNITYSDK_OFFSET(0xCC53C90)
#define CFMIENMOHGM_CTOR_OFFSET UNITYSDK_OFFSET(0xCC54090)
#define CFMIENMOHGM_GIGKEMOGHMK_OFFSET UNITYSDK_OFFSET(0xCC53E10)
#define CFMIENMOHGM_IKAENLHPKLL_OFFSET UNITYSDK_OFFSET(0xCC53D50)
#define CFMIENMOHGM_NNEDEODMNEN_OFFSET UNITYSDK_OFFSET(0xCC53FA0)

	class CFMIENMOHGM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMIENMOHGM_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CFMIENMOHGM_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean BAOFAHJOADO(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig*))((::PBYTE)hIl2Cpp + CFMIENMOHGM_BAOFAHJOADO_OFFSET))(a1, a2);
		}

		static ::System::Void IKAENLHPKLL(::IOGNBKGNPFD* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig* a2, ::System::Collections::Generic::HashSet_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CFMIENMOHGM_IKAENLHPKLL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GIGKEMOGHMK(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2, ::System::Collections::Generic::HashSet_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CFMIENMOHGM_GIGKEMOGHMK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NNEDEODMNEN(::System::Collections::Generic::HashSet_1<::System::Int32>* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CFMIENMOHGM_NNEDEODMNEN_OFFSET))(a1, a2);
		}

	};
