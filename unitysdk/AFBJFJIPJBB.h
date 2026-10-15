#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorIntersectConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AFBJFJIPJBB_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0xCF06170)
#define AFBJFJIPJBB_CTOR_OFFSET UNITYSDK_OFFSET(0xCF065D0)
#define AFBJFJIPJBB_LNOBGCGFNNE_OFFSET UNITYSDK_OFFSET(0xCF062D0)
#define AFBJFJIPJBB_NJONDNEFDDC_OFFSET UNITYSDK_OFFSET(0xCF06210)

	class AFBJFJIPJBB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFBJFJIPJBB_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + AFBJFJIPJBB_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean NJONDNEFDDC(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig*))((::PBYTE)hIl2Cpp + AFBJFJIPJBB_NJONDNEFDDC_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::System::Int32>* LNOBGCGFNNE(::IOGNBKGNPFD* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::IOGNBKGNPFD*, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig*))((::PBYTE)hIl2Cpp + AFBJFJIPJBB_LNOBGCGFNNE_OFFSET))(a1, a2);
		}

	};
