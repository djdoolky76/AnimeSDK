#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ParkourGameAddPlayerSkillPoint; }
namespace RPG::GameCore { class TaskContext; }

#define ELMLNJAPJFP_CTOR_OFFSET UNITYSDK_OFFSET(0x16472470)
#define ELMLNJAPJFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164724A0)

inline static constexpr unsigned int ELMLNJAPJFP_TypeDefinitionIndex = 54215;

	class ELMLNJAPJFP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ParkourGameAddPlayerSkillPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ParkourGameAddPlayerSkillPoint*))((::PBYTE)hIl2Cpp + ELMLNJAPJFP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMLNJAPJFP_ONTASKBEGIN_OFFSET))(this);
		}

	};
