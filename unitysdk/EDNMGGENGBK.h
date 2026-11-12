#pragma once
#include "unitysdk/unitysdk.h"
class LILLBBELBKO;
namespace RPG::GameCore { class TaskContext; }

#define EDNMGGENGBK_CTOR_OFFSET UNITYSDK_OFFSET(0x140EA140)
#define EDNMGGENGBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x140EA170)

inline static constexpr unsigned int EDNMGGENGBK_TypeDefinitionIndex = 54022;

	class EDNMGGENGBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LILLBBELBKO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LILLBBELBKO*))((::PBYTE)hIl2Cpp + EDNMGGENGBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNMGGENGBK_ONTASKBEGIN_OFFSET))(this);
		}

	};
