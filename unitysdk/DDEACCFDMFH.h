#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryAsyncLoadUI; }

#define DDEACCFDMFH_CTOR_OFFSET UNITYSDK_OFFSET(0xE258D80)
#define DDEACCFDMFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE258DB0)

inline static constexpr unsigned int DDEACCFDMFH_TypeDefinitionIndex = 53456;

	class DDEACCFDMFH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryAsyncLoadUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryAsyncLoadUI*))((::PBYTE)hIl2Cpp + DDEACCFDMFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDEACCFDMFH_ONTASKBEGIN_OFFSET))(this);
		}

	};
