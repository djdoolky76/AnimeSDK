#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoLookDevCameraRel_EA643BA5E638DE33.h"
#include "unitysdk/MonoLookDevCameraRel_EA643BA5E638DE33_AC14F3446BBCFBDE.h"
#include "unitysdk/MonoLookDevCameraRel_EA643BA5E638DE33_FA170206231BB6EC.h"
#include "unitysdk/MonoLookDevCameraRel_EF8F775C3FDA2430.h"
#include "unitysdk/MonoLookDevCameraRel_F27B63ACE6B3A667.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MonoLookDevCameraRel_A0E271E7EB9345BF.h"

class AB642D1382756991;
class MonoLookDevController;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::InputSystem { class InputAction; }

#define MONOLOOKDEVCAMERAREL_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x1AC2260)
#define MONOLOOKDEVCAMERAREL_A33CD25CED827265_OFFSET UNITYSDK_OFFSET(0x1AC02F0)
#define MONOLOOKDEVCAMERAREL_A4C14FAC7EA79EB9_OFFSET UNITYSDK_OFFSET(0x1AC3460)
#define MONOLOOKDEVCAMERAREL_AC59D7823D6943E7_OFFSET UNITYSDK_OFFSET(0x1ABF250)
#define MONOLOOKDEVCAMERAREL_AE842915D7DFCA3F_OFFSET UNITYSDK_OFFSET(0x1AC3190)
#define MONOLOOKDEVCAMERAREL_AEA3B99E73F155B3_OFFSET UNITYSDK_OFFSET(0x1ABEF20)
#define MONOLOOKDEVCAMERAREL_AEC5C567E26FEEE4_OFFSET UNITYSDK_OFFSET(0x1AC1E70)
#define MONOLOOKDEVCAMERAREL_AFD18C305ECB11A2_OFFSET UNITYSDK_OFFSET(0x1ABFCA0)
#define MONOLOOKDEVCAMERAREL_B0B469D31751F88A_OFFSET UNITYSDK_OFFSET(0x1AC4140)
#define MONOLOOKDEVCAMERAREL_B0E43407842C9EC7_OFFSET UNITYSDK_OFFSET(0x1ABE9B0)
#define MONOLOOKDEVCAMERAREL_B4CB6963C1F07CF1_OFFSET UNITYSDK_OFFSET(0x1AC3E70)
#define MONOLOOKDEVCAMERAREL_B959B24139A47A0F_OFFSET UNITYSDK_OFFSET(0x1AC3370)
#define MONOLOOKDEVCAMERAREL_BC4E0233CEEB621F_OFFSET UNITYSDK_OFFSET(0x1AC45E0)
#define MONOLOOKDEVCAMERAREL_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x1AC3070)
#define MONOLOOKDEVCAMERAREL_BCCC38DD3458C4E1_OFFSET UNITYSDK_OFFSET(0x1AC4A80)
#define MONOLOOKDEVCAMERAREL_BD3994E3D3C02D05_OFFSET UNITYSDK_OFFSET(0x1AC6280)
#define MONOLOOKDEVCAMERAREL_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x1AC2650)
#define MONOLOOKDEVCAMERAREL_E43C12B162BCB3E1_OFFSET UNITYSDK_OFFSET(0x1AC5490)
#define MONOLOOKDEVCAMERAREL_E56834982E77851D_OFFSET UNITYSDK_OFFSET(0x1ABF180)
#define MONOLOOKDEVCAMERAREL_ECFC0AAF85195642_OFFSET UNITYSDK_OFFSET(0x1AC3440)
#define MONOLOOKDEVCAMERAREL_ED35ADC10D329BF4_OFFSET UNITYSDK_OFFSET(0x1ABFE70)
#define MONOLOOKDEVCAMERAREL_EEA5D6E8F4B2655A_OFFSET UNITYSDK_OFFSET(0x1AC11A0)
#define MONOLOOKDEVCAMERAREL_F06A5905FC4026D2_OFFSET UNITYSDK_OFFSET(0x1ABEC00)
#define MONOLOOKDEVCAMERAREL_F095CED8F83FF9D9_OFFSET UNITYSDK_OFFSET(0x1AC26F0)
#define MONOLOOKDEVCAMERAREL_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x1AC30D0)
#define MONOLOOKDEVCAMERAREL_F33C642B4C82E0FE_OFFSET UNITYSDK_OFFSET(0x1AC1930)
#define MONOLOOKDEVCAMERAREL_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x1AC1480)
#define MONOLOOKDEVCAMERAREL_F7CEC1DF3B03799D_OFFSET UNITYSDK_OFFSET(0x1AC0E20)
#define MONOLOOKDEVCAMERAREL_F84A33028016C5DE_OFFSET UNITYSDK_OFFSET(0x1ABF0E0)
#define MONOLOOKDEVCAMERAREL_F9716A3355005307_OFFSET UNITYSDK_OFFSET(0x1AC2F90)
#define MONOLOOKDEVCAMERAREL_F99472DF6BCA233F_OFFSET UNITYSDK_OFFSET(0x1AC6340)
#define MONOLOOKDEVCAMERAREL_FC0D1867069D71C6_OFFSET UNITYSDK_OFFSET(0x1ABF350)
#define MONOLOOKDEVCAMERAREL_FCD2BBEA4D491350_OFFSET UNITYSDK_OFFSET(0x1AC61D0)
#define MONOLOOKDEVCAMERAREL_FD7E94D1247E7BDA_OFFSET UNITYSDK_OFFSET(0x1AC1BD0)
#define MONOLOOKDEVCAMERAREL_FE0125CDE457C86A_OFFSET UNITYSDK_OFFSET(0x1AC23E0)
#define MONOLOOKDEVCAMERAREL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC5990)
#define MONOLOOKDEVCAMERAREL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC59D0)

