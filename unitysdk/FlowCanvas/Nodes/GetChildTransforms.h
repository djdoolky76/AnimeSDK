#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_GETCHILDTRANSFORMS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EBAB2C0)
#define FLOWCANVAS_NODES_GETCHILDTRANSFORMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBAB300)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetChildTransforms_TypeDefinitionIndex = 30374;

	class GetChildTransforms
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETCHILDTRANSFORMS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>* Invoke(::UnityEngine::Transform* parent)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETCHILDTRANSFORMS_INVOKE_OFFSET))(this, parent);
		}
	};
}
