#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EBE7541DAF0BA279.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RAYFIREVORTEX_A85EE577BFE2EB06_OFFSET UNITYSDK_OFFSET(0x29965F0)
#define RAYFIRE_RAYFIREVORTEX_AB34718EA2D90A6B_OFFSET UNITYSDK_OFFSET(0x29972F0)
#define RAYFIRE_RAYFIREVORTEX_AC1DAC920E653FB6_OFFSET UNITYSDK_OFFSET(0x29968B0)
#define RAYFIRE_RAYFIREVORTEX_B339A4F0902AFBCD_OFFSET UNITYSDK_OFFSET(0x29974E0)
#define RAYFIRE_RAYFIREVORTEX_B9BC9EFEEDD9303F_OFFSET UNITYSDK_OFFSET(0x2996300)
#define RAYFIRE_RAYFIREVORTEX_BD87623221A3DEAB_OFFSET UNITYSDK_OFFSET(0x2996660)
#define RAYFIRE_RAYFIREVORTEX_BF128134802B6CC9_OFFSET UNITYSDK_OFFSET(0x2995CA0)
#define RAYFIRE_RAYFIREVORTEX_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2996230)
#define RAYFIRE_RAYFIREVORTEX_E436F89775BECB90_OFFSET UNITYSDK_OFFSET(0x2995EC0)
#define RAYFIRE_RAYFIREVORTEX_E5C61B45010E5D05_OFFSET UNITYSDK_OFFSET(0x2995FD0)
#define RAYFIRE_RAYFIREVORTEX_EC0E53EA82C1DBDA_OFFSET UNITYSDK_OFFSET(0x2995D20)
#define RAYFIRE_RAYFIREVORTEX_F6A1F0DCFBFD4619_OFFSET UNITYSDK_OFFSET(0x2997630)
#define RAYFIRE_RAYFIREVORTEX_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2995CA0)
#define RAYFIRE_RAYFIREVORTEX_FE7DCE607EC8B82C_OFFSET UNITYSDK_OFFSET(0x2995D20)
#define RAYFIRE_RAYFIREVORTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x29976A0)

namespace RayFire
{
	inline static constexpr unsigned int RayfireVortex_TypeDefinitionIndex = 15516;

	class RayfireVortex : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* transForm; // 0x20
		::Il2CppArray<::UnityEngine::Collider*>* colliders; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>* rigidbodies; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>* myRigidbodies; // 0x38
		::UnityEngine::Vector3 A232DF09DB16CAC8; // 0x40
		::UnityEngine::Vector3 A18E88D3AA304609; // 0x4C
		::UnityEngine::Vector3 F4A4CE58FCA1649B; // 0x58
		::UnityEngine::Vector3 E48EB43A8BDFF039; // 0x64
		::UnityEngine::Vector3 A8B87C3A723A5CD8; // 0x70
		::UnityEngine::Vector3 B1318C63BB5D53FA; // 0x7C
		::UnityEngine::Vector3 E84865B672F167BD; // 0x88
		::UnityEngine::Vector3 BCFFE09C5946F2DC; // 0x94
		::UnityEngine::Vector3 A70DD04FFD610FC7; // 0xA0
		::UnityEngine::Vector3 BC76FD650870D8BD; // 0xAC
		::UnityEngine::Vector3 A1B96437CAF681DC; // 0xB8
		::UnityEngine::Vector3 A25B2C012E7CA912; // 0xC4
		::System::Single B42649EBE1BC4D1B; // 0xD0
		::System::Single A36C75B40690669B; // 0xD4
		::System::Single AFB4E2F187E2E031; // 0xD8
		::System::Single E26BA513CBDED09E; // 0xDC
		::System::Single E522B186C4C4EE15; // 0xE0
		::System::Single AEF3252629AD2B5B; // 0xE4
		::System::Single E8389BDFF1447DC9; // 0xE8
		::System::Single E6BA2F6BFA575542; // 0xEC
		::System::Single F97EB4AEE0662DE1; // 0xF0
		::System::Single F7279FE6BF40319F; // 0xF4
		::System::Single B5CEA5FECC4B0BDF; // 0xF8
		::UnityEngine::EBE7541DAF0BA279 BCB820AE8AE4C53A; // 0xFC
		::System::Single F968CE4CA23A18A5; // 0x10C
		::UnityEngine::Vector3 topAnchor; // 0x110
		::UnityEngine::Vector3 bottomAnchor; // 0x11C
		::System::Single topRadius; // 0x128
		::System::Single bottomRadius; // 0x12C
		::System::Single eye; // 0x130
		::System::Boolean forceByMass; // 0x134
		::System::Byte _padding0[0x3];
		::System::Single stiffness; // 0x138
		::System::Single swirlStrength; // 0x13C
		::System::Boolean enableTorque; // 0x140
		::System::Byte _padding1[0x3];
		::System::Single torqueStrength; // 0x144
		::System::Single torqueVariation; // 0x148
		::System::Boolean enableHeightBias; // 0x14C
		::System::Byte _padding2[0x3];
		::System::Single biasSpeed; // 0x150
		::System::Single biasSpread; // 0x154
		::System::Int32 seed; // 0x158
		::System::Int32 circles; // 0x15C
		::System::Boolean showGizmo; // 0x160
		::System::Boolean topHandle; // 0x161
		::System::Byte _padding3[0x2];
		::System::Int32 mask; // 0x164
		::System::String* tagFilter; // 0x168

