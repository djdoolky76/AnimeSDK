#pragma once
#include "unitysdk/unitysdk.h"
class BJILOCGMKOO;
namespace RPG::GameCore { class TaskContext; }

#define IDHJBIPIGJG_CTOR_OFFSET UNITYSDK_OFFSET(0x15ED4010)
#define IDHJBIPIGJG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15ED4040)

inline static constexpr unsigned int IDHJBIPIGJG_TypeDefinitionIndex = 55317;

	class IDHJBIPIGJG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BJILOCGMKOO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BJILOCGMKOO*))((::PBYTE)hIl2Cpp + IDHJBIPIGJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHJBIPIGJG_ONTASKBEGIN_OFFSET))(this);
		}

	};
