#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class AdvNpcHitListener; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define NEFDDKLOAKO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB5C440)
#define NEFDDKLOAKO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB5C4D0)
#define NEFDDKLOAKO_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xBB5C850)
#define NEFDDKLOAKO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB5C660)
#define NEFDDKLOAKO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB5C7A0)
#define NEFDDKLOAKO_TICK_OFFSET UNITYSDK_OFFSET(0xBB5C7F0)

	class NEFDDKLOAKO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::AdvNpcHitListener* IGHAHBNLIJA; // 0x20
		::KFELGAIGHAP* HLNENODMLJC; // 0x28
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcHitListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcHitListener*))((::PBYTE)hIl2Cpp + NEFDDKLOAKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDDKLOAKO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDDKLOAKO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEFDDKLOAKO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEFDDKLOAKO_TICK_OFFSET))(this, a1);
		}

		::System::Void ILEMLGEGLCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NEFDDKLOAKO_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
