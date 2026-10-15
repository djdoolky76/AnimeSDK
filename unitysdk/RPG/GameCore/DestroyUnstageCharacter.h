#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DestroyUnstageCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_DESTROYUNSTAGECHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FD8F0)
#define RPG_GAMECORE_DESTROYUNSTAGECHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FD900)
#define RPG_GAMECORE_DESTROYUNSTAGECHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FD8C0)

namespace RPG::GameCore
{
	class DestroyUnstageCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* ReasonKey; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYUNSTAGECHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyUnstageCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyUnstageCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYUNSTAGECHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyUnstageCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyUnstageCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYUNSTAGECHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
