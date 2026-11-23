#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/BFE47AD60EB94A25/FB886088C605BA42.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/Unity/Mathematics/float3.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Splines { class KnotLinkCollection; }
namespace UnityEngine::Splines { class Spline; }
template <typename T> class FAC5EDF6DB9C4EFE;

#define UNITYENGINE_SPLINES_SPLINECONTAINER_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x4048C70)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_A2CB3FCA0D733A13_OFFSET UNITYSDK_OFFSET(0x40494B0)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_A3E9E780D3B185EC_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_A6C83FA91F754ABA_OFFSET UNITYSDK_OFFSET(0x4049690)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_A7F3501B46786D6E_1_OFFSET UNITYSDK_OFFSET(0x4048030)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_A7F3501B46786D6E_OFFSET UNITYSDK_OFFSET(0x4047F20)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_A91A56F99DB0A18D_OFFSET UNITYSDK_OFFSET(0x4049590)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x4048A50)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_AC27EBD916ADAACF_OFFSET UNITYSDK_OFFSET(0x4048880)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_AEADE9A03D7EC78D_1_OFFSET UNITYSDK_OFFSET(0x4048140)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_AEADE9A03D7EC78D_OFFSET UNITYSDK_OFFSET(0x40481F0)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_B1E82BEF0496D678_OFFSET UNITYSDK_OFFSET(0x4049650)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_B776F2B066238FAD_1_OFFSET UNITYSDK_OFFSET(0x4048530)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_B776F2B066238FAD_2_OFFSET UNITYSDK_OFFSET(0x40485E0)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_B846D409C37E60D9_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_BBBB920368A695BA_OFFSET UNITYSDK_OFFSET(0x4049830)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_BD23812046A2C77C_OFFSET UNITYSDK_OFFSET(0x4049760)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x4048DE0)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_E0153A55E6E762A7_OFFSET UNITYSDK_OFFSET(0x40487D0)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_E05DEEA134E1059B_OFFSET UNITYSDK_OFFSET(0x4048F00)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_E1AAF454D28E0F80_OFFSET UNITYSDK_OFFSET(0x4049300)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_E83DB193CF3E02F3_OFFSET UNITYSDK_OFFSET(0x4049A80)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_E8B9C72E4544A2AB_OFFSET UNITYSDK_OFFSET(0x4048E70)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_E9FEDAAE9C1E79D9_OFFSET UNITYSDK_OFFSET(0x40499F0)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_EF4DCEF017D7A01C_OFFSET UNITYSDK_OFFSET(0x40496D0)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_F549F061FF6DFE3F_1_OFFSET UNITYSDK_OFFSET(0x4048330)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_F549F061FF6DFE3F_2_OFFSET UNITYSDK_OFFSET(0x4048290)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_F54CE2E0BC001FA2_OFFSET UNITYSDK_OFFSET(0x4049910)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_F5BA13F0B9150A52_2_OFFSET UNITYSDK_OFFSET(0x4048680)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_F5BA13F0B9150A52_OFFSET UNITYSDK_OFFSET(0x4048730)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_F92EC12D1C888CDF_OFFSET UNITYSDK_OFFSET(0x40493D0)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_FB2231F6CCCC235D_2_OFFSET UNITYSDK_OFFSET(0x40483E0)
#define UNITYENGINE_SPLINES_SPLINECONTAINER_FB2231F6CCCC235D_OFFSET UNITYSDK_OFFSET(0x4048490)
#define UNITYENGINE_SPLINES_SPLINECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x40490D0)

namespace UnityEngine::Splines
{
	inline static constexpr unsigned int SplineContainer_TypeDefinitionIndex = 20662;

