#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdvEntityFaceTo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define NAIJACEFAIF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA9C760)
#define NAIJACEFAIF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA9C770)
#define NAIJACEFAIF_EJBCJFGEBEF_OFFSET UNITYSDK_OFFSET(0xBA9CDD0)
#define NAIJACEFAIF_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xBA9D620)
#define NAIJACEFAIF_IHNMHLFAOFO_OFFSET UNITYSDK_OFFSET(0xBA9D370)
#define NAIJACEFAIF_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBA9D690)
#define NAIJACEFAIF_ONSKIP_OFFSET UNITYSDK_OFFSET(0xBA9D630)
#define NAIJACEFAIF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA9C820)
#define NAIJACEFAIF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA9C7C0)
#define NAIJACEFAIF_TICK_OFFSET UNITYSDK_OFFSET(0xBA9D1C0)
#define NAIJACEFAIF__ONTASKSUCCESS_B__9_1_OFFSET UNITYSDK_OFFSET(0xBA9D7D0)

inline static constexpr unsigned int NAIJACEFAIF_TypeDefinitionIndex = 52360;

	class NAIJACEFAIF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvEntityFaceTo* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x28
		::UnityEngine::Vector3 BGNACBGBMHG; // 0x30
		::System::UInt32 EPIJLLGCKLA; // 0x3C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityFaceTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityFaceTo*))((::PBYTE)hIl2Cpp + NAIJACEFAIF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJACEFAIF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJACEFAIF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJACEFAIF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAIJACEFAIF_TICK_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJACEFAIF_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJACEFAIF_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAIJACEFAIF_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void EJBCJFGEBEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJACEFAIF_EJBCJFGEBEF_OFFSET))(this);
		}

		::System::Boolean IHNMHLFAOFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIJACEFAIF_IHNMHLFAOFO_OFFSET))(this);
		}

		::System::Boolean _OnTaskSuccess_b__9_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NAIJACEFAIF__ONTASKSUCCESS_B__9_1_OFFSET))(this, a1);
		}

	};
