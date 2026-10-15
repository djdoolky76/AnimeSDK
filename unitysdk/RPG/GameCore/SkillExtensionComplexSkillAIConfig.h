#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillAutoLockType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace RPG::GameCore { class SkillExtensionComplexSkillAIConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLEXTENSIONCOMPLEXSKILLAICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC1FF0)
#define RPG_GAMECORE_SKILLEXTENSIONCOMPLEXSKILLAICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC1E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillExtensionComplexSkillAIConfig_TypeDefinitionIndex = 15570;

	class SkillExtensionComplexSkillAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean AlwaysDoAutoLock; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::SkillAutoLockType AutoLockType; // 0x14
		::RPG::GameCore::ComplexSkillAIConfig* AutoLockBySource; // 0x18
		::RPG::GameCore::ComplexSkillAIConfig* ComplexSkillAIPreCheck; // 0x20
		::RPG::GameCore::ComplexSkillAIConfig* ComplexSkillAI; // 0x28
		::System::String* AIUltraSkillPriority; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLEXTENSIONCOMPLEXSKILLAICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillExtensionComplexSkillAIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillExtensionComplexSkillAIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLEXTENSIONCOMPLEXSKILLAICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
