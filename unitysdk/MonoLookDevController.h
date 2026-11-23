#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoLookDevController_B41B1B638CCA463C.h"
#include "unitysdk/MonoLookDevController_E5E89C2E22DCC3ED.h"
#include "unitysdk/MonoLookDevController_EDCFACF38BDA5C11.h"
#include "unitysdk/UnityEngine/B8AC70DD96553B07.h"
#include "unitysdk/UnityEngine/E99D0ADA759D15E2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class CharacterController; }
namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::InputSystem { class InputAction; }

#define MONOLOOKDEVCONTROLLER_A0CB2D021DB45513_OFFSET UNITYSDK_OFFSET(0x1981210)
#define MONOLOOKDEVCONTROLLER_A1EA73E99D6D6B04_OFFSET UNITYSDK_OFFSET(0x197D210)
#define MONOLOOKDEVCONTROLLER_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x197EA20)
#define MONOLOOKDEVCONTROLLER_A404673D8D74F2AD_OFFSET UNITYSDK_OFFSET(0x197D970)
#define MONOLOOKDEVCONTROLLER_AB35BF5213EB0C9C_OFFSET UNITYSDK_OFFSET(0x1981060)
#define MONOLOOKDEVCONTROLLER_AC860F9C72E80487_OFFSET UNITYSDK_OFFSET(0x19811A0)
#define MONOLOOKDEVCONTROLLER_ACCC36EDE1D2C3CC_OFFSET UNITYSDK_OFFSET(0x197EBD0)
#define MONOLOOKDEVCONTROLLER_AEC5C567E26FEEE4_OFFSET UNITYSDK_OFFSET(0x197D5E0)
#define MONOLOOKDEVCONTROLLER_B4974F392B78D740_OFFSET UNITYSDK_OFFSET(0x1980F30)
#define MONOLOOKDEVCONTROLLER_B4B116863C27E47C_OFFSET UNITYSDK_OFFSET(0x1980560)
#define MONOLOOKDEVCONTROLLER_B99BBAF900107E10_OFFSET UNITYSDK_OFFSET(0x197CCC0)
#define MONOLOOKDEVCONTROLLER_BACA1E2DE135BBBE_OFFSET UNITYSDK_OFFSET(0x197CB60)
#define MONOLOOKDEVCONTROLLER_BB1534A555796F2F_OFFSET UNITYSDK_OFFSET(0x1980F20)
#define MONOLOOKDEVCONTROLLER_BB4E0583E6B5D029_OFFSET UNITYSDK_OFFSET(0x1981220)
#define MONOLOOKDEVCONTROLLER_BC4E0233CEEB621F_OFFSET UNITYSDK_OFFSET(0x1980920)
#define MONOLOOKDEVCONTROLLER_BE172FEEEF279C44_OFFSET UNITYSDK_OFFSET(0x1981130)
#define MONOLOOKDEVCONTROLLER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x197EB50)
#define MONOLOOKDEVCONTROLLER_BFB377347DCCEEAA_OFFSET UNITYSDK_OFFSET(0x19810C0)
#define MONOLOOKDEVCONTROLLER_BFF1B5F01A67C66B_OFFSET UNITYSDK_OFFSET(0x197C770)
#define MONOLOOKDEVCONTROLLER_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x1980AA0)
#define MONOLOOKDEVCONTROLLER_E981EB953B891FBC_OFFSET UNITYSDK_OFFSET(0x1939290)
#define MONOLOOKDEVCONTROLLER_E9EDD39B0E70D6BB_OFFSET UNITYSDK_OFFSET(0x197CFB0)
#define MONOLOOKDEVCONTROLLER_EA38A820DEC329DA_OFFSET UNITYSDK_OFFSET(0x197F890)
#define MONOLOOKDEVCONTROLLER_EBEFF4DA5A2A3D5A_OFFSET UNITYSDK_OFFSET(0x1980610)
#define MONOLOOKDEVCONTROLLER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x197F6B0)
#define MONOLOOKDEVCONTROLLER_FE0125CDE457C86A_OFFSET UNITYSDK_OFFSET(0x197EAA0)
#define MONOLOOKDEVCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1980DD0)

inline static constexpr unsigned int MonoLookDevController_TypeDefinitionIndex = 1640;

