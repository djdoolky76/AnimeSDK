#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define ONPPFKOPIHI_CTOR_OFFSET UNITYSDK_OFFSET(0xBF619A0)
#define ONPPFKOPIHI_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xBF61920)
#define ONPPFKOPIHI_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0xBF618A0)

inline static constexpr unsigned int ONPPFKOPIHI_TypeDefinitionIndex = 69823;

	class ONPPFKOPIHI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPPFKOPIHI_CTOR_OFFSET))(this);
		}

		::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ONPPFKOPIHI_SETPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ONPPFKOPIHI_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
		}

	};
