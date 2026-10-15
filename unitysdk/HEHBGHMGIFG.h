#pragma once
#include "unitysdk/unitysdk.h"
class DBFILGIOEMP;
namespace RPG::GameCore { class TaskContext; }

#define HEHBGHMGIFG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C51E00)
#define HEHBGHMGIFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C51E30)

inline static constexpr unsigned int HEHBGHMGIFG_TypeDefinitionIndex = 55337;

	class HEHBGHMGIFG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DBFILGIOEMP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DBFILGIOEMP*))((::PBYTE)hIl2Cpp + HEHBGHMGIFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHBGHMGIFG_ONTASKBEGIN_OFFSET))(this);
		}

	};
