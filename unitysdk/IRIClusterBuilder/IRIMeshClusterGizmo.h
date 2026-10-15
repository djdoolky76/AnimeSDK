#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace IRIClusterBuilder { class IRIMeshClusterItemDebug_MeshletBounds; }

#define IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO_CGHMGBBJECG_OFFSET UNITYSDK_OFFSET(0x1652CDA0)
#define IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1652D070)
#define IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO_NMNHOLJLONI_OFFSET UNITYSDK_OFFSET(0x1652CA80)
#define IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1652C3C0)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRIMeshClusterGizmo_TypeDefinitionIndex = 47746;

	class IRIMeshClusterGizmo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::IRIClusterBuilder::IRIMeshClusterItemDebug_MeshletBounds* _Bounds; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO_CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void NMNHOLJLONI(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO_NMNHOLJLONI_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 CGHMGBBJECG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERGIZMO_CGHMGBBJECG_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
