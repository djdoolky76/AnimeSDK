#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowBattleTalkBGUI; }
namespace RPG::GameCore { class TaskContext; }

#define AJFEEIBGJND_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBA450)
#define AJFEEIBGJND_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CBA480)

inline static constexpr unsigned int AJFEEIBGJND_TypeDefinitionIndex = 58612;

	class AJFEEIBGJND
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleTalkBGUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleTalkBGUI*))((::PBYTE)hIl2Cpp + AJFEEIBGJND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFEEIBGJND_ONTASKBEGIN_OFFSET))(this);
		}

	};