inline static constexpr unsigned int MonoLookDevCameraRel_TypeDefinitionIndex = 1970;

class MonoLookDevCameraRel : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Single* StaticGet_F9B2DD7617853493()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonoLookDevCameraRel_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::UnityEngine::Camera* mainCamera; // 0x20
	::System::Single NearClipPlane; // 0x28
	::System::Single DefaultFOV; // 0x2C
	::System::Single StrafeFOV; // 0x30
	::System::Single E4BCF4111209047B; // 0x34
	::System::Single BF2919D2AD7E7915; // 0x38
	::MonoLookDevCameraRel_EA643BA5E638DE33 B16205E8EFE49DC4; // 0x3C
	::MonoLookDevCameraRel_EF8F775C3FDA2430 E5C33D9162EAEB06; // 0x8C
	::MonoLookDevCameraRel_EA643BA5E638DE33 A59C8A213396460D; // 0xA8
	::UnityEngine::Transform* Follow; // 0xF8
	::System::Single CenterY; // 0x100
	::System::Boolean UpdatFollowParams; // 0x104
	::System::Byte _padding0[0x3];
	::System::Single Polar; // 0x108
	::System::Single Radius; // 0x10C
	::System::Single Elevation; // 0x110
	::UnityEngine::Vector3 OffsetPos; // 0x114
	::UnityEngine::Vector3 OffsetRot; // 0x120
	::UnityEngine::Vector3 StrafeOffset; // 0x12C
	::System::Single StrafeFadeTime; // 0x138
	::UnityEngine::Vector3 AD9E86F58153A2BE; // 0x13C
	::UnityEngine::Vector3 FAE2D2B337B1F45B; // 0x148
	::System::Byte _padding1[0x4];
	::AB642D1382756991* E8BF0C64BCCD101B; // 0x158
	::System::UInt64 followEntityRuntimeID; // 0x160
	::System::Single UpdateCheckingValue; // 0x168
	::UnityEngine::Vector3 F0C178B443295F6F; // 0x16C
	::UnityEngine::Vector3 FFD39B855EC1ED89; // 0x178
	::UnityEngine::Vector3 F39934DFEC86782A; // 0x184
	::UnityEngine::Vector3 AD4C1320C9F5F790; // 0x190
	::UnityEngine::Vector3 A70B180B2E76456A; // 0x19C
	::UnityEngine::Vector3 B289CE298C3FB0B9; // 0x1A8
	::System::Single dampingScale; // 0x1B4
	::System::Single DampingAirUp; // 0x1B8
	::System::Single DampingAirDown; // 0x1BC
	::System::Single DampingGroundY; // 0x1C0
	::UnityEngine::Vector2 F7773A0AF063DEA7; // 0x1C4
	::System::Single B66B79045494A34C; // 0x1CC
	::System::Single BF858C260F78DD45; // 0x1D0
	::System::Single B73CD2222BEEB010; // 0x1D4
	::UnityEngine::FAED0374422E783A* Angle2dampingXZ; // 0x1D8
	::System::Single BC4D7D2F4ADBD77E; // 0x1E0
	::System::Byte _padding2[0x4];
	::UnityEngine::InputSystem::InputAction* EnablePoint; // 0x1E8
	::UnityEngine::InputSystem::InputAction* LookPoint; // 0x1F0
	::UnityEngine::InputSystem::InputAction* LookRot; // 0x1F8
	::UnityEngine::InputSystem::InputAction* Zoom; // 0x200
	::UnityEngine::Vector2 B4944D30D89675BC; // 0x208
	::UnityEngine::Camera* B23E18F235A49443; // 0x210
	::System::Single E23EDE3E39365A2B; // 0x218
	::System::Boolean InvertHorizontal; // 0x21C
	::System::Boolean InvertVertical; // 0x21D
	::System::Byte _padding3[0x2];
	::System::Single MinRotElevation; // 0x220
	::System::Single MaxRotElevation; // 0x224
	::System::Single ZoomScale; // 0x228
	::System::Single MinZoomRadius; // 0x22C
	::System::Single MaxZoomRadius; // 0x230
	::System::Single E0C601BC5792BA9D; // 0x234
	::System::Single F0F24397D0C7A5BA; // 0x238
	::System::Single zoomDamping; // 0x23C
	::System::Single E6D4D03EB37BC636; // 0x240
	::UnityEngine::Vector2 BB9043C356CE3349; // 0x244
	::UnityEngine::Vector2 B1C433132114D0BD; // 0x24C
	::UnityEngine::Vector2 B2D0AE203EEA19E9; // 0x254
	::System::Single EC8D057A44CC3FC1; // 0x25C
	::System::Single A544AF5FE85966D8; // 0x260
	::System::Single F448935287D94DE6; // 0x264
	::System::Single E1CEE479CCDF6098; // 0x268
	::System::Boolean _isOnGround; // 0x26C
	::System::Byte _padding4[0x3];
	::System::Single B984A0CCB33177D4; // 0x270
	::System::Single MovePredictTime; // 0x274
	::UnityEngine::Vector3 BB2A6A3C694B93D2; // 0x278
	::UnityEngine::Vector3 AB79D057EFFAB4F2; // 0x284
	::System::Single AverageSpd; // 0x290
	::System::Single AverageVel; // 0x294
	::Il2CppArray<::System::Single>* F03CDFA0F1366550; // 0x298
	::System::Int32 E9B90BCB34D454D5; // 0x2A0
	::System::Boolean AdjustPolar; // 0x2A4
	::System::Boolean AutoPolarByControl; // 0x2A5
	::System::Byte _padding5[0x2];
	::System::Single polarOffsetRateInput; // 0x2A8
	::System::Single polarOffsetRateMove; // 0x2AC
	::System::Single polarOffsetLerpSpeed; // 0x2B0
	::System::Byte _padding6[0x4];
	::MonoLookDevController* A8F63DC331F6A9FF; // 0x2B8
	::System::Single FE48B64DE1BAA2F5; // 0x2C0
	::System::Boolean AdjustElevation; // 0x2C4
	::System::Byte _padding7[0x3];
	::System::Single SlopeAngleDampingTime; // 0x2C8
	::System::Single SlopeElevationDampingTime; // 0x2CC
	::System::Single SlopeAngleRateUp; // 0x2D0
	::System::Single SlopeAngleRateDown; // 0x2D4
	::System::Single A56292C30881B356; // 0x2D8
	::System::Single SlopeAngle; // 0x2DC
	::System::Single A18A3D4363C84D4A; // 0x2E0
	::System::Single A5BC109CA364FA68; // 0x2E4
	::System::Single AdjustedSlopeAngle; // 0x2E8
	::System::Single SlopeAngleThreshold; // 0x2EC
	::System::Single LookPointMinElevationHeightDown; // 0x2F0
	::System::Single LookPointMinRadius; // 0x2F4
	::UnityEngine::FAED0374422E783A* Radius2CenterYAdj; // 0x2F8
	::System::Single HeadCenterDeltaY; // 0x300
	::System::Boolean EnableCollision; // 0x304
	::System::Byte _padding8[0x3];
	::UnityEngine::Vector3 B19F68FC93A81040; // 0x308
	::System::Single FB95B6D0A22AF372; // 0x314
	::System::Single FF9F1EF28A143554; // 0x318
	::System::Single A3568F19D2B6EDFB; // 0x31C
	::System::Single A300F1E9910F2A31; // 0x320
	::System::Single B2D6FD4F4D567A71; // 0x324
	::System::Single FadeOutTime; // 0x328
	::System::Boolean showOcclusionCheckLines; // 0x32C
	::System::Byte _padding9[0x3];
	::System::Collections::Generic::List_1<::System::Object*>* BA9F852404F830E3; // 0x330
	::System::Int32 EB787DDDD97CDADC; // 0x338
	::System::Int32 A6E015E385FD75DF; // 0x33C
	::UnityEngine::SphereCollider* ShakeSource; // 0x340
	::System::Single ShakeRange; // 0x348
	::System::Single ShakeRandomRange; // 0x34C
	::System::Single ShakeRandomTimeScale; // 0x350
	::System::Single ShakeDuration; // 0x354
	::System::Single ShakeKeepTime; // 0x358
	::System::Single ShakeFreq; // 0x35C
	::UnityEngine::Vector3 ShakeRot; // 0x360
	::System::Byte _padding10[0x4];
	::UnityEngine::FAED0374422E783A* ShakeFadingCurve; // 0x370
	::System::Boolean ProjectToCameraXY; // 0x378
	::System::Boolean IsLocalSpace; // 0x379
	::System::Byte _padding11[0x2];
	::MonoLookDevCameraRel_F27B63ACE6B3A667 ShakeCoordinate; // 0x37C
	::UnityEngine::Vector2 ScreenSpace; // 0x380
	::System::Single Distance; // 0x388
	::System::Byte _padding12[0x4];
	::UnityEngine::Camera* LerpTargetCamera; // 0x390
	::MonoLookDevCameraRel_EA643BA5E638DE33_FA170206231BB6EC lerpStyle; // 0x398
	::MonoLookDevCameraRel_EA643BA5E638DE33_AC14F3446BBCFBDE convertStyle; // 0x39C
	::System::Boolean A98A75AA3B828EC0; // 0x3A0
	::System::Boolean EA6805984D29E082; // 0x3A1
	::System::Byte _padding13[0x2];
	::System::Single A66406D907DE74CA; // 0x3A4
	::System::Single AF86B1FCFCF8650A; // 0x3A8
	::System::Single LerpTime; // 0x3AC
	::MonoLookDevCameraRel_EA643BA5E638DE33 FE8BB3FDDABA89F4; // 0x3B0
	::UnityEngine::FAED0374422E783A* F66F1666EC5CBF7A; // 0x400

	::System::Void A28D6A0C3E793E7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_A28D6A0C3E793E7D_OFFSET))(this);
	}

	::System::Boolean BD3994E3D3C02D05()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_BD3994E3D3C02D05_OFFSET))(this);
	}

	static ::System::Single ECFC0AAF85195642(::System::Single B35BBBE7E39341A2, ::System::Single AE40CAA6BBFEAD2C)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_ECFC0AAF85195642_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}

	::System::Void FC0D1867069D71C6(::MonoLookDevCameraRel_EA643BA5E638DE33& F943616C0930C2F4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevCameraRel_EA643BA5E638DE33&))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_FC0D1867069D71C6_OFFSET))(this, F943616C0930C2F4);
	}

	::System::Single AFD18C305ECB11A2(::UnityEngine::Vector3 BC546FFFB0A5B7A6, ::UnityEngine::Vector3 A41067CFE0E0FB08, ::System::Single BAFA501A7D477175)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_AFD18C305ECB11A2_OFFSET))(this, BC546FFFB0A5B7A6, A41067CFE0E0FB08, BAFA501A7D477175);
	}

	::System::Void ED35ADC10D329BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_ED35ADC10D329BF4_OFFSET))(this);
	}

	::System::Void F33C642B4C82E0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_F33C642B4C82E0FE_OFFSET))(this);
	}

	::System::Void EEA5D6E8F4B2655A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_EEA5D6E8F4B2655A_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL__CTOR_OFFSET))(this);
	}

	::System::Void F06A5905FC4026D2(::UnityEngine::Vector3 AFE8F10692F5139F, ::MonoLookDevCameraRel_F27B63ACE6B3A667 ACDAC7F65FA01DCD, ::System::Single EA6B8657B1CD96BA, ::UnityEngine::Vector3 B9EDB1826BE0A262, ::UnityEngine::Vector3 B6A42766014CEA73, ::System::Single B3FB83BCCB8E6FDB, ::System::Single E0032D9231AD054B, ::System::Single BD3B33D72884EDA1, ::System::Single FA82B05EBDADADC2, ::System::Single BAFA501A7D477175, ::System::Single BED51AC8258C61FB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MonoLookDevCameraRel_F27B63ACE6B3A667, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_F06A5905FC4026D2_OFFSET))(this, AFE8F10692F5139F, ACDAC7F65FA01DCD, EA6B8657B1CD96BA, B9EDB1826BE0A262, B6A42766014CEA73, B3FB83BCCB8E6FDB, E0032D9231AD054B, BD3B33D72884EDA1, FA82B05EBDADADC2, BAFA501A7D477175, BED51AC8258C61FB);
	}

	::System::Void B4CB6963C1F07CF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_B4CB6963C1F07CF1_OFFSET))(this);
	}

	::System::Void AE842915D7DFCA3F(::UnityEngine::GameObject* AD1247287D2D9217)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_AE842915D7DFCA3F_OFFSET))(this, AD1247287D2D9217);
	}

	::System::Void F5E407B60CCCAC07()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_F5E407B60CCCAC07_OFFSET))(this);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_BF13C91AD80643D2_OFFSET))(this);
	}

	::System::Void AC59D7823D6943E7(::System::Single& FAE7AC8ADF38B0EF, ::System::Single& F5006C45C2B93A1C, ::System::Single F519120595F08E57, ::System::Single E6998D5EAE30C230)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_AC59D7823D6943E7_OFFSET))(this, FAE7AC8ADF38B0EF, F5006C45C2B93A1C, F519120595F08E57, E6998D5EAE30C230);
	}

	::System::Single FCD2BBEA4D491350()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_FCD2BBEA4D491350_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Vector3 B959B24139A47A0F(::UnityEngine::Vector3 B35BBBE7E39341A2, ::UnityEngine::Vector3 AE40CAA6BBFEAD2C)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_B959B24139A47A0F_OFFSET))(B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}

	::System::Void AEA3B99E73F155B3(::MonoLookDevCameraRel_EA643BA5E638DE33& F943616C0930C2F4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevCameraRel_EA643BA5E638DE33&))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_AEA3B99E73F155B3_OFFSET))(this, F943616C0930C2F4);
	}

	::System::Void BC4E0233CEEB621F(::MonoLookDevCameraRel_EA643BA5E638DE33& F943616C0930C2F4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevCameraRel_EA643BA5E638DE33&))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_BC4E0233CEEB621F_OFFSET))(this, F943616C0930C2F4);
	}

	::System::Void FD7E94D1247E7BDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_FD7E94D1247E7BDA_OFFSET))(this);
	}

	::System::Void B0B469D31751F88A(::MonoLookDevCameraRel_EA643BA5E638DE33& F943616C0930C2F4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevCameraRel_EA643BA5E638DE33&))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_B0B469D31751F88A_OFFSET))(this, F943616C0930C2F4);
	}

	::System::Void F84A33028016C5DE(::MonoLookDevCameraRel_EA643BA5E638DE33& F943616C0930C2F4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevCameraRel_EA643BA5E638DE33&))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_F84A33028016C5DE_OFFSET))(this, F943616C0930C2F4);
	}

	::System::Void A4C14FAC7EA79EB9(::MonoLookDevCameraRel_EA643BA5E638DE33 F943616C0930C2F4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevCameraRel_EA643BA5E638DE33))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_A4C14FAC7EA79EB9_OFFSET))(this, F943616C0930C2F4);
	}

	::System::Void F7CEC1DF3B03799D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_F7CEC1DF3B03799D_OFFSET))(this);
	}

	::System::Void BCCC38DD3458C4E1(::MonoLookDevCameraRel_EF8F775C3FDA2430& FC2800ECCDD25F11, ::UnityEngine::Vector3 E9E5CE23E6BEF35C, ::System::Single FF25F976D04FA569, ::System::Single AC7A523AB0F13A57, ::System::Single A89B21AFE8074A79)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevCameraRel_EF8F775C3FDA2430&, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_BCCC38DD3458C4E1_OFFSET))(this, FC2800ECCDD25F11, E9E5CE23E6BEF35C, FF25F976D04FA569, AC7A523AB0F13A57, A89B21AFE8074A79);
	}

	::System::Void F095CED8F83FF9D9(::MonoLookDevCameraRel_EA643BA5E638DE33& F943616C0930C2F4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevCameraRel_EA643BA5E638DE33&))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_F095CED8F83FF9D9_OFFSET))(this, F943616C0930C2F4);
	}

	::System::Void A33CD25CED827265(::MonoLookDevCameraRel_EF8F775C3FDA2430 E82293C0814051A5, ::MonoLookDevCameraRel_A0E271E7EB9345BF& AF593E983291B30F, ::UnityEngine::Vector3& B32375AE68E5F797, ::UnityEngine::Vector3& B6A42766014CEA73, ::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevCameraRel_EF8F775C3FDA2430, ::MonoLookDevCameraRel_A0E271E7EB9345BF&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_A33CD25CED827265_OFFSET))(this, E82293C0814051A5, AF593E983291B30F, B32375AE68E5F797, B6A42766014CEA73, EB5670302F34D4B7);
	}

	::System::Void F9716A3355005307(::MonoLookDevCameraRel_EA643BA5E638DE33& F943616C0930C2F4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevCameraRel_EA643BA5E638DE33&))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_F9716A3355005307_OFFSET))(this, F943616C0930C2F4);
	}

	::System::Boolean F99472DF6BCA233F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_F99472DF6BCA233F_OFFSET))(this);
	}

	::System::Void E56834982E77851D(::MonoLookDevCameraRel_EA643BA5E638DE33& F943616C0930C2F4)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevCameraRel_EA643BA5E638DE33&))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_E56834982E77851D_OFFSET))(this, F943616C0930C2F4);
	}

	::System::Void E43C12B162BCB3E1(::MonoLookDevCameraRel_EF8F775C3FDA2430& E82293C0814051A5, ::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::MonoLookDevCameraRel_EF8F775C3FDA2430&, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_E43C12B162BCB3E1_OFFSET))(this, E82293C0814051A5, EB5670302F34D4B7);
	}

	::System::Void BC5FC01AE53FF41F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_BC5FC01AE53FF41F_OFFSET))(this);
	}

	::System::Void B0E43407842C9EC7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_B0E43407842C9EC7_OFFSET))(this);
	}

	::System::Void AEC5C567E26FEEE4(::System::Single EB5670302F34D4B7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_AEC5C567E26FEEE4_OFFSET))(this, EB5670302F34D4B7);
	}

	::System::Void FE0125CDE457C86A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_FE0125CDE457C86A_OFFSET))(this);
	}

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLOOKDEVCAMERAREL_F328E4D8818B1E12_OFFSET))(this);
	}
};
