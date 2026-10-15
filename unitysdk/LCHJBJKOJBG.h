#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/EHitDirectionType.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UpdateMonsterFootIKMode; }

#define LCHJBJKOJBG_CTOR_OFFSET UNITYSDK_OFFSET(0xB60F0E0)
#define LCHJBJKOJBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB60F0F0)
#define LCHJBJKOJBG_FOFBIMBBDCP_OFFSET UNITYSDK_OFFSET(0xB60F8E0)
#define LCHJBJKOJBG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB60F130)
#define LCHJBJKOJBG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB60F970)
#define LCHJBJKOJBG_TICK_OFFSET UNITYSDK_OFFSET(0xB60F9C0)

inline static constexpr unsigned int LCHJBJKOJBG_TypeDefinitionIndex = 55794;

	class LCHJBJKOJBG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::UpdateMonsterFootIKMode* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UpdateMonsterFootIKMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UpdateMonsterFootIKMode*))((::PBYTE)hIl2Cpp + LCHJBJKOJBG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHJBJKOJBG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHJBJKOJBG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHJBJKOJBG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LCHJBJKOJBG_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::EHitDirectionType FOFBIMBBDCP(::System::Single a1)
		{
			return ((::RPG::GameCore::EHitDirectionType(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LCHJBJKOJBG_FOFBIMBBDCP_OFFSET))(this, a1);
		}

	};
