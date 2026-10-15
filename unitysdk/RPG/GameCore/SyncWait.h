#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SyncWait; }
namespace System { class String; }

#define RPG_GAMECORE_SYNCWAIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB23040)
#define RPG_GAMECORE_SYNCWAIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB23050)
#define RPG_GAMECORE_SYNCWAIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB23010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncWait_TypeDefinitionIndex = 20436;

	class SyncWait : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SyncKey; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCWAIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncWait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCWAIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncWait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCWAIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
