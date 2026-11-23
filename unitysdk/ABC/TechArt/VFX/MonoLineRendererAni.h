#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/TechArt/VFX/MonoLineRendererAni_CullingMode.h"
#include "unitysdk/ABC/TechArt/VFX/MonoLineRendererAni_DynamicCenterUpdateMode.h"
#include "unitysdk/ABC/TechArt/VFX/MonoLineRendererAni_NoiseQualityMode.h"
#include "unitysdk/ABC/TechArt/VFX/MonoLineRendererAni_Vector3Curve.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"
#include "unitysdk/UnityEngine/EBE7541DAF0BA279.h"
#include "unitysdk/UnityEngine/EDAEC948E7B9415C.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define ABC_TECHART_VFX_MONOLINERENDERERANI_A0A54893FD186592_OFFSET UNITYSDK_OFFSET(0x28BB3B0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x28BAAA0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_A89E06288D06503A_1_OFFSET UNITYSDK_OFFSET(0x28B9590)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_A89E06288D06503A_OFFSET UNITYSDK_OFFSET(0x28B94A0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_A8E4175A2D10BBDD_OFFSET UNITYSDK_OFFSET(0x28BA460)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_A928367CAC6E5E12_OFFSET UNITYSDK_OFFSET(0x28BAC90)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_AA86E7156486B09A_OFFSET UNITYSDK_OFFSET(0x28B8EF0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_AB67529B4AA6ABD8_OFFSET UNITYSDK_OFFSET(0x28BFEA0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_AB6C7C425775C6F6_OFFSET UNITYSDK_OFFSET(0x28B9410)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_AC6E269CDD04F6B4_OFFSET UNITYSDK_OFFSET(0x28BCDC0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_AF5601E6FABC5270_OFFSET UNITYSDK_OFFSET(0x28BCE60)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_B36ADF545BC496EB_OFFSET UNITYSDK_OFFSET(0x28BA9D0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_B41466D65E509F96_OFFSET UNITYSDK_OFFSET(0x28B9AD0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_B43D6B4BB681110E_OFFSET UNITYSDK_OFFSET(0x28B8F40)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_B61D93A6C6F105B7_OFFSET UNITYSDK_OFFSET(0x28BCCE0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_B7851280E75810F6_OFFSET UNITYSDK_OFFSET(0x28BA2C0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_B7DA631154C7EAB4_OFFSET UNITYSDK_OFFSET(0x28BCF10)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_B82D5E90797F7439_1_OFFSET UNITYSDK_OFFSET(0x28BA4F0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_B82D5E90797F7439_OFFSET UNITYSDK_OFFSET(0x28BA580)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_BA60EF9798F1DEA6_1_OFFSET UNITYSDK_OFFSET(0x28BEEC0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_BA60EF9798F1DEA6_OFFSET UNITYSDK_OFFSET(0x28BD130)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_BC5FC01AE53FF41F_OFFSET UNITYSDK_OFFSET(0x28BBFB0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_BC9029C456624C46_OFFSET UNITYSDK_OFFSET(0x28B9790)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_BD09D14D50FAE9D1_OFFSET UNITYSDK_OFFSET(0x28B9EE0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_BDF9E249659DB9E1_OFFSET UNITYSDK_OFFSET(0x28B9820)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x28BAC20)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x28BF2D0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_E368DD8B2930E356_OFFSET UNITYSDK_OFFSET(0x28B9720)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_E3A3AA675F895B94_OFFSET UNITYSDK_OFFSET(0x28BCAB0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_E469F6A135508241_OFFSET UNITYSDK_OFFSET(0x28B8560)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_E90A09799D460D4E_OFFSET UNITYSDK_OFFSET(0x28BC460)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_EA86F6970E07302F_OFFSET UNITYSDK_OFFSET(0x28BA210)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_EA977AEDB19BCE05_OFFSET UNITYSDK_OFFSET(0x28BAE90)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_F008FF13AA7CCF14_OFFSET UNITYSDK_OFFSET(0x28B9040)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_F16A2DF5A94809E6_OFFSET UNITYSDK_OFFSET(0x28B9D00)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_F205D02BD17E4B71_OFFSET UNITYSDK_OFFSET(0x28B9FA0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_F41C63BB725F75D7_OFFSET UNITYSDK_OFFSET(0x28BFE20)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_F5129E7468651F44_OFFSET UNITYSDK_OFFSET(0x28BC000)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_F5E407B60CCCAC07_OFFSET UNITYSDK_OFFSET(0x28BA1A0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_F5F1AF270C1BC5A8_OFFSET UNITYSDK_OFFSET(0x28B82B0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_F6189A06AF838044_OFFSET UNITYSDK_OFFSET(0x28BA660)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_FB823472B41B007A_OFFSET UNITYSDK_OFFSET(0x28BA380)
#define ABC_TECHART_VFX_MONOLINERENDERERANI_FBCFAD41BB8C0C9F_OFFSET UNITYSDK_OFFSET(0x28BC0E0)
#define ABC_TECHART_VFX_MONOLINERENDERERANI__CCTOR_OFFSET UNITYSDK_OFFSET(0x28BF340)
#define ABC_TECHART_VFX_MONOLINERENDERERANI__CTOR_OFFSET UNITYSDK_OFFSET(0x28BF3F0)

