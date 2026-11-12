#pragma once
#include "unitysdk/unitysdk.h"
class FFKKLOGIBOA;
namespace RPG::GameCore { class TaskContext; }

#define BJDPDGADEAM_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5C470)
#define BJDPDGADEAM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE5C4A0)

inline static constexpr unsigned int BJDPDGADEAM_TypeDefinitionIndex = 54013;

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
