#pragma once
#include "unitysdk/unitysdk.h"
class PEGGLPEAHBI;
namespace RPG::GameCore { class TaskContext; }

#define KOCMIBBLING_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE32B0)
#define KOCMIBBLING_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDE32E0)

inline static constexpr unsigned int KOCMIBBLING_TypeDefinitionIndex = 56479;

	class KOCMIBBLING
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PEGGLPEAHBI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PEGGLPEAHBI*))((::PBYTE)hIl2Cpp + KOCMIBBLING_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCMIBBLING_ONTASKBEGIN_OFFSET))(this);
		}

	};
