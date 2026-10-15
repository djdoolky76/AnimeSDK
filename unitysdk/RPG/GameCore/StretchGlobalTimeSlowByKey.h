#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StretchGlobalTimeSlowByKey; }
namespace System { class String; }

#define RPG_GAMECORE_STRETCHGLOBALTIMESLOWBYKEY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2B710)
#define RPG_GAMECORE_STRETCHGLOBALTIMESLOWBYKEY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB2B720)
#define RPG_GAMECORE_STRETCHGLOBALTIMESLOWBYKEY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB2B6E0)

namespace RPG::GameCore
{
	class StretchGlobalTimeSlowByKey : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SlowKey; // 0x18
		::System::Single Scale; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRETCHGLOBALTIMESLOWBYKEY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StretchGlobalTimeSlowByKey* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StretchGlobalTimeSlowByKey*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRETCHGLOBALTIMESLOWBYKEY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StretchGlobalTimeSlowByKey* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StretchGlobalTimeSlowByKey*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRETCHGLOBALTIMESLOWBYKEY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
