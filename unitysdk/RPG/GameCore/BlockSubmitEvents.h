#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BlockSubmitEvents; }

#define RPG_GAMECORE_BLOCKSUBMITEVENTS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D443340)
#define RPG_GAMECORE_BLOCKSUBMITEVENTS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D443350)
#define RPG_GAMECORE_BLOCKSUBMITEVENTS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D443310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BlockSubmitEvents_TypeDefinitionIndex = 24278;

	class BlockSubmitEvents : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSUBMITEVENTS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BlockSubmitEvents* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BlockSubmitEvents*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSUBMITEVENTS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BlockSubmitEvents* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BlockSubmitEvents*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BLOCKSUBMITEVENTS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
