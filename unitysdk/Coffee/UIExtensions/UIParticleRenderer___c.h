#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x17507060)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x17507090)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___C__GETMODIFIEDMATERIAL_B__33_0_OFFSET UNITYSDK_OFFSET(0x175070A0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRenderer___c_TypeDefinitionIndex = 40874;

	class UIParticleRenderer___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::ValueTuple_2<::UnityEngine::Material*, ::UnityEngine::Texture*>, ::UnityEngine::Material*>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::System::ValueTuple_2<::UnityEngine::Material*, ::UnityEngine::Texture*>, ::UnityEngine::Material*>**)UnitySDK::FromName("Coffee.UIExtensions", "<>c")->GetStaticField(0xB70);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Coffee.UIExtensions", "<>c")->GetStaticField(0xB78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* _GetModifiedMaterial_b__33_0(::System::ValueTuple_2<::UnityEngine::Material*, ::UnityEngine::Texture*> a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::System::ValueTuple_2<::UnityEngine::Material*, ::UnityEngine::Texture*>))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERER___C__GETMODIFIEDMATERIAL_B__33_0_OFFSET))(this, a1);
		}

	};
}
