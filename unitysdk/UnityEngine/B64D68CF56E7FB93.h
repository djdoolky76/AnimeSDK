#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class CustomRenderTexture; }

#define UNITYENGINE_B64D68CF56E7FB93_A137694CBF90FB50_OFFSET UNITYSDK_OFFSET(0x417E990)
#define UNITYENGINE_B64D68CF56E7FB93_FEBD2DC674D82CAF_OFFSET UNITYSDK_OFFSET(0x417E930)

namespace UnityEngine
{
	inline static constexpr unsigned int B64D68CF56E7FB93_TypeDefinitionIndex = 17666;

	class B64D68CF56E7FB93 : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::CustomRenderTexture*>** StaticGet_A8F5363F35C311C7()
		{
			return (::System::Action_1<::UnityEngine::CustomRenderTexture*>**)Il2CppClass::FromTypeDefinitionIndex(B64D68CF56E7FB93_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::UnityEngine::CustomRenderTexture*>** StaticGet_E5ED2C2A68248C0A()
		{
			return (::System::Action_1<::UnityEngine::CustomRenderTexture*>**)Il2CppClass::FromTypeDefinitionIndex(B64D68CF56E7FB93_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void A137694CBF90FB50(::UnityEngine::CustomRenderTexture* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::UnityEngine::CustomRenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_B64D68CF56E7FB93_A137694CBF90FB50_OFFSET))(AFE8F10692F5139F);
		}

		static ::System::Void FEBD2DC674D82CAF(::UnityEngine::CustomRenderTexture* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::UnityEngine::CustomRenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_B64D68CF56E7FB93_FEBD2DC674D82CAF_OFFSET))(AFE8F10692F5139F);
		}
	};
}
