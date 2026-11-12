#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarkAwardTargetUsed; }

#define RPG_GAMECORE_MARKAWARDTARGETUSED_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA64230)
#define RPG_GAMECORE_MARKAWARDTARGETUSED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA64240)
#define RPG_GAMECORE_MARKAWARDTARGETUSED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA64170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarkAwardTargetUsed_TypeDefinitionIndex = 20494;

	class MarkAwardTargetUsed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKAWARDTARGETUSED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarkAwardTargetUsed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarkAwardTargetUsed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKAWARDTARGETUSED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarkAwardTargetUsed* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarkAwardTargetUsed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARKAWARDTARGETUSED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
