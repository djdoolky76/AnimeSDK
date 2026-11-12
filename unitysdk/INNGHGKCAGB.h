#pragma once
#include "unitysdk/unitysdk.h"
class HKDNNHNHEKA;
namespace RPG::GameCore { class TaskContext; }

#define INNGHGKCAGB_CTOR_OFFSET UNITYSDK_OFFSET(0xB829B60)
#define INNGHGKCAGB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB829B90)

inline static constexpr unsigned int INNGHGKCAGB_TypeDefinitionIndex = 59387;

	class INNGHGKCAGB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HKDNNHNHEKA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HKDNNHNHEKA*))((::PBYTE)hIl2Cpp + INNGHGKCAGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INNGHGKCAGB_ONTASKBEGIN_OFFSET))(this);
		}

	};
