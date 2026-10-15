#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TutorialChangeLockTarget; }

#define CBJKLGBIKFC_AIEBAFCKIMJ_OFFSET UNITYSDK_OFFSET(0xC4A7A50)
#define CBJKLGBIKFC_CTOR_OFFSET UNITYSDK_OFFSET(0xC4A71F0)
#define CBJKLGBIKFC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC4A7200)
#define CBJKLGBIKFC_JGEFLCELNII_OFFSET UNITYSDK_OFFSET(0xC4A7C00)
#define CBJKLGBIKFC_NLPDDJLGHCL_OFFSET UNITYSDK_OFFSET(0xC4A7630)
#define CBJKLGBIKFC_OJGEOLHPFJM_OFFSET UNITYSDK_OFFSET(0xC4A72C0)
#define CBJKLGBIKFC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4A7240)
#define CBJKLGBIKFC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC4A79A0)
#define CBJKLGBIKFC_TICK_OFFSET UNITYSDK_OFFSET(0xC4A79F0)

inline static constexpr unsigned int CBJKLGBIKFC_TypeDefinitionIndex = 58815;

	class CBJKLGBIKFC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TutorialChangeLockTarget* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
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
