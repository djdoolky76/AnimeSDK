#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoLookDevSpiritController_BC759130FCE18595.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class B598BD10BB43E7FA; }
namespace UnityEngine { class CharacterController; }
namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine::InputSystem { class InputAction; }

#define MONOLOOKDEVSPIRITCONTROLLER_A404673D8D74F2AD_OFFSET UNITYSDK_OFFSET(0x1B0ACD0)
#define MONOLOOKDEVSPIRITCONTROLLER_ADE27CB748C97EA5_OFFSET UNITYSDK_OFFSET(0x1B0B470)
#define MONOLOOKDEVSPIRITCONTROLLER_B85A3646F2032E20_OFFSET UNITYSDK_OFFSET(0x1B0B010)
#define MONOLOOKDEVSPIRITCONTROLLER_BC4E0233CEEB621F_OFFSET UNITYSDK_OFFSET(0x1B0B820)
#define MONOLOOKDEVSPIRITCONTROLLER_BEA42ED92661C27E_OFFSET UNITYSDK_OFFSET(0x1B0BC10)
#define MONOLOOKDEVSPIRITCONTROLLER_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x1B0D0A0)
#define MONOLOOKDEVSPIRITCONTROLLER_E4D8EC8AE84950E6_OFFSET UNITYSDK_OFFSET(0x1B0C290)
#define MONOLOOKDEVSPIRITCONTROLLER_E6275F92C1E4B09F_OFFSET UNITYSDK_OFFSET(0x1B0D420)
#define MONOLOOKDEVSPIRITCONTROLLER_E758B37CEE7A623D_OFFSET UNITYSDK_OFFSET(0x1B0B720)
#define MONOLOOKDEVSPIRITCONTROLLER_EA451733CDF43D92_OFFSET UNITYSDK_OFFSET(0x16DFCA0)
#define MONOLOOKDEVSPIRITCONTROLLER_EB9F0BD9C3BD5513_OFFSET UNITYSDK_OFFSET(0x1B0AA20)
#define MONOLOOKDEVSPIRITCONTROLLER_F31F6A227EAEBEFC_OFFSET UNITYSDK_OFFSET(0x1B0B1C0)
#define MONOLOOKDEVSPIRITCONTROLLER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x1B0B630)
#define MONOLOOKDEVSPIRITCONTROLLER_F3F52DED49B83B57_OFFSET UNITYSDK_OFFSET(0x1B0C480)
#define MONOLOOKDEVSPIRITCONTROLLER_F958060A452677B5_OFFSET UNITYSDK_OFFSET(0x1B0A940)
#define MONOLOOKDEVSPIRITCONTROLLER_FE52FF29D3318E3B_OFFSET UNITYSDK_OFFSET(0x1B0D4D0)
#define MONOLOOKDEVSPIRITCONTROLLER_FF9AC16CF42ECBC3_OFFSET UNITYSDK_OFFSET(0x1B0B3A0)
#define MONOLOOKDEVSPIRITCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0D3B0)

inline static constexpr unsigned int MonoLookDevSpiritController_TypeDefinitionIndex = 2020;

