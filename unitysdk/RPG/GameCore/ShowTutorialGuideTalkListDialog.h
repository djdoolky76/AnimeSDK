#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialGuideDirectionType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideTalkListType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowTutorialGuideTalkListDialog; }
namespace RPG::GameCore { class TutorialGuideShowConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALGUIDETALKLISTDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE6B40)
#define RPG_GAMECORE_SHOWTUTORIALGUIDETALKLISTDIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE6B50)
#define RPG_GAMECORE_SHOWTUTORIALGUIDETALKLISTDIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE6B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTutorialGuideTalkListDialog_TypeDefinitionIndex = 24346;

	class ShowTutorialGuideTalkListDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TutorialGuideTalkListType GuideTalkType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* NodeID; // 0x20
		::Il2CppArray<::System::UInt32>* GuideTalkIDList; // 0x28
		::RPG::GameCore::TutorialGuideDirectionType CustomGuideDirection; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TutorialGuideShowConfig* GuideTalkShowConfig; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDETALKLISTDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTutorialGuideTalkListDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTutorialGuideTalkListDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDETALKLISTDIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTutorialGuideTalkListDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTutorialGuideTalkListDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDETALKLISTDIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
