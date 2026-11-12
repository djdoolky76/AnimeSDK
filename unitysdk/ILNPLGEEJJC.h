#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdvNpcFaceTo; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define ILNPLGEEJJC_CTOR_OFFSET UNITYSDK_OFFSET(0x174A0DC0)
#define ILNPLGEEJJC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x174A0DE0)
#define ILNPLGEEJJC_FMNLLMGPDHI_OFFSET UNITYSDK_OFFSET(0x174A1BE0)
#define ILNPLGEEJJC_IHNMHLFAOFO_OFFSET UNITYSDK_OFFSET(0x174A1A50)
#define ILNPLGEEJJC_INHEPGFPGGD_OFFSET UNITYSDK_OFFSET(0x174A1290)
#define ILNPLGEEJJC_LPFLDLLPLOD_OFFSET UNITYSDK_OFFSET(0x174A10B0)
#define ILNPLGEEJJC_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x174A1D10)
#define ILNPLGEEJJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x174A0E20)
#define ILNPLGEEJJC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x174A1A00)
#define ILNPLGEEJJC_TICK_OFFSET UNITYSDK_OFFSET(0x174A1510)

inline static constexpr unsigned int ILNPLGEEJJC_TypeDefinitionIndex = 53511;

	class ILNPLGEEJJC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvNpcFaceTo* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::GameEntity* FEECCONDBLP; // 0x28
		::System::Boolean FPGKLEODJJN; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single LBCKFFGDCFB; // 0x34
		::UnityEngine::Vector3 DJGGGBDMEFJ; // 0x38
		::System::UInt32 EPIJLLGCKLA; // 0x44
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcFaceTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcFaceTo*))((::PBYTE)hIl2Cpp + ILNPLGEEJJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPLGEEJJC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPLGEEJJC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPLGEEJJC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILNPLGEEJJC_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* LPFLDLLPLOD(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ILNPLGEEJJC_LPFLDLLPLOD_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* FMNLLMGPDHI()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPLGEEJJC_FMNLLMGPDHI_OFFSET))(this);
		}

		::System::Boolean IHNMHLFAOFO(::RPG::GameCore::AdventureCharacterController* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::System::Single))((::PBYTE)hIl2Cpp + ILNPLGEEJJC_IHNMHLFAOFO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 INHEPGFPGGD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNPLGEEJJC_INHEPGFPGGD_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILNPLGEEJJC_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

	};
