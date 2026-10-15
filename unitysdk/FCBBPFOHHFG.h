#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LegacyConflictStateBinder; }
namespace RPG::GameCore { class TaskContext; }

#define FCBBPFOHHFG_CTOR_OFFSET UNITYSDK_OFFSET(0x156AF490)
#define FCBBPFOHHFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156AF4A0)
#define FCBBPFOHHFG_EHBBMDMLBLF_OFFSET UNITYSDK_OFFSET(0x156AF9A0)
#define FCBBPFOHHFG_JLNIGEMKDJH_OFFSET UNITYSDK_OFFSET(0x156AFB90)
#define FCBBPFOHHFG_JPAEHJIKJGB_OFFSET UNITYSDK_OFFSET(0x156AF650)
#define FCBBPFOHHFG_MBLIEJHBADJ_OFFSET UNITYSDK_OFFSET(0x156AF810)
#define FCBBPFOHHFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156AF550)
#define FCBBPFOHHFG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156AF500)
#define FCBBPFOHHFG_TICK_OFFSET UNITYSDK_OFFSET(0x156AFB30)

inline static constexpr unsigned int FCBBPFOHHFG_TypeDefinitionIndex = 52931;

	class FCBBPFOHHFG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::LegacyConflictStateBinder* IGHAHBNLIJA; // 0x20
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LegacyConflictStateBinder* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LegacyConflictStateBinder*))((::PBYTE)hIl2Cpp + FCBBPFOHHFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBBPFOHHFG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBBPFOHHFG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JPAEHJIKJGB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCBBPFOHHFG_JPAEHJIKJGB_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBBPFOHHFG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCBBPFOHHFG_TICK_OFFSET))(this, a1);
		}

		::System::Void MBLIEJHBADJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBBPFOHHFG_MBLIEJHBADJ_OFFSET))(this);
		}

		::System::Void EHBBMDMLBLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBBPFOHHFG_EHBBMDMLBLF_OFFSET))(this);
		}

		::System::Void JLNIGEMKDJH(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FCBBPFOHHFG_JLNIGEMKDJH_OFFSET))(this, a1);
		}

	};
