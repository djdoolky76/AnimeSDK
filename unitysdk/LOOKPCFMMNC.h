#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DisableBattleTarget; }
namespace RPG::GameCore { class TaskContext; }

#define LOOKPCFMMNC_CTOR_OFFSET UNITYSDK_OFFSET(0xB811790)
#define LOOKPCFMMNC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8117C0)

inline static constexpr unsigned int LOOKPCFMMNC_TypeDefinitionIndex = 58082;

	class LOOKPCFMMNC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableBattleTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableBattleTarget*))((::PBYTE)hIl2Cpp + LOOKPCFMMNC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOKPCFMMNC_ONTASKBEGIN_OFFSET))(this);
		}

	};
