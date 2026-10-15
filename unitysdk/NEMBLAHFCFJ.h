#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class InitBattleItemProgressInfo; }
namespace RPG::GameCore { class TaskContext; }

#define NEMBLAHFCFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBB71280)
#define NEMBLAHFCFJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB712B0)

inline static constexpr unsigned int NEMBLAHFCFJ_TypeDefinitionIndex = 47603;

	class NEMBLAHFCFJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitBattleItemProgressInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitBattleItemProgressInfo*))((::PBYTE)hIl2Cpp + NEMBLAHFCFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMBLAHFCFJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
