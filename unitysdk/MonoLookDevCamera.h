#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoLookDevCamera_ABACD204BECC83FB.h"
#include "unitysdk/MonoLookDevCamera_ABBDA92F1E06AC89.h"
#include "unitysdk/MonoLookDevCamera_AC14F3446BBCFBDE.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::InputSystem { class InputAction; }

#define MONOLOOKDEVCAMERA_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x18D62F0)
#define MONOLOOKDEVCAMERA_A4C14FAC7EA79EB9_OFFSET UNITYSDK_OFFSET(0x18D72A0)
#define MONOLOOKDEVCAMERA_AC59D7823D6943E7_OFFSET UNITYSDK_OFFSET(0x18D58A0)
#define MONOLOOKDEVCAMERA_AE842915D7DFCA3F_OFFSET UNITYSDK_OFFSET(0x18D6760)
#define MONOLOOKDEVCAMERA_B0B469D31751F88A_OFFSET UNITYSDK_OFFSET(0x18D7950)
#define MONOLOOKDEVCAMERA_BC4E0233CEEB621F_OFFSET UNITYSDK_OFFSET(0x18D7B80)
#define MONOLOOKDEVCAMERA_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x18D6640)
#define MONOLOOKDEVCAMERA_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x18D65C0)
#define MONOLOOKDEVCAMERA_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x18D7E60)
#define MONOLOOKDEVCAMERA_EEA5D6E8F4B2655A_OFFSET UNITYSDK_OFFSET(0x18D59D0)
#define MONOLOOKDEVCAMERA_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x18D66A0)
#define MONOLOOKDEVCAMERA_F33C642B4C82E0FE_OFFSET UNITYSDK_OFFSET(0x18D5F30)
#define MONOLOOKDEVCAMERA_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x18D5C30)
#define MONOLOOKDEVCAMERA_FC93DE2CFE613887_OFFSET UNITYSDK_OFFSET(0x18D6930)
#define MONOLOOKDEVCAMERA_FD7E94D1247E7BDA_OFFSET UNITYSDK_OFFSET(0x18D6110)
#define MONOLOOKDEVCAMERA_FE0125CDE457C86A_OFFSET UNITYSDK_OFFSET(0x18D6370)
#define MONOLOOKDEVCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18D7F50)

inline static constexpr unsigned int MonoLookDevCamera_TypeDefinitionIndex = 1398;