namespace ABC::TechArt::VFX
{
	inline static constexpr unsigned int MonoLineRendererAni_TypeDefinitionIndex = 16272;

	class MonoLineRendererAni : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_A6E5BEA4B6929A73()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoLineRendererAni_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::UnityEngine::EBE7541DAF0BA279>** StaticGet_E3F9819C766BD8A9()
		{
			return (::Il2CppArray<::UnityEngine::EBE7541DAF0BA279>**)Il2CppClass::FromTypeDefinitionIndex(MonoLineRendererAni_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Int32* StaticGet_B7CF56F8A5A5C4F4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoLineRendererAni_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		::System::Int32 LineLength; // 0x20
		::System::Single FollowSpeed; // 0x24
		::UnityEngine::FAED0374422E783A* FollowCurve; // 0x28
		::UnityEngine::EDAEC948E7B9415C simulationSpace; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* customSimulationSpace; // 0x38
		::UnityEngine::Vector3 LineTailOffset; // 0x40
		::System::Single LineTailOffsetLength; // 0x4C
		::System::Boolean LineTailCurveOffsetEnable; // 0x50
		::System::Byte _padding1[0x7];
		::ABC::TechArt::VFX::MonoLineRendererAni_Vector3Curve LineTailOffsetCurve; // 0x58
		::System::Boolean LineTailCenterOffsetEnable; // 0x68
		::System::Byte _padding2[0x3];
		::System::Single LineTailCenterOffsetRatio; // 0x6C
		::System::Boolean UseRatioSym; // 0x70
		::System::Byte _padding3[0x3];
		::UnityEngine::Vector3 PointOffsetRandom; // 0x74
		::UnityEngine::Vector3 WaveOffset; // 0x80
		::System::Single WaveLength; // 0x8C
		::System::Single WaveSpeed; // 0x90
		::System::Boolean UseLifeTimeScaling; // 0x94
		::System::Byte _padding4[0x3];
		::System::Single LifeTime; // 0x98
		::System::Byte _padding5[0x4];
		::UnityEngine::FAED0374422E783A* ScalingPosCurve; // 0xA0
		::UnityEngine::FAED0374422E783A* ScalingWidthCurve; // 0xA8
		::System::Boolean UseTransScale; // 0xB0
		::System::Byte _padding6[0x3];
		::System::Single OriWidthMultiplier; // 0xB4
		::System::Boolean UseDynamicMode; // 0xB8
		::System::Byte _padding7[0x7];
		::UnityEngine::Transform* CustomDynamicCenter; // 0xC0
		::ABC::TechArt::VFX::MonoLineRendererAni_DynamicCenterUpdateMode CenterUpdateMode; // 0xC8
		::System::Single CenterForceScale; // 0xCC
		::System::Single DragForce; // 0xD0
		::System::Single DynamicForceBlend; // 0xD4
		::System::Boolean NoiseEnable; // 0xD8
		::System::Byte _padding8[0x3];
		::System::Single NoiseStrength; // 0xDC
		::System::Single NoiseFrequency; // 0xE0
		::ABC::TechArt::VFX::MonoLineRendererAni_NoiseQualityMode NoiseQuality; // 0xE4
		::System::Single ScrollSpeed; // 0xE8
		::System::Byte _padding9[0x4];
		::UnityEngine::FAED0374422E783A* NoiseRatioCurve; // 0xF0
		::System::Boolean _UseNoiseSetupRatioTime; // 0xF8
		::System::Byte _padding10[0x3];
		::System::Single _NoiseSetupRatioStartTime; // 0xFC
		::System::Single _NoiseSetupRatioEndTime; // 0x100
		::System::Single _NoiseWeight; // 0x104
		::System::UInt32 _fixedTickRate; // 0x108
		::System::Boolean _updatePointInLateTick; // 0x10C
		::System::Boolean BlinkSmooth; // 0x10D
		::System::Byte _padding11[0x2];
		::System::Single BlinkSmoothMaxRange; // 0x110
		::System::Single BlinkSmoottFollowSpeedPow; // 0x114
		::System::Single FlashCommitMinDistance; // 0x118
		::System::Boolean FlashCommitManual; // 0x11C
		::System::Boolean EditorPreview; // 0x11D
		::System::Boolean UpdateDistanceEnable; // 0x11E
		::System::Byte _padding12[0x1];
		::System::Single UpdateDistanceScale; // 0x120
		::System::Single UpdateBoundsSizeScale; // 0x124
		::ABC::TechArt::VFX::MonoLineRendererAni_CullingMode LineRenderCullingMode; // 0x128
		::System::Boolean VisableState; // 0x12C
		::System::Boolean UpdateState; // 0x12D
		::System::Byte _padding13[0x2];
		::System::Int32 TargetWaitCount; // 0x130
		::System::Int32 UpdateCount; // 0x134
		::UnityEngine::LineRenderer* B5F3B02F479028BB; // 0x138
		::Il2CppArray<::UnityEngine::Vector3>* B510E156FBC30A6C; // 0x140
		::Il2CppArray<::UnityEngine::Vector3>* F73F8366F4B5D9C4; // 0x148
		::System::Nullable_1<::UnityEngine::ACF10FE87B4C5617> FE14E6757F336CEC; // 0x150
		::System::Byte _padding14[0x3C];
		::System::Nullable_1<::UnityEngine::ACF10FE87B4C5617> A0A60E3E314B1840; // 0x194
		::System::Byte _padding15[0x3C];
		::System::Boolean BFA282CAA240C845; // 0x1D8
		::System::Boolean F22738F059EEB386; // 0x1D9
		::System::Boolean B4CE13BF8F08613C; // 0x1DA
		::System::Byte _padding16[0x1];
		::UnityEngine::Vector3 EBA35765D80B8163; // 0x1DC
		::UnityEngine::ACF10FE87B4C5617 BA191D6F449578C8; // 0x1E8
		::System::Single E4591B7A1A751511; // 0x228
		::System::Boolean AEC98BD6BE6B29AE; // 0x22C
		::System::Byte _padding17[0x3];
		::UnityEngine::Vector3 AAB96FC1E6C50C98; // 0x230
		::UnityEngine::Vector3 EA742B16C6CE5331; // 0x23C
		::UnityEngine::B3A7F113FE1DE383 A4A5CA81A1377E5C; // 0x248
		::System::Boolean E58CBF3C7E056674; // 0x260
		::System::Byte _padding18[0x3];
		::UnityEngine::Vector3 E07250AFAFDBA835; // 0x264
		::System::Single AAB4C7F12E4AD5D4; // 0x270
		::System::Single F9D57B2E6D54C845; // 0x274
		::System::Single B5C8079BAB87EB65; // 0x278
		::System::Single ABCFCA071FE268D8; // 0x27C
		::Il2CppArray<::System::Int32>* E547563E172749C9; // 0x280
		::Il2CppArray<::System::Single>* E37D02FF9C80997C; // 0x288
		::Il2CppArray<::UnityEngine::Vector2>* ED913F002382A888; // 0x290
		::Il2CppArray<::UnityEngine::Vector3>* EF87F4EBC6B2E292; // 0x298
		::UnityEngine::Vector2 FFF6C0A90891A919; // 0x2A0
		::UnityEngine::Vector2 BC64EE6A4DB7C359; // 0x2A8
		::UnityEngine::Vector3 EAB20257340311BF; // 0x2B0
		::UnityEngine::Vector2 F7A235D0A40A741A; // 0x2BC
		::UnityEngine::Vector2 E4BD0DD156446F31; // 0x2C4
		::UnityEngine::Vector2 AA50DA8A6C286AA7; // 0x2CC
		::UnityEngine::Vector2 AC72858F23315B9E; // 0x2D4
		::UnityEngine::Vector2 FF8FB2628C9DB41A; // 0x2DC
		::UnityEngine::Vector2 BA858F9CDD2EA3E4; // 0x2E4
		::UnityEngine::Vector2 FF17806721A4F64C; // 0x2EC
		::UnityEngine::Vector2 BCB41BEE13FFEEFF; // 0x2F4

		::System::Void FBCFAD41BB8C0C9F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_FBCFAD41BB8C0C9F_OFFSET))(this);
		}

		::UnityEngine::Vector3 FB823472B41B007A(::System::Int32 A4076D345D587178)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_FB823472B41B007A_OFFSET))(this, A4076D345D587178);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI__CTOR_OFFSET))(this);
		}

		::System::Boolean B36ADF545BC496EB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_B36ADF545BC496EB_OFFSET))(this);
		}

		::System::Single AF5601E6FABC5270(::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_AF5601E6FABC5270_OFFSET))(this, BBCFEC7DB309E927);
		}

		::Il2CppArray<::UnityEngine::Vector3>* E469F6A135508241(::Il2CppArray<::UnityEngine::Vector3>* B567EA8BF7438290)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_E469F6A135508241_OFFSET))(this, B567EA8BF7438290);
		}

		::System::Void E90A09799D460D4E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_E90A09799D460D4E_OFFSET))(this);
		}

		::System::Void B41466D65E509F96(::UnityEngine::Vector3 A35C2904B1F00BB7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_B41466D65E509F96_OFFSET))(this, A35C2904B1F00BB7);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Boolean F205D02BD17E4B71()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_F205D02BD17E4B71_OFFSET))(this);
		}

		::System::Void E368DD8B2930E356()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_E368DD8B2930E356_OFFSET))(this);
		}

		::UnityEngine::Vector2 EA977AEDB19BCE05(::UnityEngine::Vector3 FF9A37DE513AC35B, ::System::Single EA1DDFCB51209837)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_EA977AEDB19BCE05_OFFSET))(this, FF9A37DE513AC35B, EA1DDFCB51209837);
		}

		::System::Void BC9029C456624C46()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_BC9029C456624C46_OFFSET))(this);
		}

		::UnityEngine::Vector2 B7851280E75810F6(::System::Int32 A4076D345D587178)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_B7851280E75810F6_OFFSET))(this, A4076D345D587178);
		}

		::System::Void AB6C7C425775C6F6(::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_AB6C7C425775C6F6_OFFSET))(this, EB5670302F34D4B7);
		}

		::UnityEngine::Vector2 B82D5E90797F7439(::UnityEngine::Vector2 B8A196AEAF73E28B, ::System::Single B35BBBE7E39341A2, ::UnityEngine::Vector2 AE40CAA6BBFEAD2C)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_B82D5E90797F7439_OFFSET))(this, B8A196AEAF73E28B, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
		}

		::UnityEngine::Vector2 F5F1AF270C1BC5A8(::UnityEngine::Vector3 FF9A37DE513AC35B, ::System::Single F1EE0D28C3920A81, ::System::Int32 A2903AB2B250CFB5, ::System::Single F32059BD67833C06, ::System::Single F075D376E34EACF1, ::System::Boolean E6E4A17B4B7A10D1, ::System::Int32 F98C2B2DECF11025)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Int32, ::System::Single, ::System::Single, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_F5F1AF270C1BC5A8_OFFSET))(this, FF9A37DE513AC35B, F1EE0D28C3920A81, A2903AB2B250CFB5, F32059BD67833C06, F075D376E34EACF1, E6E4A17B4B7A10D1, F98C2B2DECF11025);
		}

		::System::Single BD09D14D50FAE9D1(::System::Boolean E1862798D1796193, ::System::Single A3095BA0CDBD0D38, ::System::Single B5BE711EEC204803, ::System::Single A05F840C1B0AB2C1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_BD09D14D50FAE9D1_OFFSET))(this, E1862798D1796193, A3095BA0CDBD0D38, B5BE711EEC204803, A05F840C1B0AB2C1);
		}

		::System::Void B61D93A6C6F105B7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_B61D93A6C6F105B7_OFFSET))(this);
		}

		::System::Void F008FF13AA7CCF14()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_F008FF13AA7CCF14_OFFSET))(this);
		}

		::System::Single EA86F6970E07302F(::System::Int32 A4076D345D587178)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_EA86F6970E07302F_OFFSET))(this, A4076D345D587178);
		}

		::System::Void E3A3AA675F895B94()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_E3A3AA675F895B94_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_E02954280801633F_OFFSET))(this);
		}

		::System::Void AB67529B4AA6ABD8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_AB67529B4AA6ABD8_OFFSET))(this);
		}

		::System::Void F5E407B60CCCAC07()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_F5E407B60CCCAC07_OFFSET))(this);
		}

		::System::Boolean F6189A06AF838044()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_F6189A06AF838044_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::Void BDF9E249659DB9E1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_BDF9E249659DB9E1_OFFSET))(this);
		}

		::System::Single B82D5E90797F7439_1(::System::Single B35BBBE7E39341A2, ::System::Single AE40CAA6BBFEAD2C, ::System::Single A97F5B807CC19082)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_B82D5E90797F7439_1_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C, A97F5B807CC19082);
		}

		::UnityEngine::Vector2 A928367CAC6E5E12(::UnityEngine::Vector3 FF9A37DE513AC35B, ::System::Single EA1DDFCB51209837)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_A928367CAC6E5E12_OFFSET))(this, FF9A37DE513AC35B, EA1DDFCB51209837);
		}

		::UnityEngine::Vector3 B43D6B4BB681110E(::UnityEngine::Vector3 FF9A37DE513AC35B, ::System::Int32 F98C2B2DECF11025)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_B43D6B4BB681110E_OFFSET))(this, FF9A37DE513AC35B, F98C2B2DECF11025);
		}

		::System::Boolean B7DA631154C7EAB4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_B7DA631154C7EAB4_OFFSET))(this);
		}

		::System::Void BC5FC01AE53FF41F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_BC5FC01AE53FF41F_OFFSET))(this);
		}

		::System::Single F16A2DF5A94809E6()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_F16A2DF5A94809E6_OFFSET))(this);
		}

		::System::Void BA60EF9798F1DEA6(::System::Single EB5670302F34D4B7, ::System::Single E63D819AEF94692E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_BA60EF9798F1DEA6_OFFSET))(this, EB5670302F34D4B7, E63D819AEF94692E);
		}

		::System::Void F5129E7468651F44()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_F5129E7468651F44_OFFSET))(this);
		}

		::UnityEngine::Vector2 A0A54893FD186592(::UnityEngine::Vector3 FF9A37DE513AC35B, ::System::Single EA1DDFCB51209837)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_A0A54893FD186592_OFFSET))(this, FF9A37DE513AC35B, EA1DDFCB51209837);
		}

		::System::Int32 A8E4175A2D10BBDD(::System::Int32 A4076D345D587178)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_A8E4175A2D10BBDD_OFFSET))(this, A4076D345D587178);
		}

		::System::Single A89E06288D06503A(::UnityEngine::Vector2 F591F9C7707AAEEB, ::System::Single BB8C609F76620E45, ::System::Single A0A0D02932F12CFD)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_A89E06288D06503A_OFFSET))(this, F591F9C7707AAEEB, BB8C609F76620E45, A0A0D02932F12CFD);
		}

		::System::Single A89E06288D06503A_1(::UnityEngine::Vector3 F591F9C7707AAEEB, ::System::Single BB8C609F76620E45, ::System::Single A0A0D02932F12CFD, ::System::Single EFD6B3862CDDD176)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_A89E06288D06503A_1_OFFSET))(this, F591F9C7707AAEEB, BB8C609F76620E45, A0A0D02932F12CFD, EFD6B3862CDDD176);
		}

		::System::Void AA86E7156486B09A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_AA86E7156486B09A_OFFSET))(this);
		}

		::System::Void BA60EF9798F1DEA6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_BA60EF9798F1DEA6_1_OFFSET))(this);
		}

		::System::Single AC6E269CDD04F6B4(::System::Single BBCFEC7DB309E927)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_AC6E269CDD04F6B4_OFFSET))(this, BBCFEC7DB309E927);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI__CCTOR_OFFSET))();
		}

		::System::Single F41C63BB725F75D7()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_VFX_MONOLINERENDERERANI_F41C63BB725F75D7_OFFSET))(this);
		}
	};
}
