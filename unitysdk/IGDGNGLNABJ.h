#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class IBEJMEEEJMB;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimState; }

#define IGDGNGLNABJ_CEJEJOABONP_OFFSET UNITYSDK_OFFSET(0x163F4950)
#define IGDGNGLNABJ_CTOR_OFFSET UNITYSDK_OFFSET(0x163F4140)
#define IGDGNGLNABJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163F41E0)
#define IGDGNGLNABJ_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x163F53E0)
#define IGDGNGLNABJ_LNPNOCKGNNM_OFFSET UNITYSDK_OFFSET(0x163F4500)
#define IGDGNGLNABJ_ONSKIP_OFFSET UNITYSDK_OFFSET(0x163F53F0)
#define IGDGNGLNABJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163F4220)
#define IGDGNGLNABJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163F4C40)
#define IGDGNGLNABJ_PMLPLLLBPHL_OFFSET UNITYSDK_OFFSET(0x163F4780)
#define IGDGNGLNABJ_TICK_OFFSET UNITYSDK_OFFSET(0x163F4CA0)

inline static constexpr unsigned int IGDGNGLNABJ_TypeDefinitionIndex = 55807;

	class IGDGNGLNABJ : public ::GELIALJDFBL
	{
	public:
		::IBEJMEEEJMB* LDHAGDIDMKB; // 0x18
		::RPG::GameCore::WaitAnimState* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::GameEntity* IEKCMJJGLOH; // 0x30
		::System::Int32 APNGJPMPMOB; // 0x38
		::System::Single NBBLMHBOFMJ; // 0x3C
		::System::Boolean DBLKAJKFOFJ; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimState*))((::PBYTE)hIl2Cpp + IGDGNGLNABJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDGNGLNABJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDGNGLNABJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDGNGLNABJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IGDGNGLNABJ_TICK_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDGNGLNABJ_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDGNGLNABJ_ONSKIP_OFFSET))(this);
		}

		::System::Boolean PMLPLLLBPHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDGNGLNABJ_PMLPLLLBPHL_OFFSET))(this);
		}

		::System::Boolean CEJEJOABONP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDGNGLNABJ_CEJEJOABONP_OFFSET))(this);
		}

		::System::Boolean LNPNOCKGNNM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDGNGLNABJ_LNPNOCKGNNM_OFFSET))(this);
		}

	};
