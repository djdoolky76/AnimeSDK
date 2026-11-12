#pragma once
#include "unitysdk/unitysdk.h"
class NGLKHNKNBDC;
namespace RPG::GameCore { class TaskContext; }

#define BKIDMGGCGKL_CTOR_OFFSET UNITYSDK_OFFSET(0xC1207B0)
#define BKIDMGGCGKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1207E0)

inline static constexpr unsigned int BKIDMGGCGKL_TypeDefinitionIndex = 57567;

	class BKIDMGGCGKL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NGLKHNKNBDC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NGLKHNKNBDC*))((::PBYTE)hIl2Cpp + BKIDMGGCGKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIDMGGCGKL_ONTASKBEGIN_OFFSET))(this);
		}

	};
