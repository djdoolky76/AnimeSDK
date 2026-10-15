#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAISourcePropertyFormation; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropertyFormationValue; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1890)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D18A0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D1840)

namespace RPG::GameCore
{
	class ComplexSkillAISourcePropertyFormation : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropertyFormationValue*>* ValueList; // 0x10
		::RPG::GameCore::DynamicFloat* Expression; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAISourcePropertyFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEPROPERTYFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
