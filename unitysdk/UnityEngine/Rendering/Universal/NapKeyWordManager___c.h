#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E382A80)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER___C__CLEARDUMMYCACHEDSHADERKEYWORDS_B__12_0_OFFSET UNITYSDK_OFFSET(0x1E382AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER___C__CLEARDUMMYCACHEDSHADERKEYWORDS_B__12_1_OFFSET UNITYSDK_OFFSET(0x1E382BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E382AC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapKeyWordManager___c_TypeDefinitionIndex = 27056;

	class NapKeyWordManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Material*, ::System::Boolean>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::UnityEngine::Material*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager___c_TypeDefinitionIndex)->GetStaticField(0x24000);
		}
		static ::System::Func_2<::UnityEngine::Material*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::UnityEngine::Material*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager___c_TypeDefinitionIndex)->GetStaticField(0x24008);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager___c_TypeDefinitionIndex)->GetStaticField(0x24010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ClearDummyCachedShaderKeywords_b__12_0(::UnityEngine::Material* k)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER___C__CLEARDUMMYCACHEDSHADERKEYWORDS_B__12_0_OFFSET))(this, k);
		}

		::System::Boolean _ClearDummyCachedShaderKeywords_b__12_1(::UnityEngine::Material* k)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER___C__CLEARDUMMYCACHEDSHADERKEYWORDS_B__12_1_OFFSET))(this, k);
		}
	};
}