	class SplineContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action_2<::UnityEngine::Splines::SplineContainer*, ::System::Int32>** StaticGet_EFB076B6D0563A35()
		{
			return (::System::Action_2<::UnityEngine::Splines::SplineContainer*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SplineContainer_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_2<::UnityEngine::Splines::SplineContainer*, ::System::Int32>** StaticGet_F92FB615AEA55998()
		{
			return (::System::Action_2<::UnityEngine::Splines::SplineContainer*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SplineContainer_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Action_3<::UnityEngine::Splines::SplineContainer*, ::System::Int32, ::System::Int32>** StaticGet_EF27818A5B847035()
		{
			return (::System::Action_3<::UnityEngine::Splines::SplineContainer*, ::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SplineContainer_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		::UnityEngine::Splines::Spline* m_Spline; // 0x20
		::Il2CppArray<::UnityEngine::Splines::Spline*>* m_Splines; // 0x28
		::UnityEngine::Splines::KnotLinkCollection* m_Knots; // 0x30
		::System::Collections::Generic::List_1<::B07850EA97DBB75A<::System::Int32, ::System::Int32>>* B7243420F2BCE0F6; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* E12243159931C47B; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* A79B63897389C999; // 0x48
		::System::String* ConvertDescription; // 0x50
		::System::Action* CustomEditorGUI; // 0x58
		::System::Action* ConvertAction; // 0x60
		::Il2CppArray<::System::String*>* CustomDataKeys; // 0x68
		::System::Single AdaptiveSampleRatio; // 0x70
		::System::Single MinSampleDistance; // 0x74
		::FAC5EDF6DB9C4EFE<::UnityEngine::Splines::Spline*>* E026937BE30651FF; // 0x78

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_A28D6A0C3E793E7D_OFFSET))(this);
		}

		::System::Void E8B9C72E4544A2AB(::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::Spline*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_E8B9C72E4544A2AB_OFFSET))(this, F03E0BDCBABB08A2, B48C66E5FB2449C6);
		}

