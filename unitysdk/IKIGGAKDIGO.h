#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DynamicCollisionRegisterReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define IKIGGAKDIGO_BMFHBHDOBHD_OFFSET UNITYSDK_OFFSET(0x1CB49CD0)
#define IKIGGAKDIGO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB49DA0)
#define IKIGGAKDIGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB49FA0)
#define IKIGGAKDIGO_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CB49D20)
#define IKIGGAKDIGO_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CB49D60)

inline static constexpr unsigned int IKIGGAKDIGO_TypeDefinitionIndex = 43267;

	class IKIGGAKDIGO : public ::System::Object
	{
	public:
		::UnityEngine::Collider* KHMJGBNKOFE; // 0x10
		::KJFIKOKBCCA BGBEHLOFHAM; // 0x18
		::UnityEngine::Transform* ADCDKNLDDFN; // 0xA8
		::UnityEngine::Bounds PLCLBIMIGHB; // 0xB0
		::System::Boolean IJCDEINGADN; // 0xC8
		::RPG::Client::LittleGame::FiveDim::DynamicCollisionRegisterReason OBFHLDKOKEA; // 0xC9
		::System::Boolean CKILGKGKMHK; // 0xCA
		::System::Boolean NOOJOFHAIAA; // 0xCB
		::System::UInt32 KPGOIAGMDNN; // 0xCC
		::KLNKLOMDIIC HNFHBHNLJOH; // 0xD0
		::UnityEngine::Bounds BAHCKDEFBEN; // 0x138
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
