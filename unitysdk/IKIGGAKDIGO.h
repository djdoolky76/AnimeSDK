#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DynamicCollisionRegisterReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define IKIGGAKDIGO_BMFHBHDOBHD_OFFSET UNITYSDK_OFFSET(0x1DD3E5B0)
#define IKIGGAKDIGO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD3E680)
#define IKIGGAKDIGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3E870)
#define IKIGGAKDIGO_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DD3E600)
#define IKIGGAKDIGO_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1DD3E640)

inline static constexpr unsigned int IKIGGAKDIGO_TypeDefinitionIndex = 44248;

	class IKIGGAKDIGO : public ::System::Object
	{
	public:
		::KJFIKOKBCCA BGBEHLOFHAM; // 0x10
		::UnityEngine::Collider* KHMJGBNKOFE; // 0xA0
		::UnityEngine::Transform* ADCDKNLDDFN; // 0xA8
		::System::Boolean CKILGKGKMHK; // 0xB0
		::RPG::Client::LittleGame::FiveDim::DynamicCollisionRegisterReason OBFHLDKOKEA; // 0xB1
		::System::Boolean IJCDEINGADN; // 0xB2
		::System::Boolean NOOJOFHAIAA; // 0xB3
		::System::UInt32 KPGOIAGMDNN; // 0xB4
		::UnityEngine::Bounds PLCLBIMIGHB; // 0xB8
		::UnityEngine::Bounds BAHCKDEFBEN; // 0xD0
		::KLNKLOMDIIC HNFHBHNLJOH; // 0xE8
		::KLNKLOMDIIC CADPNKFLDBC; // 0x150
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
