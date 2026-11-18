#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SpawnPointMaskRegion.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoSpawnPoint; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_MONOSPAWNPOINTMASKREGION_BJHJJDDIFMK_OFFSET UNITYSDK_OFFSET(0x1248FC00)
#define MOLEMOLE_MONOSPAWNPOINTMASKREGION_REFRESHMASKEDSPAWNPOINT_OFFSET UNITYSDK_OFFSET(0x1248F950)
#define MOLEMOLE_MONOSPAWNPOINTMASKREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x124906C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSpawnPointMaskRegion_TypeDefinitionIndex = 63006;

	class MonoSpawnPointMaskRegion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::SpawnPointMaskRegion maskParam; // 0x18
		::System::Collections::Generic::HashSet_1<::MoleMole::MonoSpawnPoint*>* MaskedSpawnPoint; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNPOINTMASKREGION__CTOR_OFFSET))(this);
		}

		::System::Void RefreshMaskedSpawnPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNPOINTMASKREGION_REFRESHMASKEDSPAWNPOINT_OFFSET))(this);
		}

		::System::Void BJHJJDDIFMK(::System::Collections::Generic::IEnumerable_1<::MoleMole::MonoSpawnPoint*>* AFEAFGGLAMK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::MonoSpawnPoint*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNPOINTMASKREGION_BJHJJDDIFMK_OFFSET))(this, AFEAFGGLAMK);
		}
	};
}
