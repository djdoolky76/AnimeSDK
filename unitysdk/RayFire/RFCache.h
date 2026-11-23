#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RAYFIRE_RFCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x2A23630)

namespace RayFire
{
	inline static constexpr unsigned int RFCache_TypeDefinitionIndex = 15979;

	class RFCache : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Collections::Generic::List_1<::System::Boolean>* act; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* pos; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* rot; // 0x28
		::UnityEngine::Transform* transform; // 0x30

		::System::Void _ctor(::UnityEngine::Transform* EFE497ABF6BF98D8, ::UnityEngine::Transform* F64C72FFEBBF3A94)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCACHE__CTOR_OFFSET))(this, EFE497ABF6BF98D8, F64C72FFEBBF3A94);
		}
	};
}
