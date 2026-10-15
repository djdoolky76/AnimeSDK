#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvPlayerAddAttachment; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVPLAYERADDATTACHMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AA690)
#define RPG_GAMECORE_ADVPLAYERADDATTACHMENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3AA6A0)
#define RPG_GAMECORE_ADVPLAYERADDATTACHMENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AA660)

namespace RPG::GameCore
{
	class AdvPlayerAddAttachment : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* BindTargetType; // 0x18
		::RPG::GameCore::DynamicString* PrefabPath; // 0x20
		::RPG::GameCore::DynamicString* UniqueName; // 0x28
		::RPG::GameCore::DynamicString* AttachPoint; // 0x30
		::RPG::MVector3 AttachOffset; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERADDATTACHMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerAddAttachment* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerAddAttachment*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERADDATTACHMENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvPlayerAddAttachment* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvPlayerAddAttachment*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVPLAYERADDATTACHMENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
