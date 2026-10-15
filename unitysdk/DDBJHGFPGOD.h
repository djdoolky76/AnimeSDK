#pragma once
#include "unitysdk/unitysdk.h"
class CPKJPLGENJF;
namespace RPG::GameCore { class TaskContext; }

#define DDBJHGFPGOD_CTOR_OFFSET UNITYSDK_OFFSET(0xE254480)
#define DDBJHGFPGOD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE2544B0)

inline static constexpr unsigned int DDBJHGFPGOD_TypeDefinitionIndex = 53827;

	class DDBJHGFPGOD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CPKJPLGENJF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CPKJPLGENJF*))((::PBYTE)hIl2Cpp + DDBJHGFPGOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBJHGFPGOD_ONTASKBEGIN_OFFSET))(this);
		}

	};
