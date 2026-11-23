#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoLookDevSpiritFollow_B29D28AB92DD786E.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

class AB642D1382756991;
class MonoLookDevSpiritController;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define MONOLOOKDEVSPIRITFOLLOW_A3363E3DB7579311_OFFSET UNITYSDK_OFFSET(0x1AD8E10)
#define MONOLOOKDEVSPIRITFOLLOW_A7F1D4B1C9C036CB_OFFSET UNITYSDK_OFFSET(0x1ADD680)
#define MONOLOOKDEVSPIRITFOLLOW_A9D14598642EAAA4_OFFSET UNITYSDK_OFFSET(0x1ADCFF0)
#define MONOLOOKDEVSPIRITFOLLOW_AB3AD828AF778F9A_OFFSET UNITYSDK_OFFSET(0x1AD9EB0)
#define MONOLOOKDEVSPIRITFOLLOW_AD50E2722D90408B_OFFSET UNITYSDK_OFFSET(0x1AD8D70)
#define MONOLOOKDEVSPIRITFOLLOW_BBA75F26FACFC47E_OFFSET UNITYSDK_OFFSET(0x1ADB540)
#define MONOLOOKDEVSPIRITFOLLOW_BBEE8062AE9480F3_OFFSET UNITYSDK_OFFSET(0x1ADAAC0)
#define MONOLOOKDEVSPIRITFOLLOW_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x1ADDFC0)
#define MONOLOOKDEVSPIRITFOLLOW_E7BD80CE63283A65_OFFSET UNITYSDK_OFFSET(0x1AD96C0)
#define MONOLOOKDEVSPIRITFOLLOW_EB05B7CFE8207368_OFFSET UNITYSDK_OFFSET(0x1ADE100)
#define MONOLOOKDEVSPIRITFOLLOW_EF3F47833703805F_OFFSET UNITYSDK_OFFSET(0x1ADAC30)
#define MONOLOOKDEVSPIRITFOLLOW_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x1ADB4A0)
#define MONOLOOKDEVSPIRITFOLLOW_F9D1A29A3C6C5C0C_OFFSET UNITYSDK_OFFSET(0x1ADBF30)
#define MONOLOOKDEVSPIRITFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE030)

inline static constexpr unsigned int MonoLookDevSpiritFollow_TypeDefinitionIndex = 1986;

