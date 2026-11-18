#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_SCENEMARK_PREHITBOUNDSMARK_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x10D592E0)
#define MOLEMOLE_SCENEMARK_PREHITBOUNDSMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x10D594E0)
#define MOLEMOLE_SCENEMARK_PREHITBOUNDSMARK___BASE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x10D59500)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int PreHitBoundsMark_TypeDefinitionIndex = 40380;

	class PreHitBoundsMark
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Bounds>* AABBBounds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_PREHITBOUNDSMARK__CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmos(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_PREHITBOUNDSMARK_ONDRAWGIZMOS_OFFSET))(this, transform);
		}

		::System::Void __base_OnDrawGizmos(::UnityEngine::Transform* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_PREHITBOUNDSMARK___BASE_ONDRAWGIZMOS_OFFSET))(this, P0);
		}
	};
}
