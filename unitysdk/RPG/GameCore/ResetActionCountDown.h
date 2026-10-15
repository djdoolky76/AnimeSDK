#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetActionCountDown; }
namespace System { class String; }

#define RPG_GAMECORE_RESETACTIONCOUNTDOWN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95C310)
#define RPG_GAMECORE_RESETACTIONCOUNTDOWN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95C320)
#define RPG_GAMECORE_RESETACTIONCOUNTDOWN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95C2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetActionCountDown_TypeDefinitionIndex = 23695;

	class ResetActionCountDown : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 InitialCount; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* Description; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETACTIONCOUNTDOWN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetActionCountDown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETACTIONCOUNTDOWN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetActionCountDown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETACTIONCOUNTDOWN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
