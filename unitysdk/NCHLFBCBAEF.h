#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define NCHLFBCBAEF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB0B350)
#define NCHLFBCBAEF_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xBB0B2C0)
#define NCHLFBCBAEF_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0xBB0B240)

inline static constexpr unsigned int NCHLFBCBAEF_TypeDefinitionIndex = 69827;

	class NCHLFBCBAEF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCHLFBCBAEF_CTOR_OFFSET))(this);
		}

		::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Color>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + NCHLFBCBAEF_SETPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Color>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + NCHLFBCBAEF_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
		}

	};
