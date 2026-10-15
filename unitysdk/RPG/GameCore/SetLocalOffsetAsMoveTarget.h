#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetLocalOffsetAsMoveTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB8220)
#define RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB8230)
#define RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB81F0)

namespace RPG::GameCore
{
	class SetLocalOffsetAsMoveTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::MVector3 LocalOffset; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLocalOffsetAsMoveTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLocalOffsetAsMoveTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLocalOffsetAsMoveTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLocalOffsetAsMoveTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOCALOFFSETASMOVETARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
