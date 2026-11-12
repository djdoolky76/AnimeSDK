#pragma once
#include "unitysdk/unitysdk.h"
class GJCHOJBIMBJ;
namespace RPG::GameCore { class TaskContext; }

#define LLDICFCOIGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC0033A0)
#define LLDICFCOIGJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0033D0)

inline static constexpr unsigned int LLDICFCOIGJ_TypeDefinitionIndex = 59187;

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
