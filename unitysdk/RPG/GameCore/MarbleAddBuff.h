#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleAddBuff; }

#define RPG_GAMECORE_MARBLEADDBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D836750)
#define RPG_GAMECORE_MARBLEADDBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D836760)
#define RPG_GAMECORE_MARBLEADDBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D836700)

namespace RPG::GameCore
{
	class MarbleAddBuff : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 BuffId; // 0x14
		::System::UInt32 StackCount; // 0x18
		::System::Boolean UseTargetAsSource; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAddBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAddBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAddBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAddBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
