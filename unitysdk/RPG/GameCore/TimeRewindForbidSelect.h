#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ForbidSelectTimeRewindReason.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindForbidSelect; }

#define RPG_GAMECORE_TIMEREWINDFORBIDSELECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB881D0)
#define RPG_GAMECORE_TIMEREWINDFORBIDSELECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB881E0)
#define RPG_GAMECORE_TIMEREWINDFORBIDSELECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB881A0)

namespace RPG::GameCore
{
	class TimeRewindForbidSelect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Forbid; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ForbidSelectTimeRewindReason Reason; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDFORBIDSELECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindForbidSelect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindForbidSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDFORBIDSELECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindForbidSelect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindForbidSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDFORBIDSELECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
