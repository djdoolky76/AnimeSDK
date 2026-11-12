#pragma once
#include "unitysdk/unitysdk.h"
class GCACHGBMAKD;
namespace RPG::GameCore { class TaskContext; }

#define FIGEKLABLDG_CTOR_OFFSET UNITYSDK_OFFSET(0x166C7B20)
#define FIGEKLABLDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x166C7B50)

inline static constexpr unsigned int FIGEKLABLDG_TypeDefinitionIndex = 56955;

	class FIGEKLABLDG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GCACHGBMAKD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GCACHGBMAKD*))((::PBYTE)hIl2Cpp + FIGEKLABLDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIGEKLABLDG_ONTASKBEGIN_OFFSET))(this);
		}

	};