		::System::Void BD87623221A3DEAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX_BD87623221A3DEAB_OFFSET))(this);
		}

		static ::System::Boolean E5C61B45010E5D05(::UnityEngine::Vector3& AED4E8B903CFBAFD, ::UnityEngine::Vector3 F29FAB2EA267F44F, ::UnityEngine::Vector3 FCB80D968AD008FB, ::UnityEngine::Vector3 EFBF4FB911DE0AFD, ::UnityEngine::Vector3 F84AAE232965A514)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX_E5C61B45010E5D05_OFFSET))(AED4E8B903CFBAFD, F29FAB2EA267F44F, FCB80D968AD008FB, EFBF4FB911DE0AFD, F84AAE232965A514);
		}

		::System::Collections::IEnumerator* A85EE577BFE2EB06()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX_A85EE577BFE2EB06_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX__CTOR_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 B339A4F0902AFBCD(::UnityEngine::Vector3 EAB6A87D088A15E7, ::System::Single F54AF627638DE3C9)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX_B339A4F0902AFBCD_OFFSET))(EAB6A87D088A15E7, F54AF627638DE3C9);
		}

		::System::Single E436F89775BECB90(::System::Single AA607780168B5B11, ::System::Single F3CB79A6BE207A83)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX_E436F89775BECB90_OFFSET))(this, AA607780168B5B11, F3CB79A6BE207A83);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX_BF13C91AD80643D2_OFFSET))(this);
		}

		::UnityEngine::Vector3 FE7DCE607EC8B82C(::UnityEngine::Vector3 E46F3C856E19A4B4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX_FE7DCE607EC8B82C_OFFSET))(this, E46F3C856E19A4B4);
		}

		::System::Void AB34718EA2D90A6B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX_AB34718EA2D90A6B_OFFSET))(this);
		}

		::System::Void B9BC9EFEEDD9303F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX_B9BC9EFEEDD9303F_OFFSET))(this);
		}

		::System::Collections::IEnumerator* F6A1F0DCFBFD4619()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX_F6A1F0DCFBFD4619_OFFSET))(this);
		}

		::System::Void BF128134802B6CC9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX_BF128134802B6CC9_OFFSET))(this);
		}

		::System::Void AC1DAC920E653FB6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX_AC1DAC920E653FB6_OFFSET))(this);
		}

		::UnityEngine::Vector3 EC0E53EA82C1DBDA(::UnityEngine::Vector3 E46F3C856E19A4B4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RAYFIRE_RAYFIREVORTEX_EC0E53EA82C1DBDA_OFFSET))(this, E46F3C856E19A4B4);
		}
	};
}
