#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class SetBattleConditionProgress; }
namespace RPG::GameCore { class TaskContext; }

#define NLKNMFAJIBA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC707D0)
#define NLKNMFAJIBA_NIBBKMGLLEF_OFFSET UNITYSDK_OFFSET(0xBC709B0)
#define NLKNMFAJIBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC70800)

inline static constexpr unsigned int NLKNMFAJIBA_TypeDefinitionIndex = 58517;

	class NLKNMFAJIBA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetBattleConditionProgress* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetBattleConditionProgress*))((::PBYTE)hIl2Cpp + NLKNMFAJIBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLKNMFAJIBA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void NIBBKMGLLEF(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NLKNMFAJIBA_NIBBKMGLLEF_OFFSET))(this, a1, a2);
		}

	};
