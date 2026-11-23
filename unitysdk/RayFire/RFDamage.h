#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RayfireRigid; }

#define RAYFIRE_RFDAMAGE_APPLYDAMAGE_OFFSET UNITYSDK_OFFSET(0x2955EF0)
#define RAYFIRE_RFDAMAGE_APPLY_OFFSET UNITYSDK_OFFSET(0x2956060)
#define RAYFIRE_RFDAMAGE_COPYFROM_OFFSET UNITYSDK_OFFSET(0x29560A0)
#define RAYFIRE_RFDAMAGE_RESET_OFFSET UNITYSDK_OFFSET(0x2769960)
#define RAYFIRE_RFDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x29560E0)

namespace RayFire
{
	inline static constexpr unsigned int RFDamage_TypeDefinitionIndex = 15429;

	class RFDamage : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single maxDamage; // 0x14
		::System::Single currentDamage; // 0x18
		::System::Boolean collect; // 0x1C
		::System::Byte _padding1[0x3];
		::System::Single multiplier; // 0x20

		static ::System::Boolean Apply(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::System::Single EF0556457E94F108)
		{
			return ((::System::Boolean(*)(::RayFire::RayfireRigid*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFDAMAGE_APPLY_OFFSET))(F2C7FF5A19F78852, EF0556457E94F108);
		}

		static ::System::Boolean ApplyDamage(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::System::Single EF0556457E94F108, ::UnityEngine::Vector3 E3B3B74A1052390C, ::System::Single BB4CC9C82411811E)
		{
			return ((::System::Boolean(*)(::RayFire::RayfireRigid*, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFDAMAGE_APPLYDAMAGE_OFFSET))(F2C7FF5A19F78852, EF0556457E94F108, E3B3B74A1052390C, BB4CC9C82411811E);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFDAMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFDAMAGE_RESET_OFFSET))(this);
		}

		::System::Void CopyFrom(::RayFire::RFDamage* B2D57FC344E16364)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFDamage*))((::PBYTE)hIl2Cpp + RAYFIRE_RFDAMAGE_COPYFROM_OFFSET))(this, B2D57FC344E16364);
		}
	};
}
