#pragma once
#include "unitysdk/unitysdk.h"
class NPLNOOJIGOP;
namespace RPG::GameCore { class TaskContext; }

#define AIADKBHOJKK_CTOR_OFFSET UNITYSDK_OFFSET(0xEB88E90)
#define AIADKBHOJKK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB88EC0)

inline static constexpr unsigned int AIADKBHOJKK_TypeDefinitionIndex = 57938;

	class AIADKBHOJKK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NPLNOOJIGOP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NPLNOOJIGOP*))((::PBYTE)hIl2Cpp + AIADKBHOJKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIADKBHOJKK_ONTASKBEGIN_OFFSET))(this);
		}

	};
