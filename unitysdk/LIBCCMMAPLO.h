#pragma once
#include "unitysdk/unitysdk.h"
class MGNNDAHLACH;
namespace RPG::GameCore { class TaskContext; }

#define LIBCCMMAPLO_CTOR_OFFSET UNITYSDK_OFFSET(0xBF5A0C0)
#define LIBCCMMAPLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF5A0F0)

inline static constexpr unsigned int LIBCCMMAPLO_TypeDefinitionIndex = 55028;

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