class MonoLookDevController : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Animator* A2B120FE2BB45477; // 0x20
	::System::Int32 F3352DFBB96DFD6A; // 0x28
	::System::Int32 A7401FC6867BB077; // 0x2C
	::System::Int32 B506BA03C667EA39; // 0x30
	::System::Int32 E191A013AC9A91E8; // 0x34
	::System::Int32 E53E5B4AC3282456; // 0x38
	::System::Int32 E546017FD981416F; // 0x3C
	::System::Int32 BCC0AC34A928FC30; // 0x40
	::System::Int32 A3D07CAA0CC9A0AF; // 0x44
	::System::Int32 E445310409C0F2E8; // 0x48
	::System::Byte _padding0[0x4];
	::UnityEngine::InputSystem::InputAction* MoveAction; // 0x50
	::UnityEngine::InputSystem::InputAction* JumpAction; // 0x58
	::UnityEngine::InputSystem::InputAction* StrafeAction; // 0x60
	::UnityEngine::Vector2 InputDir; // 0x68
	::System::Boolean BEBEDBC9579A2E86; // 0x70
	::System::Byte _padding1[0x7];
	::UnityEngine::Camera* E28055A1A7808A23; // 0x78
	::UnityEngine::CharacterController* A8F63DC331F6A9FF; // 0x80
	::System::Single BE922325FFF45AB0; // 0x88
	::System::Boolean IsStrafe; // 0x8C
	::System::Byte _padding2[0x3];
	::UnityEngine::Texture2D* Crosshair; // 0x90
	::System::Boolean isCrossHair; // 0x98
	::System::Byte _padding3[0x3];
	::System::Single turnSpeed; // 0x9C
	::System::Single moveSpeed; // 0xA0
	::System::Single B0167EAE43DF482B; // 0xA4
	::System::Single strafeRate; // 0xA8
	::System::Boolean Grounded; // 0xAC
	::System::Byte _padding4[0x3];
	::System::Single GroundedThreshold; // 0xB0
	::System::Single GroundedRadius; // 0xB4
	::UnityEngine::B8AC70DD96553B07 GroundLayers; // 0xB8
	::System::Single JumpRiseHeight; // 0xBC
	::MonoLookDevController_B41B1B638CCA463C ParabolaMethod; // 0xC0
	::UnityEngine::Vector2 RiseDropGravity; // 0xC4
	::UnityEngine::Vector2 RiseDropTime; // 0xCC
	::UnityEngine::Vector2 RiseDropDist; // 0xD4
	::System::Single JumpStartDelay; // 0xDC
	::System::Single JumpTimeout; // 0xE0
	::System::Single FreeFallTimeout; // 0xE4
	::System::Single FreeFallCheckDist; // 0xE8
	::System::Single LightLandingTime; // 0xEC
	::System::Single HeavyLandingTime; // 0xF0
	::System::Single LandingStopTime; // 0xF4
	::UnityEngine::Transform* FootL; // 0xF8
	::UnityEngine::Transform* FootR; // 0x100
	::UnityEngine::Vector3 A019D4F61DF7D770; // 0x108
	::UnityEngine::Vector3 BFCB65FADF396967; // 0x114
	::UnityEngine::Vector3 ED9AA14EEE5BE63E; // 0x120
	::System::Single aveSpd; // 0x12C
	::UnityEngine::Vector3 ABA01CCA054565EE; // 0x130
	::UnityEngine::E99D0ADA759D15E2 E733AF4110D6E7D3; // 0x13C
	::System::Single F67E7FDE3FFE1831; // 0x168
	::MonoLookDevController_EDCFACF38BDA5C11 Footed; // 0x16C
	::System::Single LeftFootAhead; // 0x170
	::MonoLookDevController_E5E89C2E22DCC3ED A074F71B0EAAF31A; // 0x174
	::UnityEngine::Vector3 BE4D0F8DAA174EFB; // 0x1BC
	::System::Single FEC6860ABAB7BFE1; // 0x1C8
	::System::Single E0997C171C996C73; // 0x1CC
	::System::Single F43E303165AC561E; // 0x1D0
	::System::Single FA65FC191034D849; // 0x1D4
	::System::Single AED65D5A1E7F5300; // 0x1D8
	::System::Byte _padding5[0x4];
	::UnityEngine::Transform* Target; // 0x1E0
	::System::Single F100D7356340096C; // 0x1E8
	::System::Single E57395B7D4D662BE; // 0x1EC
	::System::Boolean useControlerMove; // 0x1F0
	::System::Byte _padding6[0x7];
	::UnityEngine::SphereCollider* MoveCheckCollider; // 0x1F8
	::System::Single skinWidth; // 0x200
	::System::Boolean B57A9AA1D99E9927; // 0x204
	::System::Byte _padding7[0x3];
	::System::Single EED6CA7664B48F35; // 0x208
	::UnityEngine::Vector3 BE263BBC8D07E373; // 0x20C
	::UnityEngine::Vector3 B1A83232A516AD8D; // 0x218

	::System::Single E981EB953B891FBC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_E981EB953B891FBC_OFFSET))(this);
	}

	::UnityEngine::Vector3 EA38A820DEC329DA(::UnityEngine::Vector3 EB211B01816ACA79, ::UnityEngine::Vector3 FC9D139DF7C04F9F)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_EA38A820DEC329DA_OFFSET))(this, EB211B01816ACA79, FC9D139DF7C04F9F);
	}

	::System::Void E9EDD39B0E70D6BB(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_E9EDD39B0E70D6BB_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Single A0CB2D021DB45513()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_A0CB2D021DB45513_OFFSET))(this);
	}

	::System::Void BC4E0233CEEB621F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_BC4E0233CEEB621F_OFFSET))(this);
	}

	::System::Void A404673D8D74F2AD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_A404673D8D74F2AD_OFFSET))(this);
	}

	::System::Boolean BFB377347DCCEEAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_BFB377347DCCEEAA_OFFSET))(this);
	}

	::UnityEngine::Vector3 B4974F392B78D740()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_B4974F392B78D740_OFFSET))(this);
	}

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_F328E4D8818B1E12_OFFSET))(this);
	}

	::System::Void B99BBAF900107E10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_B99BBAF900107E10_OFFSET))(this);
	}

	::System::Void EBEFF4DA5A2A3D5A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_EBEFF4DA5A2A3D5A_OFFSET))(this);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_BF13C91AD80643D2_OFFSET))(this);
	}

	::System::Void AEC5C567E26FEEE4(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_AEC5C567E26FEEE4_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Single BB1534A555796F2F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_BB1534A555796F2F_OFFSET))(this);
	}

	::System::Single BB4E0583E6B5D029()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_BB4E0583E6B5D029_OFFSET))(this);
	}

	::System::Void FE0125CDE457C86A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_FE0125CDE457C86A_OFFSET))(this);
	}

	::UnityEngine::Vector3 B4B116863C27E47C(::UnityEngine::Vector3 FC9D139DF7C04F9F)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_B4B116863C27E47C_OFFSET))(this, FC9D139DF7C04F9F);
	}

	::System::Void A28D6A0C3E793E7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_A28D6A0C3E793E7D_OFFSET))(this);
	}

	::System::Void A1EA73E99D6D6B04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_A1EA73E99D6D6B04_OFFSET))(this);
	}

	::System::Void ACCC36EDE1D2C3CC(::MonoLookDevController_B41B1B638CCA463C F93C7C9383BE6B1A)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevController_B41B1B638CCA463C))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_ACCC36EDE1D2C3CC_OFFSET))(this, F93C7C9383BE6B1A);
	}

	::System::Void BACA1E2DE135BBBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_BACA1E2DE135BBBE_OFFSET))(this);
	}

	::System::Void BFF1B5F01A67C66B(::UnityEngine::Vector3 FC9D139DF7C04F9F)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_BFF1B5F01A67C66B_OFFSET))(this, FC9D139DF7C04F9F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Boolean BE172FEEEF279C44()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_BE172FEEEF279C44_OFFSET))(this);
	}

	::System::Void E02954280801633F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_E02954280801633F_OFFSET))(this);
	}

	::System::Boolean AB35BF5213EB0C9C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_AB35BF5213EB0C9C_OFFSET))(this);
	}

	::System::Boolean AC860F9C72E80487()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCONTROLLER_AC860F9C72E80487_OFFSET))(this);
	}
};