class MonoLookDevSpiritFollow : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Transform* followTarget; // 0x20
	::UnityEngine::Camera* targetCamera; // 0x28
	::AB642D1382756991* E8BF0C64BCCD101B; // 0x30
	::System::UInt64 followEntityRuntimeID; // 0x38
	::System::Single CheckHeight; // 0x40
	::UnityEngine::Vector3 F57C0D1E236D4234; // 0x44
	::UnityEngine::Vector3 A6C2878B04D619CB; // 0x50
	::UnityEngine::Vector3 E96328A3C65F6381; // 0x5C
	::UnityEngine::Vector3 BA17D508F94FCBC4; // 0x68
	::UnityEngine::Vector3 FD3404E42A050024; // 0x74
	::System::Single F5C4FE18C70F6C41; // 0x80
	::System::Single B6D52CD57AEB7E74; // 0x84
	::UnityEngine::Vector3 B546FCAE5EA2315A; // 0x88
	::UnityEngine::Vector3 E41E1CD31DBE7C00; // 0x94
	::UnityEngine::Vector3 F4F9489A3415F57B; // 0xA0
	::UnityEngine::Vector3 A7A330EE8EAF2DF5; // 0xAC
	::System::Single FollowPosDamping; // 0xB8
	::System::Single CrumbDistThreshold; // 0xBC
	::Il2CppArray<::UnityEngine::Vector3>* BB2E68848F9C6164; // 0xC0
	::System::Int32 A58DF737D28A57A9; // 0xC8
	::System::Single PalFwdDist; // 0xCC
	::System::Single PalScreenX; // 0xD0
	::UnityEngine::Vector3 BC1E6522DEE56D30; // 0xD4
	::MonoLookDevSpiritFollow_B29D28AB92DD786E followStyle; // 0xE0
	::System::Single BanCrumbAngle; // 0xE4
	::MonoLookDevSpiritController* A8F63DC331F6A9FF; // 0xE8
	::System::Single FollowDistThreshold; // 0xF0
	::System::Single TurnAngleThreshold; // 0xF4
	::System::Single CatchUpTime; // 0xF8
	::System::Single FollowtargetSpdThreshold; // 0xFC
	::System::Boolean B5FEA576B34BF880; // 0x100

	::System::Void A9D14598642EAAA4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITFOLLOW_A9D14598642EAAA4_OFFSET))(this);
	}

	::UnityEngine::Camera* EB05B7CFE8207368()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITFOLLOW_EB05B7CFE8207368_OFFSET))(this);
	}

	::System::Void BBA75F26FACFC47E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITFOLLOW_BBA75F26FACFC47E_OFFSET))(this);
	}

	static ::System::Void A3363E3DB7579311(::UnityEngine::Vector3 BF7646B43BCFCBDC, ::UnityEngine::Vector3 B966D6EDF409A537, ::System::Single B35BBBE7E39341A2, ::System::Single AE40CAA6BBFEAD2C, ::System::Single A97F5B807CC19082, ::System::Single B072BC6A47AD4B51, ::System::Single B7BFD36059119657, ::UnityEngine::E46B881AA2636190 FD6BEC6563AC7110)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::E46B881AA2636190))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITFOLLOW_A3363E3DB7579311_OFFSET))(BF7646B43BCFCBDC, B966D6EDF409A537, B35BBBE7E39341A2, AE40CAA6BBFEAD2C, A97F5B807CC19082, B072BC6A47AD4B51, B7BFD36059119657, FD6BEC6563AC7110);
	}

	::System::Single EF3F47833703805F(::UnityEngine::Vector3 BC546FFFB0A5B7A6, ::UnityEngine::Vector3 A41067CFE0E0FB08, ::UnityEngine::Vector3 A870DC8A69D547E8, ::System::Single AC90B4041F9FA7D3, ::System::Single EB9A492601B88801, ::System::Single B7BFD36059119657)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITFOLLOW_EF3F47833703805F_OFFSET))(this, BC546FFFB0A5B7A6, A41067CFE0E0FB08, A870DC8A69D547E8, AC90B4041F9FA7D3, EB9A492601B88801, B7BFD36059119657);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITFOLLOW__CTOR_OFFSET))(this);
	}

	::System::Void E7BD80CE63283A65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITFOLLOW_E7BD80CE63283A65_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 BBEE8062AE9480F3(::System::Single B072BC6A47AD4B51, ::System::Single B8C432D79923BEC2, ::System::Single B35BBBE7E39341A2, ::System::Single AE40CAA6BBFEAD2C, ::System::Single A97F5B807CC19082)
	{
		return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITFOLLOW_BBEE8062AE9480F3_OFFSET))(B072BC6A47AD4B51, B8C432D79923BEC2, B35BBBE7E39341A2, AE40CAA6BBFEAD2C, A97F5B807CC19082);
	}

	::System::Void A7F1D4B1C9C036CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITFOLLOW_A7F1D4B1C9C036CB_OFFSET))(this);
	}

	::System::Void E02954280801633F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITFOLLOW_E02954280801633F_OFFSET))(this);
	}

	::System::Void AD50E2722D90408B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITFOLLOW_AD50E2722D90408B_OFFSET))(this);
	}

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITFOLLOW_F328E4D8818B1E12_OFFSET))(this);
	}

	::UnityEngine::Vector3 AB3AD828AF778F9A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITFOLLOW_AB3AD828AF778F9A_OFFSET))(this);
	}

	::System::Void F9D1A29A3C6C5C0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVSPIRITFOLLOW_F9D1A29A3C6C5C0C_OFFSET))(this);
	}
};
