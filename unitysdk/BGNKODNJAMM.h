#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define BGNKODNJAMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB1908E0)
#define BGNKODNJAMM_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0xB190850)
#define BGNKODNJAMM_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0xB1907C0)

	class BGNKODNJAMM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNKODNJAMM_CTOR_OFFSET))(this);
		}

		::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + BGNKODNJAMM_SETPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + BGNKODNJAMM_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
		}

	};
