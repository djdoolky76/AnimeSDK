#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SwordTrainingSetDynamicValueByAllyRank; }
namespace RPG::GameCore { class TaskContext; }

#define NACFOJKANEB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA55B40)
#define NACFOJKANEB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA55C20)

inline static constexpr unsigned int NACFOJKANEB_TypeDefinitionIndex = 55699;

	class NACFOJKANEB
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwordTrainingSetDynamicValueByAllyRank* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwordTrainingSetDynamicValueByAllyRank*))((::PBYTE)hIl2Cpp + NACFOJKANEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACFOJKANEB_ONTASKBEGIN_OFFSET))(this);
		}

	};
