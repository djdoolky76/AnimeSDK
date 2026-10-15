#pragma once
#include "unitysdk/unitysdk.h"
class MHLHEHALOFL;
namespace RPG::GameCore { class TaskContext; }

#define PBCIGHOMNNO_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE1990)
#define PBCIGHOMNNO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFE19C0)

inline static constexpr unsigned int PBCIGHOMNNO_TypeDefinitionIndex = 58690;

	class PBCIGHOMNNO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MHLHEHALOFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MHLHEHALOFL*))((::PBYTE)hIl2Cpp + PBCIGHOMNNO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBCIGHOMNNO_ONTASKBEGIN_OFFSET))(this);
		}

	};
