#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorLaserTargetConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define DAADMLLEADB_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0xDFB0520)
#define DAADMLLEADB_CTOR_OFFSET UNITYSDK_OFFSET(0xDFB06A0)
#define DAADMLLEADB_HPMHPJIJAPB_OFFSET UNITYSDK_OFFSET(0xDFB05E0)

inline static constexpr unsigned int DAADMLLEADB_TypeDefinitionIndex = 77386;

	class DAADMLLEADB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAADMLLEADB_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + DAADMLLEADB_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean HPMHPJIJAPB(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorLaserTargetConfig* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*, ::RPG::GameCore::LittleGameAbilityTargetSelectorLaserTargetConfig*))((::PBYTE)hIl2Cpp + DAADMLLEADB_HPMHPJIJAPB_OFFSET))(a1, a2);
		}

	};
