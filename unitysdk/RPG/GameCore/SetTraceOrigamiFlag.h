#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTraceOrigamiFlag; }

#define RPG_GAMECORE_SETTRACEORIGAMIFLAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9AD40)
#define RPG_GAMECORE_SETTRACEORIGAMIFLAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9AD50)
#define RPG_GAMECORE_SETTRACEORIGAMIFLAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9AC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTraceOrigamiFlag_TypeDefinitionIndex = 21867;

	class SetTraceOrigamiFlag : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACEORIGAMIFLAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTraceOrigamiFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTraceOrigamiFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACEORIGAMIFLAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTraceOrigamiFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTraceOrigamiFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACEORIGAMIFLAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
