#pragma once
#include "unitysdk/unitysdk.h"
class FFKKLOGIBOA;
namespace RPG::GameCore { class TaskContext; }

#define BJDPDGADEAM_CTOR_OFFSET UNITYSDK_OFFSET(0xB799290)
#define BJDPDGADEAM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7992C0)

inline static constexpr unsigned int BJDPDGADEAM_TypeDefinitionIndex = 52858;

	class BJDPDGADEAM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FFKKLOGIBOA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FFKKLOGIBOA*))((::PBYTE)hIl2Cpp + BJDPDGADEAM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDPDGADEAM_ONTASKBEGIN_OFFSET))(this);
		}

	};
