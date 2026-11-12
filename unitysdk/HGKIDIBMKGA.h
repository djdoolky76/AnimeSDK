#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/ONLHJAEPLBB.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAnimState; }
namespace UnityEngine { class Animator; }

#define HGKIDIBMKGA_CTOR_OFFSET UNITYSDK_OFFSET(0x16BF3750)
#define HGKIDIBMKGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16BF37F0)
#define HGKIDIBMKGA_GEEFBIHPEKP_OFFSET UNITYSDK_OFFSET(0x16BF4920)
#define HGKIDIBMKGA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16BF3830)
#define HGKIDIBMKGA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16BF4410)
#define HGKIDIBMKGA_PMLPLLLBPHL_OFFSET UNITYSDK_OFFSET(0x16BF4750)
#define HGKIDIBMKGA_TICK_OFFSET UNITYSDK_OFFSET(0x16BF44D0)

inline static constexpr unsigned int HGKIDIBMKGA_TypeDefinitionIndex = 56917;

	class HGKIDIBMKGA : public ::GELIALJDFBL
	{
	public:
		::ONLHJAEPLBB EJPILIBEFCB; // 0x18
		::UnityEngine::Animator* JDFCDMAPBFJ; // 0x28
		::RPG::GameCore::GameEntity* IEKCMJJGLOH; // 0x30
		::RPG::GameCore::TriggerAnimState* OFKGLJOAMLD; // 0x38
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
		::System::UInt32 APAOCDBHPKE; // 0x48
		::System::Boolean HLDMHAMDIKF; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Int32 APNGJPMPMOB; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAnimState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAnimState*))((::PBYTE)hIl2Cpp + HGKIDIBMKGA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIDIBMKGA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIDIBMKGA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIDIBMKGA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGKIDIBMKGA_TICK_OFFSET))(this, a1);
		}

		::System::Void GEEFBIHPEKP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGKIDIBMKGA_GEEFBIHPEKP_OFFSET))(this, a1);
		}

		::System::Boolean PMLPLLLBPHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIDIBMKGA_PMLPLLLBPHL_OFFSET))(this);
		}

	};
