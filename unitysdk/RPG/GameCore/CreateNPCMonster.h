#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateNPCMonster; }

#define RPG_GAMECORE_CREATENPCMONSTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E4140)
#define RPG_GAMECORE_CREATENPCMONSTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E4150)
#define RPG_GAMECORE_CREATENPCMONSTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E4100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateNPCMonster_TypeDefinitionIndex = 20291;

	class CreateNPCMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCMONSTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateNPCMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateNPCMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCMONSTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateNPCMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateNPCMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATENPCMONSTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
