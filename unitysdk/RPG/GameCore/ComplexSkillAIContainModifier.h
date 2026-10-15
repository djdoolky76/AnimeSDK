#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIContainModifier; }
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59F8B0)
#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59F8C0)
#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59F880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIContainModifier_TypeDefinitionIndex = 15532;

	class ComplexSkillAIContainModifier : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* ModifilerName; // 0x18
		::System::Boolean StringFromParam; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIContainModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIContainModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIContainModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIContainModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
