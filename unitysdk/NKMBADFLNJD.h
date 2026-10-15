#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNBOAMEBAOE;
class GELIALJDFBL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAutoTriggerRogueEntrancePropInteract; }
namespace System { class Object; }

#define NKMBADFLNJD_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0xBC3C980)
#define NKMBADFLNJD_CTOR_OFFSET UNITYSDK_OFFSET(0xBC3C6E0)
#define NKMBADFLNJD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC3C6F0)
#define NKMBADFLNJD_EFJBOJBPPAB_OFFSET UNITYSDK_OFFSET(0xBC3C810)
#define NKMBADFLNJD_MBCDDDEGNDE_OFFSET UNITYSDK_OFFSET(0xBC3C9D0)
#define NKMBADFLNJD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC3C7C0)
#define NKMBADFLNJD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC3C8D0)
#define NKMBADFLNJD_TICK_OFFSET UNITYSDK_OFFSET(0xBC3C920)

inline static constexpr unsigned int NKMBADFLNJD_TypeDefinitionIndex = 58854;

	class NKMBADFLNJD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::GELIALJDFBL* JLMAKNFAEBH; // 0x20
		::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAutoTriggerRogueEntrancePropInteract*))((::PBYTE)hIl2Cpp + NKMBADFLNJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMBADFLNJD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMBADFLNJD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMBADFLNJD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKMBADFLNJD_TICK_OFFSET))(this, a1);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + NKMBADFLNJD_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void EFJBOJBPPAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMBADFLNJD_EFJBOJBPPAB_OFFSET))(this);
		}

		::System::Void MBCDDDEGNDE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKMBADFLNJD_MBCDDDEGNDE_OFFSET))(this, a1);
		}

	};
