#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowBattleAvatarPanel; }
namespace RPG::GameCore { class TaskContext; }

#define PJIJLPDEJDA_CTOR_OFFSET UNITYSDK_OFFSET(0xC284440)
#define PJIJLPDEJDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC284470)

inline static constexpr unsigned int PJIJLPDEJDA_TypeDefinitionIndex = 58605;

	class PJIJLPDEJDA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleAvatarPanel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleAvatarPanel*))((::PBYTE)hIl2Cpp + PJIJLPDEJDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIJLPDEJDA_ONTASKBEGIN_OFFSET))(this);
		}

	};
