#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define GPPMCNBIGPA_CTOR_OFFSET UNITYSDK_OFFSET(0x15B690F0)
#define GPPMCNBIGPA_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x15B69020)
#define GPPMCNBIGPA_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x15B68F40)

inline static constexpr unsigned int GPPMCNBIGPA_TypeDefinitionIndex = 69824;

	class GPPMCNBIGPA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMCNBIGPA_CTOR_OFFSET))(this);
		}

		::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + GPPMCNBIGPA_SETPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + GPPMCNBIGPA_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
		}

	};
