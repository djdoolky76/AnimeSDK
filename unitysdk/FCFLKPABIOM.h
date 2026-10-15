#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FCFLKPABIOM_CTOR_OFFSET UNITYSDK_OFFSET(0x156B97F0)
#define FCFLKPABIOM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156B9070)
#define FCFLKPABIOM_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x156B93C0)
#define FCFLKPABIOM_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0x156B9550)
#define FCFLKPABIOM_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x156B9770)
#define FCFLKPABIOM_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x156B95D0)
#define FCFLKPABIOM_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0x156B9130)
#define FCFLKPABIOM_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x156B97B0)

inline static constexpr unsigned int FCFLKPABIOM_TypeDefinitionIndex = 69273;

	class FCFLKPABIOM : public ::System::Object
	{
	public:
		::UnityEngine::Transform* NHFCGMANFGF; // 0x10
		::System::Boolean KADJIDHNIEM; // 0x18
		::System::Boolean HNALEMBOBFE; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFLKPABIOM_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFLKPABIOM_DISPOSE_OFFSET))(this);
		}

		::System::Void HKEPJLDBGIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFLKPABIOM_HKEPJLDBGIG_OFFSET))(this);
		}

		::System::Void PEECNCABGFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFLKPABIOM_PEECNCABGFD_OFFSET))(this);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCFLKPABIOM_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FCFLKPABIOM_ONSPAWNASYNC_OFFSET))(this, a1);
		}

		::System::Void OnCancelSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFLKPABIOM_ONCANCELSPAWN_OFFSET))(this);
		}

		::System::Boolean UseLightWeightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFLKPABIOM_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

	};
