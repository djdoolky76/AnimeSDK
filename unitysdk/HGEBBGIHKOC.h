#pragma once
#include "unitysdk/unitysdk.h"
class MIBMLOEAJII;
namespace RPG::GameCore { class TaskContext; }

#define HGEBBGIHKOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C43BEB0)
#define HGEBBGIHKOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C43BEE0)

inline static constexpr unsigned int HGEBBGIHKOC_TypeDefinitionIndex = 54513;

	class HGEBBGIHKOC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MIBMLOEAJII* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MIBMLOEAJII*))((::PBYTE)hIl2Cpp + HGEBBGIHKOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEBBGIHKOC_ONTASKBEGIN_OFFSET))(this);
		}

	};
