#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define IBIJMMCBLFB_CTOR_OFFSET UNITYSDK_OFFSET(0x15E3A800)
#define IBIJMMCBLFB_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x15E3A770)
#define IBIJMMCBLFB_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x15E3A6F0)

inline static constexpr unsigned int IBIJMMCBLFB_TypeDefinitionIndex = 69829;

	class IBIJMMCBLFB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIJMMCBLFB_CTOR_OFFSET))(this);
		}

		::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Matrix4x4>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + IBIJMMCBLFB_SETPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Matrix4x4>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + IBIJMMCBLFB_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
		}

	};
