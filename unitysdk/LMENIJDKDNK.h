#pragma once
#include "unitysdk/unitysdk.h"
class EJLHBEGHAME;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define LMENIJDKDNK_CTOR_OFFSET UNITYSDK_OFFSET(0xB77C500)
#define LMENIJDKDNK_EIBCDACOEMC_OFFSET UNITYSDK_OFFSET(0xB77C7D0)
#define LMENIJDKDNK_FKKCHANAABO_OFFSET UNITYSDK_OFFSET(0xB77C740)
#define LMENIJDKDNK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB77C530)

	class LMENIJDKDNK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EJLHBEGHAME* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EJLHBEGHAME*))((::PBYTE)hIl2Cpp + LMENIJDKDNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMENIJDKDNK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void EIBCDACOEMC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LMENIJDKDNK_EIBCDACOEMC_OFFSET))(this, a1);
		}

		::System::Void FKKCHANAABO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LMENIJDKDNK_FKKCHANAABO_OFFSET))(this, a1);
		}

	};
