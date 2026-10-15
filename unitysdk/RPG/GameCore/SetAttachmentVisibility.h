#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttachmentVisibilityNode; }
namespace RPG::GameCore { class SetAttachmentVisibility; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETATTACHMENTVISIBILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA94F40)
#define RPG_GAMECORE_SETATTACHMENTVISIBILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA94F50)
#define RPG_GAMECORE_SETATTACHMENTVISIBILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA94DF0)

namespace RPG::GameCore
{
	class SetAttachmentVisibility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::AttachmentVisibilityNode*>* AttachPoints; // 0x20
		::System::Boolean Visibility; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 VisibilityApplyDelay; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAttachmentVisibility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAttachmentVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAttachmentVisibility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAttachmentVisibility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHMENTVISIBILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
