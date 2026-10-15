#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SyncAnimWithBgm; }
namespace RPG::GameCore { class TaskContext; }

#define FPNCINIBMBK_CTOR_OFFSET UNITYSDK_OFFSET(0x15921A30)
#define FPNCINIBMBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15921A60)

	class FPNCINIBMBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SyncAnimWithBgm* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SyncAnimWithBgm*))((::PBYTE)hIl2Cpp + FPNCINIBMBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNCINIBMBK_ONTASKBEGIN_OFFSET))(this);
		}

	};
