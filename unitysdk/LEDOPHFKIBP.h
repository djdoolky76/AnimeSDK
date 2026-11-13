#pragma once
#include "unitysdk/unitysdk.h"
class EBHNFJFACOE;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define LEDOPHFKIBP_CTOR_OFFSET UNITYSDK_OFFSET(0x18C2E5F0)
#define LEDOPHFKIBP_JJNLKPGLJHF_OFFSET UNITYSDK_OFFSET(0x18C2E8A0)
#define LEDOPHFKIBP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18C2E620)

inline static constexpr unsigned int LEDOPHFKIBP_TypeDefinitionIndex = 56306;

	class LEDOPHFKIBP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EBHNFJFACOE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EBHNFJFACOE*))((::PBYTE)hIl2Cpp + LEDOPHFKIBP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDOPHFKIBP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::String* JJNLKPGLJHF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEDOPHFKIBP_JJNLKPGLJHF_OFFSET))(this);
		}

	};
