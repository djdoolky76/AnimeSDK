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

#define HMBJNEDIDHB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EFB30C0)
#define HMBJNEDIDHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB3290)
#define HMBJNEDIDHB_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1EFB31F0)
#define HMBJNEDIDHB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1EFB3240)

inline static constexpr unsigned int HMBJNEDIDHB_TypeDefinitionIndex = 44634;

	class HMBJNEDIDHB : public ::System::Object
	{
	public:
		::PNKCFFDKMJP* OIBKPJEGPOK; // 0x10
		::KJFIKOKBCCA OBKOLHGMGCM; // 0x18
		::RPG::PoolList_1<::UnityEngine::Collider*>* KIHEOMICPIE; // 0xA8
		::RPG::GameCore::LevelTriggerInfo* BICMEIOIFIF; // 0xB0
		::System::String* OENAMINOLLF; // 0xB8
		::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> NAMMCPHOCME; // 0xC0
		::System::Byte _padding0[0x88];
		::HPKDNHLINPC IMDLGFPMPEK; // 0x150
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
