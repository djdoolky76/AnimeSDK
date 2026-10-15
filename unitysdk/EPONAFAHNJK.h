#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class CreateServant; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define EPONAFAHNJK_BPIHFENAIHG_OFFSET UNITYSDK_OFFSET(0x155D9BE0)
#define EPONAFAHNJK_CTOR_OFFSET UNITYSDK_OFFSET(0x155D9260)
#define EPONAFAHNJK_DBOCIMOBKDN_OFFSET UNITYSDK_OFFSET(0x155D93A0)
#define EPONAFAHNJK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155D9F30)
#define EPONAFAHNJK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155D9300)
#define EPONAFAHNJK_PMIKGDCKIBA_OFFSET UNITYSDK_OFFSET(0x155D9E40)

	class EPONAFAHNJK
	{
	public:
		::KFELGAIGHAP* OBMJDAHPLMG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateServant* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateServant*))((::PBYTE)hIl2Cpp + EPONAFAHNJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPONAFAHNJK_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* DBOCIMOBKDN(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPONAFAHNJK_DBOCIMOBKDN_OFFSET))(this, a1);
		}

		::System::Void BPIHFENAIHG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EPONAFAHNJK_BPIHFENAIHG_OFFSET))(this, a1);
		}

		::System::Void PMIKGDCKIBA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EPONAFAHNJK_PMIKGDCKIBA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPONAFAHNJK_DISPOSE_OFFSET))(this);
		}

	};
