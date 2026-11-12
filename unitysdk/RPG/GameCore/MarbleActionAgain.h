#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleActionAgain; }

#define RPG_GAMECORE_MARBLEACTIONAGAIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA50E30)
#define RPG_GAMECORE_MARBLEACTIONAGAIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA50E40)
#define RPG_GAMECORE_MARBLEACTIONAGAIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA50DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleActionAgain_TypeDefinitionIndex = 17002;

	class MarbleActionAgain : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::Boolean IsPaoPao; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEACTIONAGAIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleActionAgain* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleActionAgain*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEACTIONAGAIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleActionAgain* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleActionAgain*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEACTIONAGAIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
