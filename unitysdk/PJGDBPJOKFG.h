#pragma once
#include "unitysdk/unitysdk.h"
class INHGMDFDJMD;
namespace RPG::GameCore { class TaskContext; }

#define PJGDBPJOKFG_CTOR_OFFSET UNITYSDK_OFFSET(0xC2853F0)
#define PJGDBPJOKFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC285420)

inline static constexpr unsigned int PJGDBPJOKFG_TypeDefinitionIndex = 55665;

	class PJGDBPJOKFG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::INHGMDFDJMD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::INHGMDFDJMD*))((::PBYTE)hIl2Cpp + PJGDBPJOKFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGDBPJOKFG_ONTASKBEGIN_OFFSET))(this);
		}

	};
