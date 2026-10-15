#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttachmentVisibilityNode; }
namespace RPG::GameCore { class SetAttachmentScale; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETATTACHMENTSCALE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA94780)
#define RPG_GAMECORE_SETATTACHMENTSCALE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA947A0)
#define RPG_GAMECORE_SETATTACHMENTSCALE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA94600)

namespace RPG::GameCore
{
	class SetAttachmentScale : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean OnceOnly; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AttachmentVisibilityNode*>* AttachPoints; // 0x28
		::System::Boolean IsReset; // 0x30
		::System::Byte _padding1[0x3];
		::RPG::MVector3 Scale; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAttachmentScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAttachmentScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAttachmentScale* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAttachmentScale*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTSCALE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