		static ::System::Void F92EC12D1C888CDF(::System::Action_2<::UnityEngine::Splines::SplineContainer*, ::System::Int32>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::Splines::SplineContainer*, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_F92EC12D1C888CDF_OFFSET))(E937D4885DAA1AE8);
		}

		static ::System::Void F54CE2E0BC001FA2(::System::Action_3<::UnityEngine::Splines::SplineContainer*, ::System::Int32, ::System::Int32>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Action_3<::UnityEngine::Splines::SplineContainer*, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_F54CE2E0BC001FA2_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Boolean F5BA13F0B9150A52(::System::Int32 FF3E4C007EB176F1, ::System::Single BBCFEC7DB309E927, ::Unity::Mathematics::float3& EB211B01816ACA79, ::Unity::Mathematics::float3& F142F71C449A09B4, ::Unity::Mathematics::float3& EB5B00BC81AB2256)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::Unity::Mathematics::float3&, ::Unity::Mathematics::float3&, ::Unity::Mathematics::float3&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_F5BA13F0B9150A52_OFFSET))(this, FF3E4C007EB176F1, BBCFEC7DB309E927, EB211B01816ACA79, F142F71C449A09B4, EB5B00BC81AB2256);
		}

		::Unity::Mathematics::float3 AEADE9A03D7EC78D(::System::Single BBCFEC7DB309E927)
		{
			return ((::Unity::Mathematics::float3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_AEADE9A03D7EC78D_OFFSET))(this, BBCFEC7DB309E927);
		}

		::UnityEngine::Splines::Spline* B1E82BEF0496D678(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::UnityEngine::Splines::Spline*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_B1E82BEF0496D678_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void B846D409C37E60D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_B846D409C37E60D9_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER__CTOR_OFFSET))(this);
		}

		::Unity::Mathematics::float3 FB2231F6CCCC235D(::System::Single BBCFEC7DB309E927)
		{
			return ((::Unity::Mathematics::float3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_FB2231F6CCCC235D_OFFSET))(this, BBCFEC7DB309E927);
		}

		::Unity::Mathematics::float3 F549F061FF6DFE3F_1(::System::Int32 FF3E4C007EB176F1, ::System::Single BBCFEC7DB309E927)
		{
			return ((::Unity::Mathematics::float3(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_F549F061FF6DFE3F_1_OFFSET))(this, FF3E4C007EB176F1, BBCFEC7DB309E927);
		}

		::System::Single A7F3501B46786D6E(::System::Int32 FF3E4C007EB176F1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_A7F3501B46786D6E_OFFSET))(this, FF3E4C007EB176F1);
		}

		static ::System::Void A2CB3FCA0D733A13(::System::Action_3<::UnityEngine::Splines::SplineContainer*, ::System::Int32, ::System::Int32>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Action_3<::UnityEngine::Splines::SplineContainer*, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_A2CB3FCA0D733A13_OFFSET))(E937D4885DAA1AE8);
		}

		::Unity::Mathematics::float3 B776F2B066238FAD_1(::System::Int32 FF3E4C007EB176F1, ::System::Single BBCFEC7DB309E927)
		{
			return ((::Unity::Mathematics::float3(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_B776F2B066238FAD_1_OFFSET))(this, FF3E4C007EB176F1, BBCFEC7DB309E927);
		}

		static ::System::Void E1AAF454D28E0F80(::System::Action_2<::UnityEngine::Splines::SplineContainer*, ::System::Int32>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::Splines::SplineContainer*, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_E1AAF454D28E0F80_OFFSET))(E937D4885DAA1AE8);
		}

		static ::System::Void BBBB920368A695BA(::System::Action_2<::UnityEngine::Splines::SplineContainer*, ::System::Int32>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::Splines::SplineContainer*, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_BBBB920368A695BA_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_BF13C91AD80643D2_OFFSET))(this);
		}

		static ::System::Void BD23812046A2C77C(::System::Action_2<::UnityEngine::Splines::SplineContainer*, ::System::Int32>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::Splines::SplineContainer*, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_BD23812046A2C77C_OFFSET))(E937D4885DAA1AE8);
		}

		::UnityEngine::Splines::Spline* A6C83FA91F754ABA()
		{
			return ((::UnityEngine::Splines::Spline*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_A6C83FA91F754ABA_OFFSET))(this);
		}

		::Unity::Mathematics::float3 F549F061FF6DFE3F_2(::System::Single BBCFEC7DB309E927)
		{
			return ((::Unity::Mathematics::float3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_F549F061FF6DFE3F_2_OFFSET))(this, BBCFEC7DB309E927);
		}

		::Unity::Mathematics::float3 AEADE9A03D7EC78D_1(::System::Int32 FF3E4C007EB176F1, ::System::Single BBCFEC7DB309E927)
		{
			return ((::Unity::Mathematics::float3(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_AEADE9A03D7EC78D_1_OFFSET))(this, FF3E4C007EB176F1, BBCFEC7DB309E927);
		}

		::System::Void E83DB193CF3E02F3(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_E83DB193CF3E02F3_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void AC27EBD916ADAACF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_AC27EBD916ADAACF_OFFSET))(this);
		}

		::UnityEngine::Splines::KnotLinkCollection* A3E9E780D3B185EC()
		{
			return ((::UnityEngine::Splines::KnotLinkCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_A3E9E780D3B185EC_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* EF4DCEF017D7A01C()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_EF4DCEF017D7A01C_OFFSET))(this);
		}

		::Unity::Mathematics::float3 B776F2B066238FAD_2(::System::Single BBCFEC7DB309E927)
		{
			return ((::Unity::Mathematics::float3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_B776F2B066238FAD_2_OFFSET))(this, BBCFEC7DB309E927);
		}

		::System::Void E9FEDAAE9C1E79D9(::UnityEngine::Splines::Spline* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::Spline*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_E9FEDAAE9C1E79D9_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_AB36E0EE549986E5_OFFSET))(this);
		}

		static ::System::Int32 E0153A55E6E762A7(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* BD8273AB04C4B760, ::UnityEngine::Splines::Spline* FDB49274D73989B7)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*, ::UnityEngine::Splines::Spline*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_E0153A55E6E762A7_OFFSET))(BD8273AB04C4B760, FDB49274D73989B7);
		}

		::Unity::Mathematics::float3 FB2231F6CCCC235D_2(::System::Int32 FF3E4C007EB176F1, ::System::Single BBCFEC7DB309E927)
		{
			return ((::Unity::Mathematics::float3(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_FB2231F6CCCC235D_2_OFFSET))(this, FF3E4C007EB176F1, BBCFEC7DB309E927);
		}

		::System::Void E05DEEA134E1059B(::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::System::Int32 B48C66E5FB2449C6, ::BFE47AD60EB94A25::FB886088C605BA42 A664C581902249C1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::Spline*, ::System::Int32, ::BFE47AD60EB94A25::FB886088C605BA42))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_E05DEEA134E1059B_OFFSET))(this, F03E0BDCBABB08A2, B48C66E5FB2449C6, A664C581902249C1);
		}

		::System::Single A7F3501B46786D6E_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_A7F3501B46786D6E_1_OFFSET))(this);
		}

		::System::Boolean F5BA13F0B9150A52_2(::System::Single BBCFEC7DB309E927, ::Unity::Mathematics::float3& EB211B01816ACA79, ::Unity::Mathematics::float3& F142F71C449A09B4, ::Unity::Mathematics::float3& EB5B00BC81AB2256)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Unity::Mathematics::float3&, ::Unity::Mathematics::float3&, ::Unity::Mathematics::float3&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_F5BA13F0B9150A52_2_OFFSET))(this, BBCFEC7DB309E927, EB211B01816ACA79, F142F71C449A09B4, EB5B00BC81AB2256);
		}

		::System::Boolean A91A56F99DB0A18D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINECONTAINER_A91A56F99DB0A18D_OFFSET))(this);
		}
	};
}
