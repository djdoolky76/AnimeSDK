#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AISkillDependencyConfig; }
namespace RPG::GameCore { class CheckSkillDependencyAxis; }
namespace System { class String; }

#define RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54EEB0)
#define RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54EEC0)
#define RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54EE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckSkillDependencyAxis_TypeDefinitionIndex = 15507;

	class CheckSkillDependencyAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::String* SkillName; // 0x10
		::Il2CppArray<::RPG::GameCore::AISkillDependencyConfig*>* DependencyConfigList; // 0x18
		::RPG::GameCore::FixPoint CheckScore; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckSkillDependencyAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckSkillDependencyAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckSkillDependencyAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckSkillDependencyAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
