#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPIKMAGDDI.h"
namespace RPG::GameCore { class CreateBattleEventFromGridFightBackend; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TaskContext; }

#define HNJFGBNMAIE_BEHAHFONDGP_OFFSET UNITYSDK_OFFSET(0x15D8F6D0)
#define HNJFGBNMAIE_CTOR_OFFSET UNITYSDK_OFFSET(0x15D8F3D0)
#define HNJFGBNMAIE_HAPCMKAALCO_OFFSET UNITYSDK_OFFSET(0x15D8FD20)
#define HNJFGBNMAIE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D8F3F0)

inline static constexpr unsigned int HNJFGBNMAIE_TypeDefinitionIndex = 58040;

	class HNJFGBNMAIE : public ::NAPIKMAGDDI
	{
	public:
		::RPG::GameCore::GameEntity* MAFEOONDEOD; // 0x40
		::RPG::GameCore::CreateBattleEventFromGridFightBackend* CGCGDKLLBPL; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEventFromGridFightBackend* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEventFromGridFightBackend*))((::PBYTE)hIl2Cpp + HNJFGBNMAIE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJFGBNMAIE_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* BEHAHFONDGP(::System::UInt32 a1, ::RPG::GameCore::StageRow* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + HNJFGBNMAIE_BEHAHFONDGP_OFFSET))(this, a1, a2);
		}

		::System::Void HAPCMKAALCO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HNJFGBNMAIE_HAPCMKAALCO_OFFSET))(this, a1);
		}

	};
