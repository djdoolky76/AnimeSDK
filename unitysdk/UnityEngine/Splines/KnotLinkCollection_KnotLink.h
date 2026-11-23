#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Splines/SplineKnotIndex.h"

namespace System::Collections { class IEnumerator; }
template <typename T> class F875E7A8F1781006;

#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTLINK_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x40467F0)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTLINK_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E90040)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTLINK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x4046860)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTLINK_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x4046840)
#define UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine::Splines
{
	inline static constexpr unsigned int KnotLinkCollection_KnotLink_TypeDefinitionIndex = 20634;

	class KnotLinkCollection_KnotLink : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Splines::SplineKnotIndex>* Knots; // 0x10

		::F875E7A8F1781006<::UnityEngine::Splines::SplineKnotIndex>* GetEnumerator()
		{
			return ((::F875E7A8F1781006<::UnityEngine::Splines::SplineKnotIndex>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTLINK_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTLINK_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTLINK_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::Splines::SplineKnotIndex get_Item(::System::Int32 B48C66E5FB2449C6)
		{
			return ((::UnityEngine::Splines::SplineKnotIndex(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTLINK_GET_ITEM_OFFSET))(this, B48C66E5FB2449C6);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPLINES_KNOTLINKCOLLECTION_KNOTLINK__CTOR_OFFSET))(this);
		}
	};
}
