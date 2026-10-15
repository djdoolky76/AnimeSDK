#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetMonsterPhasePointPrefab; }
namespace RPG::GameCore { class TaskContext; }

#define OJLCPGBAJMK_CTOR_OFFSET UNITYSDK_OFFSET(0xBEBDCE0)
#define OJLCPGBAJMK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEBDD10)

inline static constexpr unsigned int OJLCPGBAJMK_TypeDefinitionIndex = 47610;

	class OJLCPGBAJMK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterPhasePointPrefab* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterPhasePointPrefab*))((::PBYTE)hIl2Cpp + OJLCPGBAJMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLCPGBAJMK_ONTASKBEGIN_OFFSET))(this);
		}

	};
