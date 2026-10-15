#pragma once
#include "unitysdk/unitysdk.h"
class FCFHBICBEKD;
namespace RPG::GameCore { class TaskContext; }

#define BEMIACBDOIC_CTOR_OFFSET UNITYSDK_OFFSET(0xB157B90)
#define BEMIACBDOIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB157BC0)

inline static constexpr unsigned int BEMIACBDOIC_TypeDefinitionIndex = 58810;

	class BEMIACBDOIC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FCFHBICBEKD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FCFHBICBEKD*))((::PBYTE)hIl2Cpp + BEMIACBDOIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMIACBDOIC_ONTASKBEGIN_OFFSET))(this);
		}

	};
