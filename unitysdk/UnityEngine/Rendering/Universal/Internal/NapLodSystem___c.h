#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::Rendering::Universal::Internal { class NapLodProxy; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CED5B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED5B40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM___C__ONSCENEEFFECTQUALITYSETTINGCHANGE_B__6_0_OFFSET UNITYSDK_OFFSET(0x1CED5B50)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapLodSystem___c_TypeDefinitionIndex = 26801;

	class NapLodSystem___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NapLodSystem___c_TypeDefinitionIndex)->GetStaticField(0x245C0);
		}
		static ::System::Predicate_1<::UnityEngine::Rendering::Universal::Internal::NapLodProxy*>** StaticGet___9__6_0()
		{
			return (::System::Predicate_1<::UnityEngine::Rendering::Universal::Internal::NapLodProxy*>**)Il2CppClass::FromTypeDefinitionIndex(NapLodSystem___c_TypeDefinitionIndex)->GetStaticField(0x245C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnSceneEffectQualitySettingChange_b__6_0(::UnityEngine::Rendering::Universal::Internal::NapLodProxy* proxy)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::NapLodProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLODSYSTEM___C__ONSCENEEFFECTQUALITYSETTINGCHANGE_B__6_0_OFFSET))(this, proxy);
		}
	};
}
