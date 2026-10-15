#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowBattleQTEUI; }
namespace RPG::GameCore { class TaskContext; }

#define PBDHJHMKPFC_CTOR_OFFSET UNITYSDK_OFFSET(0xBFDB9E0)
#define PBDHJHMKPFC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFDBA10)

inline static constexpr unsigned int PBDHJHMKPFC_TypeDefinitionIndex = 58611;

	class PBDHJHMKPFC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleQTEUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleQTEUI*))((::PBYTE)hIl2Cpp + PBDHJHMKPFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDHJHMKPFC_ONTASKBEGIN_OFFSET))(this);
		}

	};
