#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Main_LittleGame_SelfDestory; }
namespace RPG::GameCore { class TaskContext; }

#define MMCIAPPLNIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB9BA2E0)
#define MMCIAPPLNIJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9BA310)
#define MMCIAPPLNIJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9BA380)

inline static constexpr unsigned int MMCIAPPLNIJ_TypeDefinitionIndex = 52146;

	class MMCIAPPLNIJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_LittleGame_SelfDestory* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_LittleGame_SelfDestory*))((::PBYTE)hIl2Cpp + MMCIAPPLNIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCIAPPLNIJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMCIAPPLNIJ_ONTASKRESET_OFFSET))(this);
		}

	};
