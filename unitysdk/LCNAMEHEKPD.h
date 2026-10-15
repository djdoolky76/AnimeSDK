#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class InitLittleGameWithLevelConfig; }
namespace RPG::GameCore { class TaskContext; }

#define LCNAMEHEKPD_CTOR_OFFSET UNITYSDK_OFFSET(0xB619470)
#define LCNAMEHEKPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6194A0)

	class LCNAMEHEKPD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitLittleGameWithLevelConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitLittleGameWithLevelConfig*))((::PBYTE)hIl2Cpp + LCNAMEHEKPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCNAMEHEKPD_ONTASKBEGIN_OFFSET))(this);
		}

	};
