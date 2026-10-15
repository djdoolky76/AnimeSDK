#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CloneWeakness; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLONEWEAKNESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D599AE0)
#define RPG_GAMECORE_CLONEWEAKNESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D599AF0)
#define RPG_GAMECORE_CLONEWEAKNESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D599AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CloneWeakness_TypeDefinitionIndex = 23077;

	class CloneWeakness : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean KeepProtected; // 0x28
		::System::Boolean KeepSecret; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLONEWEAKNESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CloneWeakness* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CloneWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLONEWEAKNESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CloneWeakness* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CloneWeakness*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLONEWEAKNESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
