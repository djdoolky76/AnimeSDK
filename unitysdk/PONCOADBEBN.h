#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DisableHeadLookAtOverride; }
namespace RPG::GameCore { class TaskContext; }

#define PONCOADBEBN_CTOR_OFFSET UNITYSDK_OFFSET(0xC369CF0)
#define PONCOADBEBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC369D20)

inline static constexpr unsigned int PONCOADBEBN_TypeDefinitionIndex = 58083;

	class PONCOADBEBN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DisableHeadLookAtOverride* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DisableHeadLookAtOverride*))((::PBYTE)hIl2Cpp + PONCOADBEBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PONCOADBEBN_ONTASKBEGIN_OFFSET))(this);
		}

	};
