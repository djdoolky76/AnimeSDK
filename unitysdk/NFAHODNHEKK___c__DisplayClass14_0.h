#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceRegionTag.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NFAHODNHEKK___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C760940)
#define NFAHODNHEKK___C__DISPLAYCLASS14_0___CHECKEFFECTVALID_B__0_OFFSET UNITYSDK_OFFSET(0x1C764D60)
#define NFAHODNHEKK___C__DISPLAYCLASS14_0___CHECKEFFECTVALID_B__1_OFFSET UNITYSDK_OFFSET(0x1C764DC0)

inline static constexpr unsigned int NFAHODNHEKK___c__DisplayClass14_0_TypeDefinitionIndex = 37318;

	class NFAHODNHEKK___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::CakeRaceRegionTag>* regionTagSet; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckEffectValid_b__0(::RPG::GameCore::CakeRaceRegionTag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionTag))((::PBYTE)hIl2Cpp + NFAHODNHEKK___C__DISPLAYCLASS14_0___CHECKEFFECTVALID_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __CheckEffectValid_b__1(::RPG::GameCore::CakeRaceRegionTag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionTag))((::PBYTE)hIl2Cpp + NFAHODNHEKK___C__DISPLAYCLASS14_0___CHECKEFFECTVALID_B__1_OFFSET))(this, a1);
		}

	};
