#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SwordTrainingSetDynamicValueByEnemyRank; }
namespace RPG::GameCore { class TaskContext; }

#define CEPBFKNPBKD_CTOR_OFFSET UNITYSDK_OFFSET(0xC9F7FF0)
#define CEPBFKNPBKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC9F80D0)

inline static constexpr unsigned int CEPBFKNPBKD_TypeDefinitionIndex = 55700;

	class CEPBFKNPBKD
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingSetDynamicValueByEnemyRank*))((::PBYTE)hIl2Cpp + CEPBFKNPBKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEPBFKNPBKD_ONTASKBEGIN_OFFSET))(this);
		}

	};
