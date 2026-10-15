#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowUIPage; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UIImageNode; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWUIPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE7B70)
#define RPG_GAMECORE_SHOWUIPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE7B80)
#define RPG_GAMECORE_SHOWUIPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE7B40)

namespace RPG::GameCore
{
	class ShowUIPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AssetPath; // 0x18
		::System::Boolean WaitShowPageFinish; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::UIImageNode*>* UIImageNodes; // 0x28
		::Il2CppArray<::RPG::GameCore::UITextNode*>* UITextNodes; // 0x30
		::System::Single LifeTime; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TargetEvaluator* DisplayTarget; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUIPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowUIPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowUIPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUIPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowUIPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowUIPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUIPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
