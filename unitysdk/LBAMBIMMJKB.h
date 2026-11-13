#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Transform; }

#define LBAMBIMMJKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B288100)
#define LBAMBIMMJKB_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B2880E0)
#define LBAMBIMMJKB_JHKBGBMLBOI_OFFSET UNITYSDK_OFFSET(0x1B288010)
#define LBAMBIMMJKB_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B2880F0)

inline static constexpr unsigned int LBAMBIMMJKB_TypeDefinitionIndex = 75308;

	class LBAMBIMMJKB : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Transform_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAMBIMMJKB_CTOR_OFFSET))(this);
		}

		::System::Void JHKBGBMLBOI(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LBAMBIMMJKB_JHKBGBMLBOI_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAMBIMMJKB_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_Transform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LBAMBIMMJKB_SET_TRANSFORM_OFFSET))(this, a1);
		}

	};
