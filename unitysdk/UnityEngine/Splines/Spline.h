#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/BFE47AD60EB94A25/B4CA28CF40398BB6.h"
#include "unitysdk/BFE47AD60EB94A25/E8EE2A4E4654F7F8.h"
#include "unitysdk/BFE47AD60EB94A25/FB886088C605BA42.h"
#include "unitysdk/BFE47AD60EB94A25/FF90BDB4EE8EAF23.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/Unity/Mathematics/float4.h"
#include "unitysdk/UnityEngine/Splines/BezierKnot.h"
#include "unitysdk/AC92C33EC7B28EC8.h"
#include "unitysdk/UnityEngine/Splines/DistanceToInterpolation.h"
#include "unitysdk/UnityEngine/Splines/SplineRange.h"

class A2A303E2430FA6AA;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Splines { class Spline_SplineSegment; }
namespace UnityEngine::Splines { template <typename T> class SplineDataDictionary_1; }
namespace UnityEngine::Splines { template <typename T> class SplineData_1; }
template <typename T> class E80BECEC45EE376D;
template <typename T> class F875E7A8F1781006;

#define UNITYENGINE_SPLINES_SPLINE_ADD_1_OFFSET UNITYSDK_OFFSET(0x404BED0)
#define UNITYENGINE_SPLINES_SPLINE_ADD_CHANGED_OFFSET UNITYSDK_OFFSET(0x4050610)
#define UNITYENGINE_SPLINES_SPLINE_ADD_OFFSET UNITYSDK_OFFSET(0x404BE30)
#define UNITYENGINE_SPLINES_SPLINE_APPLYTANGENTMODENONOTIFY_OFFSET UNITYSDK_OFFSET(0x404BF70)
#define UNITYENGINE_SPLINES_SPLINE_CACHEKNOTOPERATIONCURVES_OFFSET UNITYSDK_OFFSET(0x404C3D0)
#define UNITYENGINE_SPLINES_SPLINE_CLEANMESH_OFFSET UNITYSDK_OFFSET(0x404C4A0)
#define UNITYENGINE_SPLINES_SPLINE_CLEARPOSITIONCACHE_OFFSET UNITYSDK_OFFSET(0x404C4F0)
#define UNITYENGINE_SPLINES_SPLINE_CLEAR_OFFSET UNITYSDK_OFFSET(0x404C550)
#define UNITYENGINE_SPLINES_SPLINE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x404C5E0)
#define UNITYENGINE_SPLINES_SPLINE_COPYTO_OFFSET UNITYSDK_OFFSET(0x404C660)
#define UNITYENGINE_SPLINES_SPLINE_CREATESEGMENT_OFFSET UNITYSDK_OFFSET(0x404C6D0)
#define UNITYENGINE_SPLINES_SPLINE_ENSUREMETADATAVALID_OFFSET UNITYSDK_OFFSET(0x404C760)
#define UNITYENGINE_SPLINES_SPLINE_GETCURVEDISTANCELUT_OFFSET UNITYSDK_OFFSET(0x404C8C0)
#define UNITYENGINE_SPLINES_SPLINE_GETCURVEINTERPOLATION_OFFSET UNITYSDK_OFFSET(0x404CB00)
#define UNITYENGINE_SPLINES_SPLINE_GETCURVELENGTH_OFFSET UNITYSDK_OFFSET(0x404CB90)
#define UNITYENGINE_SPLINES_SPLINE_GETCURVEUPVECTOR_OFFSET UNITYSDK_OFFSET(0x404CD60)
#define UNITYENGINE_SPLINES_SPLINE_GETCURVE_OFFSET UNITYSDK_OFFSET(0x404D090)
#define UNITYENGINE_SPLINES_SPLINE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x404D200)
#define UNITYENGINE_SPLINES_SPLINE_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x404D2B0)
#define UNITYENGINE_SPLINES_SPLINE_GETORCREATEINTDATA_OFFSET UNITYSDK_OFFSET(0x404D390)
#define UNITYENGINE_SPLINES_SPLINE_GETTANGENTMODE_OFFSET UNITYSDK_OFFSET(0x404D4D0)
#define UNITYENGINE_SPLINES_SPLINE_GETTATKNOTINDEX_OFFSET UNITYSDK_OFFSET(0x404D3F0)
#define UNITYENGINE_SPLINES_SPLINE_GET_CLOSED_OFFSET UNITYSDK_OFFSET(0x1F63570)
#define UNITYENGINE_SPLINES_SPLINE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x4050710)
#define UNITYENGINE_SPLINES_SPLINE_GET_EMBEDDEDSPLINEDATA_OFFSET UNITYSDK_OFFSET(0x40507E0)
#define UNITYENGINE_SPLINES_SPLINE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x16A4160)
#define UNITYENGINE_SPLINES_SPLINE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x4050750)
#define UNITYENGINE_SPLINES_SPLINE_GET_KNOTS_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define UNITYENGINE_SPLINES_SPLINE_INDEXOF_OFFSET UNITYSDK_OFFSET(0x404D540)
#define UNITYENGINE_SPLINES_SPLINE_INSERT_1_OFFSET UNITYSDK_OFFSET(0x404D7D0)
#define UNITYENGINE_SPLINES_SPLINE_INSERT_2_OFFSET UNITYSDK_OFFSET(0x404D5C0)
#define UNITYENGINE_SPLINES_SPLINE_INSERT_OFFSET UNITYSDK_OFFSET(0x404D780)
#define UNITYENGINE_SPLINES_SPLINE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x404D830)
#define UNITYENGINE_SPLINES_SPLINE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x404D9A0)
#define UNITYENGINE_SPLINES_SPLINE_ONSPLINECHANGED_OFFSET UNITYSDK_OFFSET(0x2F95820)
#define UNITYENGINE_SPLINES_SPLINE_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x404DA20)
#define UNITYENGINE_SPLINES_SPLINE_REMOVEINTDATA_OFFSET UNITYSDK_OFFSET(0x404DB80)
#define UNITYENGINE_SPLINES_SPLINE_REMOVE_CHANGED_OFFSET UNITYSDK_OFFSET(0x4050860)
#define UNITYENGINE_SPLINES_SPLINE_REMOVE_OFFSET UNITYSDK_OFFSET(0x404DBE0)
#define UNITYENGINE_SPLINES_SPLINE_SETCACHEDEVALUATEPOSITION_OFFSET UNITYSDK_OFFSET(0x404DDB0)
#define UNITYENGINE_SPLINES_SPLINE_SETDIRTYNONOTIFY_OFFSET UNITYSDK_OFFSET(0x404DE30)
#define UNITYENGINE_SPLINES_SPLINE_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x404DEE0)
#define UNITYENGINE_SPLINES_SPLINE_SETKNOTNONOTIFY_OFFSET UNITYSDK_OFFSET(0x404E2B0)
#define UNITYENGINE_SPLINES_SPLINE_SETKNOT_OFFSET UNITYSDK_OFFSET(0x404E410)
#define UNITYENGINE_SPLINES_SPLINE_SETTANGENTMODENONOTIFY_OFFSET UNITYSDK_OFFSET(0x404E5A0)
#define UNITYENGINE_SPLINES_SPLINE_SETTANGENTMODE_1_OFFSET UNITYSDK_OFFSET(0x404E8E0)
#define UNITYENGINE_SPLINES_SPLINE_SETTANGENTMODE_OFFSET UNITYSDK_OFFSET(0x404E850)
#define UNITYENGINE_SPLINES_SPLINE_SET_ISMESHDIRTY_OFFSET UNITYSDK_OFFSET(0x1F63580)
#define UNITYENGINE_SPLINES_SPLINE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x4050960)
#define UNITYENGINE_SPLINES_SPLINE_SYNCKNOTTOSPLITPOINT_OFFSET UNITYSDK_OFFSET(0x404EDE0)
#define UNITYENGINE_SPLINES_SPLINE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x404F4E0)
#define UNITYENGINE_SPLINES_SPLINE_TRYGETCACHEDEVALUATEPOSITION_OFFSET UNITYSDK_OFFSET(0x404F590)
#define UNITYENGINE_SPLINES_SPLINE_UPDATESEGMENTST_OFFSET UNITYSDK_OFFSET(0x404F600)
#define UNITYENGINE_SPLINES_SPLINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x404F8B0)
#define UNITYENGINE_SPLINES_SPLINE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x404F9D0)
#define UNITYENGINE_SPLINES_SPLINE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x404F950)
#define UNITYENGINE_SPLINES_SPLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x404FDC0)

