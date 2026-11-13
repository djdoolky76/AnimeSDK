#pragma once
#include "unitysdk/unitysdk.h"
class EEBBKOAECHG;
namespace RPG::GameCore { class TaskContext; }

#define GAFNFMOFIHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B86A810)
#define GAFNFMOFIHE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B86A840)

inline static constexpr unsigned int GAFNFMOFIHE_TypeDefinitionIndex = 56509;

	class GAFNFMOFIHE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EEBBKOAECHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EEBBKOAECHG*))((::PBYTE)hIl2Cpp + GAFNFMOFIHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFNFMOFIHE_ONTASKBEGIN_OFFSET))(this);
		}

	};
