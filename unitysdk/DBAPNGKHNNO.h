#pragma once
#include "unitysdk/unitysdk.h"
class OOCOGGMJLBN;
namespace RPG::GameCore { class TaskContext; }

#define DBAPNGKHNNO_CTOR_OFFSET UNITYSDK_OFFSET(0xDFCBCA0)
#define DBAPNGKHNNO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFCBCD0)

inline static constexpr unsigned int DBAPNGKHNNO_TypeDefinitionIndex = 55132;

	class DBAPNGKHNNO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OOCOGGMJLBN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OOCOGGMJLBN*))((::PBYTE)hIl2Cpp + DBAPNGKHNNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBAPNGKHNNO_ONTASKBEGIN_OFFSET))(this);
		}

	};
