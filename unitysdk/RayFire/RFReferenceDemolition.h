#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RFReferenceDemolition_B85480612C26C1B5.h"
#include "unitysdk/System/Object.h"

namespace RayFire { class RayfireRigid; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RAYFIRE_RFREFERENCEDEMOLITION_COPYFROM_OFFSET UNITYSDK_OFFSET(0x29720D0)
#define RAYFIRE_RFREFERENCEDEMOLITION_DEMOLISHREFERENCE_OFFSET UNITYSDK_OFFSET(0x29721C0)
#define RAYFIRE_RFREFERENCEDEMOLITION_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x29727C0)
#define RAYFIRE_RFREFERENCEDEMOLITION_GETREFERENCE_OFFSET UNITYSDK_OFFSET(0x29729C0)
#define RAYFIRE_RFREFERENCEDEMOLITION_INHERITMATERIALS_OFFSET UNITYSDK_OFFSET(0x2972BF0)
#define RAYFIRE_RFREFERENCEDEMOLITION__CTOR_OFFSET UNITYSDK_OFFSET(0x2972E40)

namespace RayFire
{
	inline static constexpr unsigned int RFReferenceDemolition_TypeDefinitionIndex = 15491;

	class RFReferenceDemolition : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* reference; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* randomList; // 0x18
		::RayFire::RFReferenceDemolition_B85480612C26C1B5 action; // 0x20
		::System::Boolean addRigid; // 0x24
		::System::Boolean inheritScale; // 0x25
		::System::Boolean inheritMaterials; // 0x26

		static ::System::Boolean DemolishReference(::RayFire::RayfireRigid* F2C7FF5A19F78852)
		{
			return ((::System::Boolean(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFREFERENCEDEMOLITION_DEMOLISHREFERENCE_OFFSET))(F2C7FF5A19F78852);
		}

		::UnityEngine::GameObject* GetReference()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFREFERENCEDEMOLITION_GETREFERENCE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFREFERENCEDEMOLITION__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RayFire::RFReferenceDemolition* B06B001FCF0F0B92)
		{
			return ((::System::Void(*)(::PVOID, ::RayFire::RFReferenceDemolition*))((::PBYTE)hIl2Cpp + RAYFIRE_RFREFERENCEDEMOLITION_COPYFROM_OFFSET))(this, B06B001FCF0F0B92);
		}

		static ::System::Void InheritMaterials(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::UnityEngine::GameObject* E7F4C937B80B291C)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RAYFIRE_RFREFERENCEDEMOLITION_INHERITMATERIALS_OFFSET))(F2C7FF5A19F78852, E7F4C937B80B291C);
		}

		static ::UnityEngine::GameObject* GetInstance(::RayFire::RayfireRigid* F2C7FF5A19F78852, ::UnityEngine::GameObject* B3190D47D71643E5)
		{
			return ((::UnityEngine::GameObject*(*)(::RayFire::RayfireRigid*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RAYFIRE_RFREFERENCEDEMOLITION_GETINSTANCE_OFFSET))(F2C7FF5A19F78852, B3190D47D71643E5);
		}
	};
}
