#pragma once
#include "unitysdk/unitysdk.h"
class MGNNDAHLACH;
namespace RPG::GameCore { class TaskContext; }

#define LIBCCMMAPLO_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C21E0)
#define LIBCCMMAPLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6C2210)

inline static constexpr unsigned int LIBCCMMAPLO_TypeDefinitionIndex = 53864;

	class LIBCCMMAPLO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MGNNDAHLACH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MGNNDAHLACH*))((::PBYTE)hIl2Cpp + LIBCCMMAPLO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBCCMMAPLO_ONTASKBEGIN_OFFSET))(this);
		}

	};
