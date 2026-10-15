#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BreakMunicipalChat; }
namespace System { class String; }

#define RPG_GAMECORE_BREAKMUNICIPALCHAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D47FA30)
#define RPG_GAMECORE_BREAKMUNICIPALCHAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D47FA40)
#define RPG_GAMECORE_BREAKMUNICIPALCHAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D47F9F0)

namespace RPG::GameCore
{
	class BreakMunicipalChat : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsBreak; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* MunicipalChatName; // 0x20
		::Il2CppArray<::System::String*>* BreakNpcUniqueNames; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BREAKMUNICIPALCHAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BreakMunicipalChat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BreakMunicipalChat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BREAKMUNICIPALCHAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BreakMunicipalChat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BreakMunicipalChat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BREAKMUNICIPALCHAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
