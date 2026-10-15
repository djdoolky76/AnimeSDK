#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtStackInvisible; }
namespace RPG::GameCore { class TaskContext; }

#define CEFJMBEHAHC_CTOR_OFFSET UNITYSDK_OFFSET(0xC9D4BB0)
#define CEFJMBEHAHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC9D4BE0)

inline static constexpr unsigned int CEFJMBEHAHC_TypeDefinitionIndex = 53907;

	class CEFJMBEHAHC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtStackInvisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtStackInvisible*))((::PBYTE)hIl2Cpp + CEFJMBEHAHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFJMBEHAHC_ONTASKBEGIN_OFFSET))(this);
		}

	};
