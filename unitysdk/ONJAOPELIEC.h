#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class InfiniteWaveAddCurWaveMaxCount; }
namespace RPG::GameCore { class TaskContext; }

#define ONJAOPELIEC_CTOR_OFFSET UNITYSDK_OFFSET(0xBF57DC0)
#define ONJAOPELIEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF57DF0)

	class ONJAOPELIEC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InfiniteWaveAddCurWaveMaxCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InfiniteWaveAddCurWaveMaxCount*))((::PBYTE)hIl2Cpp + ONJAOPELIEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJAOPELIEC_ONTASKBEGIN_OFFSET))(this);
		}

	};
