#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByTotalHPFromMonsterID; }
namespace RPG::GameCore { class TaskContext; }

#define GPBAJONNLLN_CTOR_OFFSET UNITYSDK_OFFSET(0x15B3CA90)
#define GPBAJONNLLN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B3CB70)

inline static constexpr unsigned int GPBAJONNLLN_TypeDefinitionIndex = 55474;

	class GPBAJONNLLN
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByTotalHPFromMonsterID* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByTotalHPFromMonsterID*))((::PBYTE)hIl2Cpp + GPBAJONNLLN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPBAJONNLLN_ONTASKBEGIN_OFFSET))(this);
		}

	};
