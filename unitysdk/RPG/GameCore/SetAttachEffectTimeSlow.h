#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAttachEffectTimeSlow; }
namespace System { class String; }

#define RPG_GAMECORE_SETATTACHEFFECTTIMESLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA94490)
#define RPG_GAMECORE_SETATTACHEFFECTTIMESLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA944A0)
#define RPG_GAMECORE_SETATTACHEFFECTTIMESLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA94460)

namespace RPG::GameCore
{
	class SetAttachEffectTimeSlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AttachPoint; // 0x18
		::System::Single TimeSlow; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHEFFECTTIMESLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAttachEffectTimeSlow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAttachEffectTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHEFFECTTIMESLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAttachEffectTimeSlow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAttachEffectTimeSlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETATTACHEFFECTTIMESLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
