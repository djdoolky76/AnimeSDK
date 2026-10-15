#pragma once
#include "unitysdk/unitysdk.h"
class MOPOKJECALI;
namespace RPG::GameCore { class TaskContext; }

#define PIJABFONEEI_CTOR_OFFSET UNITYSDK_OFFSET(0xC2692B0)
#define PIJABFONEEI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2692E0)

inline static constexpr unsigned int PIJABFONEEI_TypeDefinitionIndex = 55383;

	class PIJABFONEEI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MOPOKJECALI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MOPOKJECALI*))((::PBYTE)hIl2Cpp + PIJABFONEEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJABFONEEI_ONTASKBEGIN_OFFSET))(this);
		}

	};
