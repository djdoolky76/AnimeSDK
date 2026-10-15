#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StartTarotBookTalk; }
namespace RPG::GameCore { class TaskContext; }

#define EJAGPIKHDPN_CTOR_OFFSET UNITYSDK_OFFSET(0x154D57D0)
#define EJAGPIKHDPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154D5800)

	class EJAGPIKHDPN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartTarotBookTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartTarotBookTalk*))((::PBYTE)hIl2Cpp + EJAGPIKHDPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJAGPIKHDPN_ONTASKBEGIN_OFFSET))(this);
		}

	};