namespace UnityEngine::Splines
{
	inline static constexpr unsigned int Spline_TypeDefinitionIndex = 20659;

	class Spline : public ::System::Object
	{
	public:
		static ::System::Action_3<::UnityEngine::Splines::Spline*, ::System::Int32, ::BFE47AD60EB94A25::FB886088C605BA42>** StaticGet_Changed()
		{
			return (::System::Action_3<::UnityEngine::Splines::Spline*, ::System::Int32, ::BFE47AD60EB94A25::FB886088C605BA42>**)Il2CppClass::FromTypeDefinitionIndex(Spline_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Single, ::Unity::Mathematics::float3>* k_PositionCache; // 0x10
		::BFE47AD60EB94A25::E8EE2A4E4654F7F8 m_EditModeType; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Splines::BezierKnot>* m_Knots; // 0x20
		::System::Single m_Length; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::Mesh* m_Mesh; // 0x30
		::System::Boolean m_IsMeshDirty; // 0x38
		::System::Byte _padding2[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* m_MetaData; // 0x40
		::System::Boolean m_Closed; // 0x48
		::System::Byte _padding3[0x7];
		::System::String* m_EditingCustomDataKey; // 0x50
		::UnityEngine::Splines::SplineDataDictionary_1<::System::Int32>* m_IntData; // 0x58
		::UnityEngine::Splines::SplineDataDictionary_1<::System::Single>* m_FloatData; // 0x60
		::UnityEngine::Splines::SplineDataDictionary_1<::Unity::Mathematics::float4>* m_Float4Data; // 0x68
		::UnityEngine::Splines::SplineDataDictionary_1<::UnityEngine::Object*>* m_ObjectData; // 0x70
		::System::Action* changed; // 0x78
		::B07850EA97DBB75A<::System::Single, ::System::Single> m_LastKnotChangeCurveLengths; // 0x80
		::System::Collections::Generic::List_1<::System::Object*>* m_Segments; // 0x88
		::System::Collections::Generic::List_1<::System::Int32>* m_SplitPointList; // 0x90
		::E80BECEC45EE376D<::System::Int32>* m_SplitPoints; // 0x98

		static ::System::Void remove_Changed(::System::Action_3<::UnityEngine::Splines::Spline*, ::System::Int32, ::BFE47AD60EB94A25::FB886088C605BA42>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Action_3<::UnityEngine::Splines::Spline*, ::System::Int32, ::BFE47AD60EB94A25::FB886088C605BA42>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_REMOVE_CHANGED_OFFSET))(E937D4885DAA1AE8);
		}

		::UnityEngine::Splines::BezierKnot get_Item(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::UnityEngine::Splines::BezierKnot(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GET_ITEM_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void SetKnotNoNotify(::System::Int32 B48C66E5FB2449C6, ::UnityEngine::Splines::BezierKnot E937D4885DAA1AE8, ::BFE47AD60EB94A25::B4CA28CF40398BB6 E4597A15448B3252)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Splines::BezierKnot, ::BFE47AD60EB94A25::B4CA28CF40398BB6))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SETKNOTNONOTIFY_OFFSET))(this, B48C66E5FB2449C6, E937D4885DAA1AE8, E4597A15448B3252);
		}

		::System::Void SetDirtyNoNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SETDIRTYNONOTIFY_OFFSET))(this);
		}

		::System::Void Insert(::System::Int32 B48C66E5FB2449C6, ::UnityEngine::Splines::BezierKnot BB4DB3113013548E, ::BFE47AD60EB94A25::FF90BDB4EE8EAF23 A84D57260767D5BD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Splines::BezierKnot, ::BFE47AD60EB94A25::FF90BDB4EE8EAF23))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_INSERT_OFFSET))(this, B48C66E5FB2449C6, BB4DB3113013548E, A84D57260767D5BD);
		}

		::System::Int32 IndexOf(::UnityEngine::Splines::BezierKnot EC35F88C87A83BEB)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Splines::BezierKnot))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_INDEXOF_OFFSET))(this, EC35F88C87A83BEB);
		}

		::UnityEngine::Splines::SplineData_1<::System::Int32>* GetOrCreateIntData(::System::String* A5C299C395D3E1B2)
		{
			return ((::UnityEngine::Splines::SplineData_1<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GETORCREATEINTDATA_OFFSET))(this, A5C299C395D3E1B2);
		}

		::System::Void ApplyTangentModeNoNotify(::System::Int32 B48C66E5FB2449C6, ::BFE47AD60EB94A25::B4CA28CF40398BB6 E4597A15448B3252)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BFE47AD60EB94A25::B4CA28CF40398BB6))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_APPLYTANGENTMODENONOTIFY_OFFSET))(this, B48C66E5FB2449C6, E4597A15448B3252);
		}

		::System::Void CacheKnotOperationCurves(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_CACHEKNOTOPERATIONCURVES_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void OnSplineChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_ONSPLINECHANGED_OFFSET))(this);
		}

		::System::Single GetCurveInterpolation(::System::Int32 F5CC1918922D7ECD, ::System::Single FCC90190F3E48885)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GETCURVEINTERPOLATION_OFFSET))(this, F5CC1918922D7ECD, FCC90190F3E48885);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::AC92C33EC7B28EC8 GetCurve(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::AC92C33EC7B28EC8(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GETCURVE_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void CopyTo(::Il2CppArray<::UnityEngine::Splines::BezierKnot>* EDF8D5B13A3EE433, ::System::Int32 A85E013ED48C7629)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Splines::BezierKnot>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_COPYTO_OFFSET))(this, EDF8D5B13A3EE433, A85E013ED48C7629);
		}

		::System::Void SetTangentMode(::BFE47AD60EB94A25::FF90BDB4EE8EAF23 A84D57260767D5BD)
		{
			return ((::System::Void(*)(::PVOID, ::BFE47AD60EB94A25::FF90BDB4EE8EAF23))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SETTANGENTMODE_OFFSET))(this, A84D57260767D5BD);
		}

		::System::Single GetLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GETLENGTH_OFFSET))(this);
		}

		::System::Void UpdateSegmentsT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_UPDATESEGMENTST_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE__CCTOR_OFFSET))();
		}

		static ::System::Void add_Changed(::System::Action_3<::UnityEngine::Splines::Spline*, ::System::Int32, ::BFE47AD60EB94A25::FB886088C605BA42>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::System::Action_3<::UnityEngine::Splines::Spline*, ::System::Int32, ::BFE47AD60EB94A25::FB886088C605BA42>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_ADD_CHANGED_OFFSET))(E937D4885DAA1AE8);
		}

		::Unity::Mathematics::float3 GetCurveUpVector(::System::Int32 B48C66E5FB2449C6, ::System::Single BBCFEC7DB309E927)
		{
			return ((::Unity::Mathematics::float3(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GETCURVEUPVECTOR_OFFSET))(this, B48C66E5FB2449C6, BBCFEC7DB309E927);
		}

		::System::Void SetDirty(::BFE47AD60EB94A25::FB886088C605BA42 EDA6F4277A9435DA, ::System::Int32 E9DB269718295F36)
		{
			return ((::System::Void(*)(::PVOID, ::BFE47AD60EB94A25::FB886088C605BA42, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SETDIRTY_OFFSET))(this, EDA6F4277A9435DA, E9DB269718295F36);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_CLEAR_OFFSET))(this);
		}

		::System::Void Insert_1(::System::Int32 B48C66E5FB2449C6, ::UnityEngine::Splines::BezierKnot BB4DB3113013548E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Splines::BezierKnot))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_INSERT_1_OFFSET))(this, B48C66E5FB2449C6, BB4DB3113013548E);
		}

		::System::Boolean RemoveIntData(::System::String* A5C299C395D3E1B2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_REMOVEINTDATA_OFFSET))(this, A5C299C395D3E1B2);
		}

		::System::Void _ctor(::UnityEngine::Splines::Spline* F03E0BDCBABB08A2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::Spline*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE__CTOR_OFFSET))(this, F03E0BDCBABB08A2);
		}

		::System::Void set_IsMeshDirty(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SET_ISMESHDIRTY_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void ClearPositionCache(::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::System::Int32 E9DB269718295F36, ::BFE47AD60EB94A25::FB886088C605BA42 E670AC82C72F2394)
		{
			return ((::System::Void(*)(::UnityEngine::Splines::Spline*, ::System::Int32, ::BFE47AD60EB94A25::FB886088C605BA42))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_CLEARPOSITIONCACHE_OFFSET))(F03E0BDCBABB08A2, E9DB269718295F36, E670AC82C72F2394);
		}

		::System::Void Add(::UnityEngine::Splines::BezierKnot EC35F88C87A83BEB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::BezierKnot))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_ADD_OFFSET))(this, EC35F88C87A83BEB);
		}

		::System::Void SetCachedEvaluatePosition(::System::Single BBCFEC7DB309E927, ::Unity::Mathematics::float3 EB211B01816ACA79)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Unity::Mathematics::float3))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SETCACHEDEVALUATEPOSITION_OFFSET))(this, BBCFEC7DB309E927, EB211B01816ACA79);
		}

		::System::Void Insert_2(::System::Int32 B48C66E5FB2449C6, ::UnityEngine::Splines::BezierKnot BB4DB3113013548E, ::BFE47AD60EB94A25::FF90BDB4EE8EAF23 A84D57260767D5BD, ::System::Single B914710478B461FE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Splines::BezierKnot, ::BFE47AD60EB94A25::FF90BDB4EE8EAF23, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_INSERT_2_OFFSET))(this, B48C66E5FB2449C6, BB4DB3113013548E, A84D57260767D5BD, B914710478B461FE);
		}

		::System::Void SetTangentModeNoNotify(::System::Int32 B48C66E5FB2449C6, ::BFE47AD60EB94A25::FF90BDB4EE8EAF23 A84D57260767D5BD, ::BFE47AD60EB94A25::B4CA28CF40398BB6 E4597A15448B3252)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::BFE47AD60EB94A25::FF90BDB4EE8EAF23, ::BFE47AD60EB94A25::B4CA28CF40398BB6))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SETTANGENTMODENONOTIFY_OFFSET))(this, B48C66E5FB2449C6, A84D57260767D5BD, E4597A15448B3252);
		}

		::System::Void RemoveAt(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_REMOVEAT_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE__CTOR_1_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* get_Knots()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GET_KNOTS_OFFSET))(this);
		}

		::System::Void SetKnot(::System::Int32 B48C66E5FB2449C6, ::UnityEngine::Splines::BezierKnot E937D4885DAA1AE8, ::BFE47AD60EB94A25::B4CA28CF40398BB6 E4597A15448B3252)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Splines::BezierKnot, ::BFE47AD60EB94A25::B4CA28CF40398BB6))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SETKNOT_OFFSET))(this, B48C66E5FB2449C6, E937D4885DAA1AE8, E4597A15448B3252);
		}

		::System::Void Add_1(::UnityEngine::Splines::BezierKnot EC35F88C87A83BEB, ::BFE47AD60EB94A25::FF90BDB4EE8EAF23 A84D57260767D5BD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::BezierKnot, ::BFE47AD60EB94A25::FF90BDB4EE8EAF23))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_ADD_1_OFFSET))(this, EC35F88C87A83BEB, A84D57260767D5BD);
		}

		::System::Void SetTangentMode_1(::UnityEngine::Splines::SplineRange EA6B8657B1CD96BA, ::BFE47AD60EB94A25::FF90BDB4EE8EAF23 A84D57260767D5BD, ::BFE47AD60EB94A25::B4CA28CF40398BB6 E4597A15448B3252)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::SplineRange, ::BFE47AD60EB94A25::FF90BDB4EE8EAF23, ::BFE47AD60EB94A25::B4CA28CF40398BB6))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SETTANGENTMODE_1_OFFSET))(this, EA6B8657B1CD96BA, A84D57260767D5BD, E4597A15448B3252);
		}

		::System::Void _ctor_2(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* A84C689E168AE2FA, ::System::Boolean BD07DC06C90AF29C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE__CTOR_2_OFFSET))(this, A84C689E168AE2FA, BD07DC06C90AF29C);
		}

		::F875E7A8F1781006<::UnityEngine::Splines::BezierKnot>* GetEnumerator()
		{
			return ((::F875E7A8F1781006<::UnityEngine::Splines::BezierKnot>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean Remove(::UnityEngine::Splines::BezierKnot EC35F88C87A83BEB)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Splines::BezierKnot))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_REMOVE_OFFSET))(this, EC35F88C87A83BEB);
		}

		::System::Boolean get_Closed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GET_CLOSED_OFFSET))(this);
		}

		::UnityEngine::Splines::Spline_SplineSegment* CreateSegment(::System::Single A3300A47B1C94D2B, ::System::Single A76F5B617FAEA668, ::System::Boolean B6CDE0A5115F9B82, ::System::Single E2E3E4E0C7485EA9, ::System::Single FC9E6EDBBC3BB5CB)
		{
			return ((::UnityEngine::Splines::Spline_SplineSegment*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_CREATESEGMENT_OFFSET))(this, A3300A47B1C94D2B, A76F5B617FAEA668, B6CDE0A5115F9B82, E2E3E4E0C7485EA9, FC9E6EDBBC3BB5CB);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::A2A303E2430FA6AA*>* get_embeddedSplineData()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::A2A303E2430FA6AA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GET_EMBEDDEDSPLINEDATA_OFFSET))(this);
		}

		::System::Single GetCurveLength(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GETCURVELENGTH_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void set_Item(::System::Int32 B48C66E5FB2449C6, ::UnityEngine::Splines::BezierKnot E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Splines::BezierKnot))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SET_ITEM_OFFSET))(this, B48C66E5FB2449C6, E937D4885DAA1AE8);
		}

		::System::Void CleanMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_CLEANMESH_OFFSET))(this);
		}

		::System::Single GetTAtKnotIndex(::System::Int32 E9DB269718295F36)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GETTATKNOTINDEX_OFFSET))(this, E9DB269718295F36);
		}

		static ::System::Void SyncKnotToSplitPoint(::UnityEngine::Splines::Spline* F03E0BDCBABB08A2, ::System::Int32 E9DB269718295F36, ::BFE47AD60EB94A25::FB886088C605BA42 E670AC82C72F2394)
		{
			return ((::System::Void(*)(::UnityEngine::Splines::Spline*, ::System::Int32, ::BFE47AD60EB94A25::FB886088C605BA42))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_SYNCKNOTTOSPLITPOINT_OFFSET))(F03E0BDCBABB08A2, E9DB269718295F36, E670AC82C72F2394);
		}

		::System::Boolean TryGetCachedEvaluatePosition(::System::Single BBCFEC7DB309E927, ::Unity::Mathematics::float3& EB211B01816ACA79)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Unity::Mathematics::float3&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_TRYGETCACHEDEVALUATEPOSITION_OFFSET))(this, BBCFEC7DB309E927, EB211B01816ACA79);
		}

		::BFE47AD60EB94A25::FF90BDB4EE8EAF23 GetTangentMode(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::BFE47AD60EB94A25::FF90BDB4EE8EAF23(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GETTANGENTMODE_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void EnsureMetaDataValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_ENSUREMETADATAVALID_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Splines::DistanceToInterpolation>* GetCurveDistanceLut(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::Il2CppArray<::UnityEngine::Splines::DistanceToInterpolation>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_GETCURVEDISTANCELUT_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Boolean Contains(::UnityEngine::Splines::BezierKnot EC35F88C87A83BEB)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Splines::BezierKnot))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_SPLINE_CONTAINS_OFFSET))(this, EC35F88C87A83BEB);
		}
	};
}
