#pragma once
#include "unitysdk/unitysdk.h"
class NJKMPJGBNMK;
namespace RPG::GameCore { class TaskContext; }

#define HMAGPIIGHPI_CTOR_OFFSET UNITYSDK_OFFSET(0x16CD4330)
#define HMAGPIIGHPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16CD4360)

inline static constexpr unsigned int HMAGPIIGHPI_TypeDefinitionIndex = 54020;

	class HMAGPIIGHPI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NJKMPJGBNMK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NJKMPJGBNMK*))((::PBYTE)hIl2Cpp + HMAGPIIGHPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMAGPIIGHPI_ONTASKBEGIN_OFFSET))(this);
		}

	};
