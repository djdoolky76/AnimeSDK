#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace RPG::GameCore { class ComplexSkillAIFactorGroupWeight; }
namespace System { class String; }

#define RPG_GAMECORE_COMPLEXSKILLAICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59F6B0)
#define RPG_GAMECORE_COMPLEXSKILLAICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59F4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIConfig_TypeDefinitionIndex = 15567;

	class ComplexSkillAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint SkillBasicPower; // 0x10
		::Il2CppArray<::RPG::GameCore::ComplexSkillAIFactorGroupWeight*>* Groups; // 0x18
		::System::String* AISkillPrecheckPriority; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComplexSkillAIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComplexSkillAIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
