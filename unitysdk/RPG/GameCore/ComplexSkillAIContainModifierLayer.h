#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIContainModifierLayer; }
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59FA90)
#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59FAA0)
#define RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59FA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIContainModifierLayer_TypeDefinitionIndex = 15533;

	class ComplexSkillAIContainModifierLayer : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::System::Boolean SumAllTarget; // 0x11
		::System::Byte _padding0[0x6];
		::System::String* ModifilerName; // 0x18
		::System::Boolean StringFromParam; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIContainModifierLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIContainModifierLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIContainModifierLayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIContainModifierLayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONTAINMODIFIERLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
