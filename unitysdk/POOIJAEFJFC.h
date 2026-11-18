#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IAssetPool; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define POOIJAEFJFC_AKKMNOIAHBM_OFFSET UNITYSDK_OFFSET(0x1C1E5D40)
#define POOIJAEFJFC_DLNODDGGCKC_OFFSET UNITYSDK_OFFSET(0x1C1E64C0)
#define POOIJAEFJFC_EOMLJPFJFDP_OFFSET UNITYSDK_OFFSET(0x1C1E6040)
#define POOIJAEFJFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1E5D00)

inline static constexpr unsigned int POOIJAEFJFC_TypeDefinitionIndex = 73024;

class POOIJAEFJFC : public ::System::Object
{
public:
	static ::System::String** StaticGet_MHGMDEAACFO()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(POOIJAEFJFC_TypeDefinitionIndex)->GetStaticField(0x49410);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POOIJAEFJFC__CCTOR_OFFSET))();
	}

	static ::System::Void AKKMNOIAHBM(::Foundation::IAssetPool* AIBLPKLIGNK, ::UnityEngine::GameObject* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::Foundation::IAssetPool*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + POOIJAEFJFC_AKKMNOIAHBM_OFFSET))(AIBLPKLIGNK, HODAIDNDKHD);
	}

	static ::UnityEngine::RectTransform* EOMLJPFJFDP(::Foundation::IAssetPool* AIBLPKLIGNK, ::UnityEngine::RectTransform* KFCFOFJBAPA, ::System::Int32 KMOHKCADPNA)
	{
		return ((::UnityEngine::RectTransform*(*)(::Foundation::IAssetPool*, ::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + POOIJAEFJFC_EOMLJPFJFDP_OFFSET))(AIBLPKLIGNK, KFCFOFJBAPA, KMOHKCADPNA);
	}

	static ::UnityEngine::GameObject* DLNODDGGCKC(::Foundation::IAssetPool* AIBLPKLIGNK, ::System::String* MCOHLHMKLIP, ::UnityEngine::Transform* JNLBPMKIFNK, ::System::Int32 KMOHKCADPNA)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::IAssetPool*, ::System::String*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + POOIJAEFJFC_DLNODDGGCKC_OFFSET))(AIBLPKLIGNK, MCOHLHMKLIP, JNLBPMKIFNK, KMOHKCADPNA);
	}
};
