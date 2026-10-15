#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROPINSTANCETRANSFORM_BPBIPENMIGB_OFFSET UNITYSDK_OFFSET(0xDDEC810)
#define RPG_CLIENT_PROPINSTANCETRANSFORM_CTOR_OFFSET UNITYSDK_OFFSET(0xDDED130)
#define RPG_CLIENT_PROPINSTANCETRANSFORM_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xDDED050)
#define RPG_CLIENT_PROPINSTANCETRANSFORM_PCLCONGDEBE_OFFSET UNITYSDK_OFFSET(0xDDECB00)
#define RPG_CLIENT_PROPINSTANCETRANSFORM_PFELLBJMHKB_OFFSET UNITYSDK_OFFSET(0xDDED0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PropInstanceTransform_TypeDefinitionIndex = 70753;

	class PropInstanceTransform : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::UnityEngine::Quaternion Rotation; // 0x1C
		::UnityEngine::Vector3 Scale; // 0x2C
		::System::Boolean UsePosition; // 0x38
		::System::Boolean UseRotation; // 0x39
		::System::Boolean UseScale; // 0x3A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCETRANSFORM_CTOR_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 PCLCONGDEBE()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCETRANSFORM_PCLCONGDEBE_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 BPBIPENMIGB(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCETRANSFORM_BPBIPENMIGB_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCETRANSFORM_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void PFELLBJMHKB(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCETRANSFORM_PFELLBJMHKB_OFFSET))(this, a1, a2, a3);
		}

	};
}
