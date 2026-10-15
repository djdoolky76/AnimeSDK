#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AutoBubbleConfig; }
namespace RPG::GameCore { class NoteComboConfig; }
namespace RPG::GameCore { class NoteConfig; }
namespace RPG::GameCore { class NoteGroupConfig; }

#define RPG_GAMECORE_NOTEGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AC9A0)
#define RPG_GAMECORE_NOTEGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8AC670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NoteGroupConfig_TypeDefinitionIndex = 16948;

	class NoteGroupConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single StartTime; // 0x10
		::System::Single EndTime; // 0x14
		::RPG::GameCore::AutoBubbleConfig* AutoBubble; // 0x18
		::System::Boolean TutorialScore; // 0x20
		::System::Boolean IgnoreTutorialLoop; // 0x21
		::System::Boolean IsEmpty; // 0x22
		::System::Byte _padding0[0x5];
		::Il2CppArray<::RPG::GameCore::NoteComboConfig*>* NoteComboList; // 0x28
		::Il2CppArray<::RPG::GameCore::NoteConfig*>* NoteList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTEGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NoteGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NoteGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTEGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
