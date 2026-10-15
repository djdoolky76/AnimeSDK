#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PetMarbleBuffText; }

#define RPG_GAMECORE_PETMARBLEBUFFTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D908D60)
#define RPG_GAMECORE_PETMARBLEBUFFTEXT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D908D70)
#define RPG_GAMECORE_PETMARBLEBUFFTEXT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D908D10)

namespace RPG::GameCore
{
	class PetMarbleBuffText : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 TextId; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLEBUFFTEXT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetMarbleBuffText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetMarbleBuffText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLEBUFFTEXT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PetMarbleBuffText* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PetMarbleBuffText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETMARBLEBUFFTEXT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
