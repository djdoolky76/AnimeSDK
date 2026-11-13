#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIConfigEx; }
namespace RPG::GameCore { class ComplexSkillAIFactorGroupWeightEx; }

#define RPG_GAMECORE_COMPLEXSKILLAICONFIGEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5185E0)
#define RPG_GAMECORE_COMPLEXSKILLAICONFIGEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F518440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIConfigEx_TypeDefinitionIndex = 17841;

	class ComplexSkillAIConfigEx : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint SkillBasicPower; // 0x10
		::Il2CppArray<::RPG::GameCore::ComplexSkillAIFactorGroupWeightEx*>* Groups; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONFIGEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIConfigEx* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIConfigEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONFIGEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