class MonoLookDevSpiritController : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 A7401FC6867BB077; // 0x20
	::System::Boolean UseGroundMove; // 0x24
	::System::Boolean AllowInput; // 0x25
	::System::Byte _padding0[0x2];
	::UnityEngine::InputSystem::InputAction* Move; // 0x28
	::System::Single AFCDE9C55B2CA912; // 0x30
	::UnityEngine::Vector3 E4088CFD60546EF5; // 0x34
	::UnityEngine::Vector3 ADF19585E02EA853; // 0x40
	::System::Byte _padding1[0x4];
	::UnityEngine::Animation* E5D3517C6520C6B0; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* AnimationClipNames; // 0x58
	::UnityEngine::CharacterController* A8F63DC331F6A9FF; // 0x60
	::System::Single MoveSpdAnim; // 0x68
	::System::Single MoveSpd; // 0x6C
	::System::Single TurnSpd; // 0x70
	::System::Byte _padding2[0x4];
	::UnityEngine::FAED0374422E783A* clipTime2moveSpd; // 0x78
	::UnityEngine::FAED0374422E783A* clipTime2turnSpd; // 0x80
	::UnityEngine::FAED0374422E783A* clipTime2transit; // 0x88
	::System::Single MoveFadeIn; // 0x90
	::System::Single IdleFadeIn; // 0x94
	::System::Single AC6D8A6EB77E4FCF; // 0x98
	::MonoLookDevSpiritController_BC759130FCE18595 State; // 0x9C
	::System::Single MoveStartTime; // 0xA0
	::System::Single MoveStopTime; // 0xA4
	::UnityEngine::FAED0374422E783A* clipTime2startSpd; // 0xA8
	::UnityEngine::FAED0374422E783A* clipTime2stopSpd; // 0xB0
	::System::Single E7970C716F4C7099; // 0xB8
	::System::Single AE490690E9949AE0; // 0xBC
	::System::Single MoveSpeed; // 0xC0
	::System::Single MoveSpeedAnimRun; // 0xC4
	::UnityEngine::Animator* A2B120FE2BB45477; // 0xC8
	::System::Single turnRadius; // 0xD0
	::System::Single turnThreshold; // 0xD4

	::System::Void E4D8EC8AE84950E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_E4D8EC8AE84950E6_OFFSET))(this);
	}

	::System::Void E02954280801633F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_E02954280801633F_OFFSET))(this);
	}

	::System::Void FF9AC16CF42ECBC3(::UnityEngine::Vector3 A0C1F1E95D5F6CA9, ::UnityEngine::Vector3 B966D6EDF409A537)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_FF9AC16CF42ECBC3_OFFSET))(this, A0C1F1E95D5F6CA9, B966D6EDF409A537);
	}

	::System::Void BEA42ED92661C27E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_BEA42ED92661C27E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void F3F52DED49B83B57(::UnityEngine::Vector3 AE4048E07029952B, ::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_F3F52DED49B83B57_OFFSET))(this, AE4048E07029952B, EB5670302F34D4B7);
	}

	::System::Void ADE27CB748C97EA5(::UnityEngine::Vector3 B966D6EDF409A537)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_ADE27CB748C97EA5_OFFSET))(this, B966D6EDF409A537);
	}

	::System::Single F958060A452677B5(::UnityEngine::B598BD10BB43E7FA* A1BFFB1E0339BC80)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::B598BD10BB43E7FA*))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_F958060A452677B5_OFFSET))(this, A1BFFB1E0339BC80);
	}

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_F328E4D8818B1E12_OFFSET))(this);
	}

	::UnityEngine::B598BD10BB43E7FA* FE52FF29D3318E3B()
	{
		return ((::UnityEngine::B598BD10BB43E7FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_FE52FF29D3318E3B_OFFSET))(this);
	}

	::UnityEngine::CharacterController* EA451733CDF43D92()
	{
		return ((::UnityEngine::CharacterController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_EA451733CDF43D92_OFFSET))(this);
	}

	::System::Void B85A3646F2032E20(::UnityEngine::Vector3 B966D6EDF409A537)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_B85A3646F2032E20_OFFSET))(this, B966D6EDF409A537);
	}

	::UnityEngine::B598BD10BB43E7FA* E6275F92C1E4B09F()
	{
		return ((::UnityEngine::B598BD10BB43E7FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_E6275F92C1E4B09F_OFFSET))(this);
	}

	::System::Void BC4E0233CEEB621F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_BC4E0233CEEB621F_OFFSET))(this);
	}

	::System::Void E758B37CEE7A623D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_E758B37CEE7A623D_OFFSET))(this);
	}

	::System::Void F31F6A227EAEBEFC(::UnityEngine::Vector3 B966D6EDF409A537, ::System::Single E0BB23182A36FC11)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_F31F6A227EAEBEFC_OFFSET))(this, B966D6EDF409A537, E0BB23182A36FC11);
	}

	::System::Void A404673D8D74F2AD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_A404673D8D74F2AD_OFFSET))(this);
	}

	::System::Void EB9F0BD9C3BD5513()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITCONTROLLER_EB9F0BD9C3BD5513_OFFSET))(this);
	}
};
