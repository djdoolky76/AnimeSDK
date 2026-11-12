#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowBattleAvatarPanel; }
namespace RPG::GameCore { class TaskContext; }

#define PJIJLPDEJDA_CTOR_OFFSET UNITYSDK_OFFSET(0xCBB3F40)
#define PJIJLPDEJDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCBB3F70)

inline static constexpr unsigned int PJIJLPDEJDA_TypeDefinitionIndex = 59870;

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
