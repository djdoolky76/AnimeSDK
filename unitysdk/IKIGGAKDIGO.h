#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DynamicCollisionRegisterReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define IKIGGAKDIGO_BMFHBHDOBHD_OFFSET UNITYSDK_OFFSET(0x1CB77FE0)
#define IKIGGAKDIGO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB780B0)
#define IKIGGAKDIGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB782B0)
#define IKIGGAKDIGO_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CB78030)
#define IKIGGAKDIGO_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CB78070)

	class IKIGGAKDIGO : public ::System::Object
	{
	public:
		::UnityEngine::Collider* KHMJGBNKOFE; // 0x10
		::KJFIKOKBCCA BGBEHLOFHAM; // 0x18
		::UnityEngine::Transform* ADCDKNLDDFN; // 0xA8
		::KLNKLOMDIIC CADPNKFLDBC; // 0xB0
		::UnityEngine::Bounds PLCLBIMIGHB; // 0x118
		::UnityEngine::Bounds BAHCKDEFBEN; // 0x130
		::KLNKLOMDIIC HNFHBHNLJOH; // 0x148
		::System::UInt32 KPGOIAGMDNN; // 0x1B0
		::System::Boolean NOOJOFHAIAA; // 0x1B4
		::RPG::Client::LittleGame::FiveDim::DynamicCollisionRegisterReason OBFHLDKOKEA; // 0x1B5
		::System::Boolean CKILGKGKMHK; // 0x1B6
		::System::Boolean IJCDEINGADN; // 0x1B7
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKIGGAKDIGO_CTOR_OFFSET))(this);
		}

		::System::Boolean BMFHBHDOBHD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKIGGAKDIGO_BMFHBHDOBHD_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKIGGAKDIGO_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKIGGAKDIGO_ONRECYCLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKIGGAKDIGO_CLEAR_OFFSET))(this);
		}

	};
