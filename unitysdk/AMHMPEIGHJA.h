#pragma once
#include "unitysdk/unitysdk.h"
class MDHFIOPLNDM;
namespace RPG::GameCore { class TaskContext; }

#define AMHMPEIGHJA_CTOR_OFFSET UNITYSDK_OFFSET(0x155736D0)
#define AMHMPEIGHJA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15573700)

inline static constexpr unsigned int AMHMPEIGHJA_TypeDefinitionIndex = 53862;

	class AMHMPEIGHJA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MDHFIOPLNDM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MDHFIOPLNDM*))((::PBYTE)hIl2Cpp + AMHMPEIGHJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHMPEIGHJA_ONTASKBEGIN_OFFSET))(this);
		}

	};
