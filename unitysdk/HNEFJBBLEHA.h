#pragma once
#include "unitysdk/unitysdk.h"
class EDFBEHBEDED;
namespace RPG::GameCore { class TaskContext; }

#define HNEFJBBLEHA_CTOR_OFFSET UNITYSDK_OFFSET(0x15D85140)
#define HNEFJBBLEHA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D85170)

inline static constexpr unsigned int HNEFJBBLEHA_TypeDefinitionIndex = 52967;

	class HNEFJBBLEHA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EDFBEHBEDED* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EDFBEHBEDED*))((::PBYTE)hIl2Cpp + HNEFJBBLEHA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEFJBBLEHA_ONTASKBEGIN_OFFSET))(this);
		}

	};
