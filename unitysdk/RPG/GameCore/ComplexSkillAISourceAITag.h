#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourceAITag; }
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEAITAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CF7D0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEAITAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5CF7E0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEAITAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5CF7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceAITag_TypeDefinitionIndex = 15544;

	class ComplexSkillAISourceAITag : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Boolean IsTarget; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* DynamicValueKey; // 0x18
		::System::Boolean StringFromParam; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEAITAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceAITag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceAITag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEAITAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourceAITag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourceAITag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEAITAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
