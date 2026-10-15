#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSetTechActive; }

#define RPG_GAMECORE_MARBLESETTECHACTIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D848860)
#define RPG_GAMECORE_MARBLESETTECHACTIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D848870)
#define RPG_GAMECORE_MARBLESETTECHACTIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D848760)

namespace RPG::GameCore
{
	class MarbleSetTechActive : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Boolean Active; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETTECHACTIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSetTechActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSetTechActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETTECHACTIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSetTechActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSetTechActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETTECHACTIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
