#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorMissleTargetConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FBIOFCIIBIC_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0x15695490)
#define FBIOFCIIBIC_CTOR_OFFSET UNITYSDK_OFFSET(0x15695610)
#define FBIOFCIIBIC_HPMHPJIJAPB_OFFSET UNITYSDK_OFFSET(0x15695550)

inline static constexpr unsigned int FBIOFCIIBIC_TypeDefinitionIndex = 77385;

	class FBIOFCIIBIC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIOFCIIBIC_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + FBIOFCIIBIC_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean HPMHPJIJAPB(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorMissleTargetConfig* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::RPG::GameCore::LittleGameAbilityTargetSelectorMissleTargetConfig*))((::PBYTE)hIl2Cpp + FBIOFCIIBIC_HPMHPJIJAPB_OFFSET))(a1, a2);
		}

	};
