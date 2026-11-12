#pragma once
#include "unitysdk/unitysdk.h"
class AEFGJJICLON;
namespace RPG::GameCore { class TaskContext; }

#define BGCIPDAANJK_CTOR_OFFSET UNITYSDK_OFFSET(0xBAFE7B0)
#define BGCIPDAANJK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBAFE7E0)

inline static constexpr unsigned int BGCIPDAANJK_TypeDefinitionIndex = 54988;

	class BGCIPDAANJK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AEFGJJICLON* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AEFGJJICLON*))((::PBYTE)hIl2Cpp + BGCIPDAANJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGCIPDAANJK_ONTASKBEGIN_OFFSET))(this);
		}

	};
