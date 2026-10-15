#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define JKKEMDBAMCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB21F540)
#define JKKEMDBAMCM_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xB21F4B0)
#define JKKEMDBAMCM_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0xB21F420)

inline static constexpr unsigned int JKKEMDBAMCM_TypeDefinitionIndex = 69821;

	class JKKEMDBAMCM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKEMDBAMCM_CTOR_OFFSET))(this);
		}

		::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + JKKEMDBAMCM_SETPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + JKKEMDBAMCM_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
		}

	};
