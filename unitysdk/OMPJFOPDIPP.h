#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DestroySummonUnit; }
namespace RPG::GameCore { class TaskContext; }

#define OMPJFOPDIPP_CTOR_OFFSET UNITYSDK_OFFSET(0xBF49C40)
#define OMPJFOPDIPP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF49C70)

	class OMPJFOPDIPP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroySummonUnit* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroySummonUnit*))((::PBYTE)hIl2Cpp + OMPJFOPDIPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPJFOPDIPP_ONTASKBEGIN_OFFSET))(this);
		}

	};
