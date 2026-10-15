#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebugLogLevel.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DebugLog; }
namespace System { class String; }

#define RPG_GAMECORE_DEBUGLOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C87A0)
#define RPG_GAMECORE_DEBUGLOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C87B0)
#define RPG_GAMECORE_DEBUGLOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C8770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebugLog_TypeDefinitionIndex = 23763;

	class DebugLog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DebugLogLevel Level; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* Message; // 0x20
		::System::Boolean DumpStack; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DebugLog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DebugLog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DebugLog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DebugLog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
