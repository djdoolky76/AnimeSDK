#pragma once
#include "unitysdk/unitysdk.h"
class CPNBEPCCCDH;
namespace RPG::GameCore { class TaskContext; }

#define KENFPDFOAHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB3783F0)
#define KENFPDFOAHJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB378420)

inline static constexpr unsigned int KENFPDFOAHJ_TypeDefinitionIndex = 52868;

	class KENFPDFOAHJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CPNBEPCCCDH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CPNBEPCCCDH*))((::PBYTE)hIl2Cpp + KENFPDFOAHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KENFPDFOAHJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
