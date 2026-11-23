#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RayfireRestriction_AF89F7798A4EE79F.h"
#include "unitysdk/RayFire/RayfireRestriction_F3CA9ABB67D0A1E6.h"
#include "unitysdk/RayFire/RayfireRestriction_F463E04C73248F29.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RayFire { class RayfireRigid; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIRERESTRICTION_AAE55B4269733836_OFFSET UNITYSDK_OFFSET(0x2A23E20)
#define RAYFIRE_RAYFIRERESTRICTION_BC291793CBB56818_OFFSET UNITYSDK_OFFSET(0x2A239F0)
#define RAYFIRE_RAYFIRERESTRICTION_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x2A23DA0)
#define RAYFIRE_RAYFIRERESTRICTION_BC7F534A8275D79E_OFFSET UNITYSDK_OFFSET(0x2A23AE0)
#define RAYFIRE_RAYFIRERESTRICTION_E08804AB5DE01CA1_OFFSET UNITYSDK_OFFSET(0x2A23DB0)
#define RAYFIRE_RAYFIRERESTRICTION_E780F2D3F83FD48C_OFFSET UNITYSDK_OFFSET(0x2A23B60)
#define RAYFIRE_RAYFIRERESTRICTION__CTOR_OFFSET UNITYSDK_OFFSET(0x2A23E90)

namespace RayFire
{
	inline static constexpr unsigned int RayfireRestriction_TypeDefinitionIndex = 15947;

	class RayfireRestriction : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean enable; // 0x20
		::System::Byte _padding0[0x3];
		::RayFire::RayfireRestriction_F463E04C73248F29 breakAction; // 0x24
		::System::Single actionDelay; // 0x28
		::System::Single checkInterval; // 0x2C
		::System::Single distance; // 0x30
		::RayFire::RayfireRestriction_AF89F7798A4EE79F position; // 0x34
		::UnityEngine::Transform* target; // 0x38
		::UnityEngine::Collider* Collider; // 0x40
		::RayFire::RayfireRestriction_F3CA9ABB67D0A1E6 region; // 0x48
		::System::Boolean broke; // 0x4C

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERESTRICTION_BC5FC01AE53FF41F_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERESTRICTION__CTOR_OFFSET))(this);
		}

		static ::System::Collections::IEnumerator* E08804AB5DE01CA1(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Collections::IEnumerator*(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERESTRICTION_E08804AB5DE01CA1_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void BC291793CBB56818(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERESTRICTION_BC291793CBB56818_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void E780F2D3F83FD48C(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERESTRICTION_E780F2D3F83FD48C_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Collections::IEnumerator* AAE55B4269733836(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Collections::IEnumerator*(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERESTRICTION_AAE55B4269733836_OFFSET))(F2C7FF5A19F78852);
		}

		::System::Void BC7F534A8275D79E(::RayFire::RayfireRestriction* BF2F3807ADE4B952)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRestriction*))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIRERESTRICTION_BC7F534A8275D79E_OFFSET))(this, BF2F3807ADE4B952);
		}
	};
}
