#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TransferMahJongLayoutEffect; }
namespace System { class String; }

#define RPG_GAMECORE_TRANSFERMAHJONGLAYOUTEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC38500)
#define RPG_GAMECORE_TRANSFERMAHJONGLAYOUTEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC38510)
#define RPG_GAMECORE_TRANSFERMAHJONGLAYOUTEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC384D0)

namespace RPG::GameCore
{
	class TransferMahJongLayoutEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SourceUniqueEffectName; // 0x18
		::System::String* TargetUniqueEffectName; // 0x20
		::System::Boolean IsFade; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFERMAHJONGLAYOUTEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TransferMahJongLayoutEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TransferMahJongLayoutEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFERMAHJONGLAYOUTEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TransferMahJongLayoutEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TransferMahJongLayoutEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRANSFERMAHJONGLAYOUTEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
