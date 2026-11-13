#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitNewDecalDialogExit; }

#define RPG_GAMECORE_WAITNEWDECALDIALOGEXIT_CTOR_OFFSET UNITYSDK_OFFSET(0x207FCB30)
#define RPG_GAMECORE_WAITNEWDECALDIALOGEXIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207FCB40)
#define RPG_GAMECORE_WAITNEWDECALDIALOGEXIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207FCB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitNewDecalDialogExit_TypeDefinitionIndex = 22071;

	class WaitNewDecalDialogExit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* WaitDecalList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitNewDecalDialogExit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitNewDecalDialogExit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitNewDecalDialogExit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitNewDecalDialogExit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITNEWDECALDIALOGEXIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
