#pragma once
#include "unitysdk/unitysdk.h"
class GJCHOJBIMBJ;
namespace RPG::GameCore { class TaskContext; }

#define LLDICFCOIGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB763C30)
#define LLDICFCOIGJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB763C60)

	class LLDICFCOIGJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GJCHOJBIMBJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GJCHOJBIMBJ*))((::PBYTE)hIl2Cpp + LLDICFCOIGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLDICFCOIGJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
