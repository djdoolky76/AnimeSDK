#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RFReset_B179BCBA32AA3F1A.h"
#include "unitysdk/RayFire/RFReset_B687A1EB171A6CAB.h"
#include "unitysdk/RayFire/RFReset_B8E9296D7C7966B3.h"
#include "unitysdk/RayFire/RFReset_FF81EB0B96532D5E.h"
#include "unitysdk/System/Object.h"

namespace RayFire { class RayfireRigid; }

#define RAYFIRE_RFRESET_COPYFROM_OFFSET UNITYSDK_OFFSET(0x29C1300)
#define RAYFIRE_RFRESET_DESTROYFRAGMENTS_OFFSET UNITYSDK_OFFSET(0x29C13F0)
#define RAYFIRE_RFRESET_DESTROYPARTICLES_OFFSET UNITYSDK_OFFSET(0x29C1BD0)
#define RAYFIRE_RFRESET_FRAGMENTREUSESTATE_OFFSET UNITYSDK_OFFSET(0x29C1F20)
#define RAYFIRE_RFRESET_MESHROOTRESET_OFFSET UNITYSDK_OFFSET(0x29C2210)
#define RAYFIRE_RFRESET_OBJECTREUSESTATE_OFFSET UNITYSDK_OFFSET(0x29C2330)
#define RAYFIRE_RFRESET_PRESERVEFRAGMENTS_OFFSET UNITYSDK_OFFSET(0x29C2440)
#define RAYFIRE_RFRESET_RESETCLUSTERDEMOLITION_OFFSET UNITYSDK_OFFSET(0x29C24F0)
#define RAYFIRE_RFRESET_RESETFADE_OFFSET UNITYSDK_OFFSET(0x29C2520)
#define RAYFIRE_RFRESET_RESETMESHDEMOLITION_OFFSET UNITYSDK_OFFSET(0x29C2610)
#define RAYFIRE_RFRESET_RESETRIGID_OFFSET UNITYSDK_OFFSET(0x29C2790)
#define RAYFIRE_RFRESET_RESET_OFFSET UNITYSDK_OFFSET(0x29C29B0)
#define RAYFIRE_RFRESET_RESTORETRANSFORM_OFFSET UNITYSDK_OFFSET(0x29C2B40)
#define RAYFIRE_RFRESET_REUSEFRAGMENTS_OFFSET UNITYSDK_OFFSET(0x29C2D80)
#define RAYFIRE_RFRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x29C32B0)

namespace RayFire
{
	inline static constexpr unsigned int RFReset_TypeDefinitionIndex = 15707;

	class RFReset : public ::System::Object
	{
	public:
		::System::Boolean transform; // 0x10
		::System::Boolean damage; // 0x11
		::System::Byte _padding0[0x2];
		::RayFire::RFReset_B8E9296D7C7966B3 action; // 0x14
		::System::Single destroyDelay; // 0x18
		::RayFire::RFReset_FF81EB0B96532D5E mesh; // 0x1C
		::RayFire::RFReset_B687A1EB171A6CAB fragments; // 0x20
		::RayFire::RFReset_B179BCBA32AA3F1A shards; // 0x24
		::System::Boolean toBeDestroyed; // 0x28

		static ::System::Void DestroyFragments(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_DESTROYFRAGMENTS_OFFSET))(F2C7FF5A19F78852);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET__CTOR_OFFSET))(this);
		}

		static ::System::Void ResetRigid(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_RESETRIGID_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void PreserveFragments(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_PRESERVEFRAGMENTS_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Boolean MeshRootReset(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Boolean(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_MESHROOTRESET_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void ResetClusterDemolition(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_RESETCLUSTERDEMOLITION_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void ResetMeshDemolition(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_RESETMESHDEMOLITION_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void DestroyParticles(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_DESTROYPARTICLES_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void Reset(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_RESET_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void RestoreTransform(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_RESTORETRANSFORM_OFFSET))(F2C7FF5A19F78852);
		}

		::System::Void CopyFrom(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_COPYFROM_OFFSET))(this, F2C7FF5A19F78852);
		}

		static ::System::Boolean FragmentReuseState(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Boolean(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_FRAGMENTREUSESTATE_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void ReuseFragments(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_REUSEFRAGMENTS_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void ResetFade(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_RESETFADE_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Boolean ObjectReuseState(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Boolean(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFRESET_OBJECTREUSESTATE_OFFSET))(F2C7FF5A19F78852);
		}
	};
}
