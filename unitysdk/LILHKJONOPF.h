#pragma once
#include "unitysdk/unitysdk.h"
class LIGMIDILOAE;
namespace RPG::GameCore { class TaskContext; }

#define LILHKJONOPF_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D9940)
#define LILHKJONOPF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6D9970)

inline static constexpr unsigned int LILHKJONOPF_TypeDefinitionIndex = 55624;

	class LILHKJONOPF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LIGMIDILOAE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LIGMIDILOAE*))((::PBYTE)hIl2Cpp + LILHKJONOPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LILHKJONOPF_ONTASKBEGIN_OFFSET))(this);
		}

	};
