#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BattleFullScreenTransfer; }
namespace RPG::GameCore { class TaskContext; }

#define CGLIAHDLNCI_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8B3A0)
#define CGLIAHDLNCI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC8B3D0)

	class CGLIAHDLNCI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleFullScreenTransfer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleFullScreenTransfer*))((::PBYTE)hIl2Cpp + CGLIAHDLNCI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLIAHDLNCI_ONTASKBEGIN_OFFSET))(this);
		}

	};
