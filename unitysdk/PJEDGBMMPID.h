#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByCompareAllWaveMonsterRank; }
namespace RPG::GameCore { class TaskContext; }

#define PJEDGBMMPID_CTOR_OFFSET UNITYSDK_OFFSET(0xC283E40)
#define PJEDGBMMPID_EVALUATE_OFFSET UNITYSDK_OFFSET(0xC283E70)

inline static constexpr unsigned int PJEDGBMMPID_TypeDefinitionIndex = 54513;

	class PJEDGBMMPID
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareAllWaveMonsterRank* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareAllWaveMonsterRank*))((::PBYTE)hIl2Cpp + PJEDGBMMPID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEDGBMMPID_EVALUATE_OFFSET))(this);
		}

	};
