#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class LoseHP; }
namespace RPG::GameCore { class TaskContext; }

#define PMIOBHFIGCA_CTOR_OFFSET UNITYSDK_OFFSET(0xC321900)
#define PMIOBHFIGCA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3219D0)

	class PMIOBHFIGCA
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoseHP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoseHP*))((::PBYTE)hIl2Cpp + PMIOBHFIGCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIOBHFIGCA_ONTASKBEGIN_OFFSET))(this);
		}

	};
