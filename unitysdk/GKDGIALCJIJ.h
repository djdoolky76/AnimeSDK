#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture; }

#define GKDGIALCJIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15A91D70)
#define GKDGIALCJIJ_SETPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x15A91CF0)
#define GKDGIALCJIJ_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x15A91C70)

	class GKDGIALCJIJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKDGIALCJIJ_CTOR_OFFSET))(this);
		}

		::System::Void SetProperty(::UnityEngine::Material* a1, ::System::Int32 a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + GKDGIALCJIJ_SETPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetProperty_1(::UnityEngine::MaterialPropertyBlock* a1, ::System::Int32 a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + GKDGIALCJIJ_SETPROPERTY_1_OFFSET))(this, a1, a2, a3);
		}

	};
