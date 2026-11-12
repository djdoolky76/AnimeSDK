#pragma once
#include "unitysdk/unitysdk.h"
class NMGMHOOOPBF;
namespace RPG::GameCore { class TaskContext; }

#define AFNOHLNIOFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD5CE7B0)
#define AFNOHLNIOFO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD5CE7E0)

inline static constexpr unsigned int AFNOHLNIOFO_TypeDefinitionIndex = 54460;

	class AFNOHLNIOFO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NMGMHOOOPBF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NMGMHOOOPBF*))((::PBYTE)hIl2Cpp + AFNOHLNIOFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNOHLNIOFO_ONTASKBEGIN_OFFSET))(this);
		}

	};
