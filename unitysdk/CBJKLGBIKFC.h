#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialChangeLockTarget; }

#define CBJKLGBIKFC_AIEBAFCKIMJ_OFFSET UNITYSDK_OFFSET(0xCE17EE0)
#define CBJKLGBIKFC_CTOR_OFFSET UNITYSDK_OFFSET(0xCE17680)
#define CBJKLGBIKFC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE17690)
#define CBJKLGBIKFC_JGEFLCELNII_OFFSET UNITYSDK_OFFSET(0xCE18090)
#define CBJKLGBIKFC_NLPDDJLGHCL_OFFSET UNITYSDK_OFFSET(0xCE17AC0)
#define CBJKLGBIKFC_OJGEOLHPFJM_OFFSET UNITYSDK_OFFSET(0xCE17750)
#define CBJKLGBIKFC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCE176D0)
#define CBJKLGBIKFC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCE17E30)
#define CBJKLGBIKFC_TICK_OFFSET UNITYSDK_OFFSET(0xCE17E80)

inline static constexpr unsigned int CBJKLGBIKFC_TypeDefinitionIndex = 60083;

	class CBJKLGBIKFC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TutorialChangeLockTarget* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TutorialChangeLockTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TutorialChangeLockTarget*))((::PBYTE)hIl2Cpp + CBJKLGBIKFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJKLGBIKFC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJKLGBIKFC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJKLGBIKFC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBJKLGBIKFC_TICK_OFFSET))(this, a1);
		}

		::System::Boolean OJGEOLHPFJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJKLGBIKFC_OJGEOLHPFJM_OFFSET))(this);
		}

		::System::Boolean NLPDDJLGHCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJKLGBIKFC_NLPDDJLGHCL_OFFSET))(this);
		}

		::System::Boolean AIEBAFCKIMJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CBJKLGBIKFC_AIEBAFCKIMJ_OFFSET))(this, a1);
		}

		::System::Boolean JGEFLCELNII(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CBJKLGBIKFC_JGEFLCELNII_OFFSET))(this, a1);
		}

	};
