#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define GBPOMEFHEHL_CTOR_OFFSET UNITYSDK_OFFSET(0x16894250)
#define GBPOMEFHEHL_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x168941C0)
#define GBPOMEFHEHL_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x16894130)

inline static constexpr unsigned int GBPOMEFHEHL_TypeDefinitionIndex = 71785;

	class GBPOMEFHEHL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBPOMEFHEHL_CTOR_OFFSET))(this);
		}

		::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + GBPOMEFHEHL_SETPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + GBPOMEFHEHL_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
		}

	};
