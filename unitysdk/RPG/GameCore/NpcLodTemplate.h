#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodTemplate.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NpcLodTemplate; }

#define RPG_GAMECORE_NPCLODTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DC350)
#define RPG_GAMECORE_NPCLODTEMPLATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8DC360)
#define RPG_GAMECORE_NPCLODTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DC310)

namespace RPG::GameCore
{
	class NpcLodTemplate : public ::RPG::GameCore::LodTemplate
	{
	public:
		::System::Boolean MeshLod; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcLodTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcLodTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCLODTEMPLATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
