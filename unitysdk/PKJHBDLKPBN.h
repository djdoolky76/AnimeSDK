#pragma once
#include "unitysdk/unitysdk.h"
class GDCHKJKOGCH;
namespace RPG::GameCore { class TaskContext; }

#define PKJHBDLKPBN_CTOR_OFFSET UNITYSDK_OFFSET(0x147C5DF0)
#define PKJHBDLKPBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x147C5E20)

inline static constexpr unsigned int PKJHBDLKPBN_TypeDefinitionIndex = 53838;

	class PKJHBDLKPBN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GDCHKJKOGCH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GDCHKJKOGCH*))((::PBYTE)hIl2Cpp + PKJHBDLKPBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJHBDLKPBN_ONTASKBEGIN_OFFSET))(this);
		}

	};
