#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define HEU_BOUNDINGVOLUME_B2920199C3F4ABBC_OFFSET UNITYSDK_OFFSET(0x38983B0)
#define HEU_BOUNDINGVOLUME_E10ACA99282240FF_OFFSET UNITYSDK_OFFSET(0x3898710)
#define HEU_BOUNDINGVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

inline static constexpr unsigned int HEU_BoundingVolume_TypeDefinitionIndex = 18146;

class HEU_BoundingVolume : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Collider* E10ACA99282240FF()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_BOUNDINGVOLUME_E10ACA99282240FF_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_BOUNDINGVOLUME__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* B2920199C3F4ABBC()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_BOUNDINGVOLUME_B2920199C3F4ABBC_OFFSET))(this);
	}
};
