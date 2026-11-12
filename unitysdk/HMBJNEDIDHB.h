#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPKDNHLINPC.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_2.h"
#include "unitysdk/System/Object.h"
class PNKCFFDKMJP;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define HMBJNEDIDHB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DCB18F0)
#define HMBJNEDIDHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB1AC0)
#define HMBJNEDIDHB_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DCB1A20)
#define HMBJNEDIDHB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1DCB1A70)

inline static constexpr unsigned int HMBJNEDIDHB_TypeDefinitionIndex = 44634;

	class HMBJNEDIDHB : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::RPG::GameCore::LevelTriggerInfo* BICMEIOIFIF; // 0x18
		::PNKCFFDKMJP* OIBKPJEGPOK; // 0x20
		::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> NAMMCPHOCME; // 0x28
		::System::Byte _padding0[0x88];
		::HPKDNHLINPC IMDLGFPMPEK; // 0xB8
		::RPG::PoolList_1<::UnityEngine::Collider*>* KIHEOMICPIE; // 0xD8
		::KJFIKOKBCCA OBKOLHGMGCM; // 0xE0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBJNEDIDHB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBJNEDIDHB_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBJNEDIDHB_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBJNEDIDHB_ONRECYCLE_OFFSET))(this);
		}

	};
