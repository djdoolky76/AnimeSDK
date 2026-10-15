#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorLastAttackerConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KBKAJBKHFEP_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0xB30A0B0)
#define KBKAJBKHFEP_CTOR_OFFSET UNITYSDK_OFFSET(0xB30A640)
#define KBKAJBKHFEP_HPMHPJIJAPB_OFFSET UNITYSDK_OFFSET(0xB30A580)

inline static constexpr unsigned int KBKAJBKHFEP_TypeDefinitionIndex = 77385;

	class KBKAJBKHFEP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKAJBKHFEP_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + KBKAJBKHFEP_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean HPMHPJIJAPB(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorLastAttackerConfig* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::RPG::GameCore::LittleGameAbilityTargetSelectorLastAttackerConfig*))((::PBYTE)hIl2Cpp + KBKAJBKHFEP_HPMHPJIJAPB_OFFSET))(a1, a2);
		}

	};