class MonoLookDevCamera : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Camera* mainCamera; // 0x20
	::UnityEngine::Transform* Follow; // 0x28
	::System::Single CenterY; // 0x30
	::System::Single FA0C715414D63156; // 0x34
	::System::Single Radius; // 0x38
	::System::Single Elevation; // 0x3C
	::UnityEngine::Vector3 OffsetPos; // 0x40
	::UnityEngine::Vector3 OffsetRot; // 0x4C
	::MonoLookDevCamera_AC14F3446BBCFBDE lerpStyle; // 0x58
	::System::Byte _padding0[0x4];
	::UnityEngine::InputSystem::InputAction* EnablePoint; // 0x60
	::UnityEngine::InputSystem::InputAction* LookPoint; // 0x68
	::UnityEngine::InputSystem::InputAction* LookRot; // 0x70
	::UnityEngine::Vector2 B4944D30D89675BC; // 0x78
	::MonoLookDevCamera_ABBDA92F1E06AC89 B16205E8EFE49DC4; // 0x80
	::MonoLookDevCamera_ABACD204BECC83FB E5C33D9162EAEB06; // 0xC0
	::MonoLookDevCamera_ABBDA92F1E06AC89 A59C8A213396460D; // 0xDC
	::UnityEngine::Vector3 F0C178B443295F6F; // 0x11C
	::UnityEngine::Vector3 FFD39B855EC1ED89; // 0x128
	::UnityEngine::Vector3 F39934DFEC86782A; // 0x134
	::UnityEngine::Vector3 AD4C1320C9F5F790; // 0x140
	::System::Boolean useMoveTowards; // 0x14C
	::System::Byte _padding1[0x3];
	::UnityEngine::Vector3 A70B180B2E76456A; // 0x150
	::UnityEngine::Vector3 B289CE298C3FB0B9; // 0x15C
	::UnityEngine::Vector3 DampingAxisPositive; // 0x168
	::UnityEngine::Vector3 DampingAxisNegative; // 0x174
	::UnityEngine::Vector3 F7773A0AF063DEA7; // 0x180
	::System::Single E4723C9DB6DCC631; // 0x18C
	::System::Single FF69B137ED12853F; // 0x190
	::System::Single B66B79045494A34C; // 0x194
	::System::Single dampingScale; // 0x198
	::System::Byte _padding2[0x4];
	::UnityEngine::FAED0374422E783A* dist2followSpdX; // 0x1A0
	::UnityEngine::FAED0374422E783A* dist2followSpdZ; // 0x1A8
	::System::Single cameraFollowSpeed; // 0x1B0
	::System::Single rotSpdH; // 0x1B4
	::System::Single B82BB0ACDA4B61E8; // 0x1B8
	::System::Single rotSpdV; // 0x1BC
	::System::Single E857B9EDE2DE289A; // 0x1C0
	::System::Single rotDampTime; // 0x1C4
	::System::Single pointDeltaRate; // 0x1C8
	::System::Boolean InvertHorizontal; // 0x1CC
	::System::Boolean InvertVertical; // 0x1CD
	::System::Byte _padding3[0x2];
	::UnityEngine::Vector2 ScreenSpace; // 0x1D0
	::System::Single Distance; // 0x1D8
	::System::Boolean A98A75AA3B828EC0; // 0x1DC
	::System::Boolean EA6805984D29E082; // 0x1DD
	::System::Byte _padding4[0x2];
	::System::Single A66406D907DE74CA; // 0x1E0
	::System::Single AF86B1FCFCF8650A; // 0x1E4
	::System::Single LerpTime; // 0x1E8
	::MonoLookDevCamera_ABBDA92F1E06AC89 FE8BB3FDDABA89F4; // 0x1EC
	::System::Byte _padding5[0x4];
	::UnityEngine::FAED0374422E783A* EaseInOut; // 0x230

	::System::Void BC5FC01AE53FF41F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_BC5FC01AE53FF41F_OFFSET))(this);
	}

	::System::Void FD7E94D1247E7BDA(::UnityEngine::Camera* E929054BCEC2CE82)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_FD7E94D1247E7BDA_OFFSET))(this, E929054BCEC2CE82);
	}

	::System::Void A28D6A0C3E793E7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_A28D6A0C3E793E7D_OFFSET))(this);
	}

	::System::Void AC59D7823D6943E7(::System::Single& FAE7AC8ADF38B0EF, ::System::Single& F5006C45C2B93A1C, ::System::Single B08393833D73F573, ::System::Single E6C0F5B22ADE46B2, ::System::Single E6998D5EAE30C230)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_AC59D7823D6943E7_OFFSET))(this, FAE7AC8ADF38B0EF, F5006C45C2B93A1C, B08393833D73F573, E6C0F5B22ADE46B2, E6998D5EAE30C230);
	}

	::System::Void A4C14FAC7EA79EB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_A4C14FAC7EA79EB9_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA__CTOR_OFFSET))(this);
	}

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_F328E4D8818B1E12_OFFSET))(this);
	}

	::System::Void B0B469D31751F88A(::MonoLookDevCamera_ABBDA92F1E06AC89& F943616C0930C2F4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevCamera_ABBDA92F1E06AC89&))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_B0B469D31751F88A_OFFSET))(this, F943616C0930C2F4);
	}

	::System::Void EEA5D6E8F4B2655A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_EEA5D6E8F4B2655A_OFFSET))(this);
	}

	::System::Void FE0125CDE457C86A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_FE0125CDE457C86A_OFFSET))(this);
	}

	::System::Void FC93DE2CFE613887()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_FC93DE2CFE613887_OFFSET))(this);
	}

	::System::Void AE842915D7DFCA3F(::UnityEngine::GameObject* AD1247287D2D9217)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_AE842915D7DFCA3F_OFFSET))(this, AD1247287D2D9217);
	}

	::System::Void E02954280801633F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_E02954280801633F_OFFSET))(this);
	}

	::System::Void BC4E0233CEEB621F(::MonoLookDevCamera_ABBDA92F1E06AC89& F943616C0930C2F4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevCamera_ABBDA92F1E06AC89&))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_BC4E0233CEEB621F_OFFSET))(this, F943616C0930C2F4);
	}

	::System::Void F33C642B4C82E0FE(::UnityEngine::Camera* E929054BCEC2CE82)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_F33C642B4C82E0FE_OFFSET))(this, E929054BCEC2CE82);
	}

	::System::Void F5E407B60CCCAC07()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_F5E407B60CCCAC07_OFFSET))(this);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERA_BF13C91AD80643D2_OFFSET))(this);
	}
};
