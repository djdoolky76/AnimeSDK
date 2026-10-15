#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveMazeBuff; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVEMAZEBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D958230)
#define RPG_GAMECORE_REMOVEMAZEBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D958240)
#define RPG_GAMECORE_REMOVEMAZEBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D958200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveMazeBuff_TypeDefinitionIndex = 20420;

	class RemoveMazeBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMAZEBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveMazeBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMAZEBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveMazeBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMAZEBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
