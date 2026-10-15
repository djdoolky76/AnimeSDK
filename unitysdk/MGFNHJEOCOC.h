#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MGFNHJEOCOC;
namespace RPG::GameCore { class PetPartyNavigateDestination; }
namespace RPG::GameCore { class TargetEvaluator; }

#define MGFNHJEOCOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1658E0)
#define MGFNHJEOCOC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D165900)
#define MGFNHJEOCOC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D165880)

inline static constexpr unsigned int MGFNHJEOCOC_TypeDefinitionIndex = 21085;

	class MGFNHJEOCOC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::PetPartyNavigateDestination* FOLENHJBOFI; // 0x20
		::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x28
		::System::Single EEOOODIPEBG; // 0x2C
		::System::Single FAKLGELEEAO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFNHJEOCOC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MGFNHJEOCOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MGFNHJEOCOC*))((::PBYTE)hIl2Cpp + MGFNHJEOCOC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MGFNHJEOCOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MGFNHJEOCOC*))((::PBYTE)hIl2Cpp + MGFNHJEOCOC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
