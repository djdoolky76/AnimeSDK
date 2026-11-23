#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Splines/SplineKnotIndex.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine::Splines { class KnotLinkCollection_KnotLink; }
template <typename T> class F875E7A8F1781006;

#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x4046020)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_GETKNOTLINKSINTERNAL_OFFSET UNITYSDK_OFFSET(0x4046090)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTINSERTED_1_OFFSET UNITYSDK_OFFSET(0x4046140)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTINSERTED_OFFSET UNITYSDK_OFFSET(0x4046170)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTREMOVED_1_OFFSET UNITYSDK_OFFSET(0x4046180)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTREMOVED_OFFSET UNITYSDK_OFFSET(0x4046270)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_SHIFTKNOTINDICES_OFFSET UNITYSDK_OFFSET(0x4046340)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_SPLINEREMOVED_OFFSET UNITYSDK_OFFSET(0x4046450)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x4046020)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_TRYGETKNOTLINKS_OFFSET UNITYSDK_OFFSET(0x40466A0)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_UNLINK_OFFSET UNITYSDK_OFFSET(0x40466D0)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x4046790)

namespace UnityEngine::Splines
{
	inline static constexpr unsigned int KnotLinkCollection_TypeDefinitionIndex = 20636;

	class KnotLinkCollection : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* m_KnotsLink; // 0x10

		::System::Void SplineRemoved(::System::Int32 FF3E4C007EB176F1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_SPLINEREMOVED_OFFSET))(this, FF3E4C007EB176F1);
		}

		::System::Void Unlink(::UnityEngine::Splines::SplineKnotIndex BB4DB3113013548E)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::SplineKnotIndex))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_UNLINK_OFFSET))(this, BB4DB3113013548E);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::F875E7A8F1781006<::System::Object*>* GetEnumerator()
		{
			return ((::F875E7A8F1781006<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean TryGetKnotLinks(::UnityEngine::Splines::SplineKnotIndex E9DB269718295F36, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*& F556BC6BD6ADA7FE)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Splines::SplineKnotIndex, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_TRYGETKNOTLINKS_OFFSET))(this, E9DB269718295F36, F556BC6BD6ADA7FE);
		}

		::UnityEngine::Splines::KnotLinkCollection_KnotLink* GetKnotLinksInternal(::UnityEngine::Splines::SplineKnotIndex B48C66E5FB2449C6)
		{
			return ((::UnityEngine::Splines::KnotLinkCollection_KnotLink*(*)(::PVOID, ::UnityEngine::Splines::SplineKnotIndex))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_GETKNOTLINKSINTERNAL_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void KnotRemoved(::UnityEngine::Splines::SplineKnotIndex B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::SplineKnotIndex))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTREMOVED_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void KnotInserted(::UnityEngine::Splines::SplineKnotIndex B48C66E5FB2449C6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::SplineKnotIndex))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTINSERTED_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void KnotRemoved_1(::System::Int32 FF3E4C007EB176F1, ::System::Int32 E9DB269718295F36)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTREMOVED_1_OFFSET))(this, FF3E4C007EB176F1, E9DB269718295F36);
		}

		::System::Void ShiftKnotIndices(::UnityEngine::Splines::SplineKnotIndex B48C66E5FB2449C6, ::System::Int32 BE9B161B3F3C2937)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::SplineKnotIndex, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_SHIFTKNOTINDICES_OFFSET))(this, B48C66E5FB2449C6, BE9B161B3F3C2937);
		}

		::System::Void KnotInserted_1(::System::Int32 FF3E4C007EB176F1, ::System::Int32 E9DB269718295F36)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTINSERTED_1_OFFSET))(this, FF3E4C007EB176F1, E9DB269718295F36);
		}
	};
}
