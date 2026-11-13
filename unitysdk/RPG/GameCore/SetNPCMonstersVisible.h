#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetNPCMonstersVisible; }

#define RPG_GAMECORE_SETNPCMONSTERSVISIBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9DD7D0)
#define RPG_GAMECORE_SETNPCMONSTERSVISIBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F9DD7E0)
#define RPG_GAMECORE_SETNPCMONSTERSVISIBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F9DD790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetNPCMonstersVisible_TypeDefinitionIndex = 20657;

	class SetNPCMonstersVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCMONSTERSVISIBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNPCMonstersVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNPCMonstersVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCMONSTERSVISIBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetNPCMonstersVisible* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetNPCMonstersVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETNPCMONSTERSVISIBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
