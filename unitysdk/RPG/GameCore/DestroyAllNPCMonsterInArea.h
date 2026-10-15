#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DestroyAllNPCMonsterInArea; }
namespace System { class String; }

#define RPG_GAMECORE_DESTROYALLNPCMONSTERINAREA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FC630)
#define RPG_GAMECORE_DESTROYALLNPCMONSTERINAREA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FC640)
#define RPG_GAMECORE_DESTROYALLNPCMONSTERINAREA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FC600)

namespace RPG::GameCore
{
	class DestroyAllNPCMonsterInArea : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYALLNPCMONSTERINAREA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyAllNPCMonsterInArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyAllNPCMonsterInArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYALLNPCMONSTERINAREA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyAllNPCMonsterInArea* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyAllNPCMonsterInArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYALLNPCMONSTERINAREA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
