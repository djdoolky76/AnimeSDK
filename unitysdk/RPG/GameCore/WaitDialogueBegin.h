#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitDialogueBegin; }

#define RPG_GAMECORE_WAITDIALOGUEBEGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC685E0)
#define RPG_GAMECORE_WAITDIALOGUEBEGIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC685F0)
#define RPG_GAMECORE_WAITDIALOGUEBEGIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC685A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDialogueBegin_TypeDefinitionIndex = 20151;

	class WaitDialogueBegin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsOwnerEntity; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BeginCallback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitDialogueBegin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitDialogueBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitDialogueBegin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitDialogueBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
