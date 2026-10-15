#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorExcludeConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NHPILKKHIMK_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0xBBDAF50)
#define NHPILKKHIMK_CTOR_OFFSET UNITYSDK_OFFSET(0xBBDB650)
#define NHPILKKHIMK_DGDMIJLFJAJ_OFFSET UNITYSDK_OFFSET(0xBBDB230)
#define NHPILKKHIMK_LKJHOMENINA_OFFSET UNITYSDK_OFFSET(0xBBDB3C0)
#define NHPILKKHIMK_NNEDEODMNEN_OFFSET UNITYSDK_OFFSET(0xBBDB2D0)
#define NHPILKKHIMK_NOJFKNJHIFD_OFFSET UNITYSDK_OFFSET(0xBBDB560)
#define NHPILKKHIMK_PAAKFGJAJKB_OFFSET UNITYSDK_OFFSET(0xBBDB170)

inline static constexpr unsigned int NHPILKKHIMK_TypeDefinitionIndex = 77383;

	class NHPILKKHIMK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPILKKHIMK_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + NHPILKKHIMK_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean PAAKFGJAJKB(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig*))((::PBYTE)hIl2Cpp + NHPILKKHIMK_PAAKFGJAJKB_OFFSET))(a1, a2);
		}

		static ::System::Boolean DGDMIJLFJAJ(::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + NHPILKKHIMK_DGDMIJLFJAJ_OFFSET))(a1, a2);
		}

		static ::System::Void LKJHOMENINA(::IOGNBKGNPFD* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig* a2, ::System::Collections::Generic::HashSet_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::IOGNBKGNPFD*, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NHPILKKHIMK_LKJHOMENINA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NNEDEODMNEN(::System::Collections::Generic::HashSet_1<::System::Int32>* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NHPILKKHIMK_NNEDEODMNEN_OFFSET))(a1, a2);
		}

		static ::System::Void NOJFKNJHIFD(::System::Collections::Generic::HashSet_1<::System::Int32>* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NHPILKKHIMK_NOJFKNJHIFD_OFFSET))(a1, a2);
		}

	};
