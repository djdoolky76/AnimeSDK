#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ShowHalfScreenPage; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWHALFSCREENPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB2B10)
#define RPG_GAMECORE_SHOWHALFSCREENPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB2B20)
#define RPG_GAMECORE_SHOWHALFSCREENPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB2AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHalfScreenPage_TypeDefinitionIndex = 20468;

	class ShowHalfScreenPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::RPG::GameCore::DynamicString* Param; // 0x20
		::System::Boolean ShowByCustomTask; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CustomShowUI; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIShow; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReset; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIExit; // 0x48
		::System::Boolean EndDialogueOnUIExit; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHALFSCREENPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowHalfScreenPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowHalfScreenPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHALFSCREENPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowHalfScreenPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowHalfScreenPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHALFSCREENPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
