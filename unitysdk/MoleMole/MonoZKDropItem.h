#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class StaticSceneObjectWidget; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_MONOZKDROPITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A936F70)
#define MOLEMOLE_MONOZKDROPITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A937070)
#define MOLEMOLE_MONOZKDROPITEM_SETUPICON_OFFSET UNITYSDK_OFFSET(0x1A937530)
#define MOLEMOLE_MONOZKDROPITEM_SETUPTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x1A9371D0)
#define MOLEMOLE_MONOZKDROPITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9378C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoZKDropItem_TypeDefinitionIndex = 68886;

	class MonoZKDropItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::StaticSceneObjectWidget* textureSheet; // 0x18
		::UnityEngine::GameObject* icon; // 0x20
		::UnityEngine::Material* MMODJCDEEFL; // 0x28
		::Foundation::AssetRequestHandle MHGLFIEPICP; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZKDROPITEM__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZKDROPITEM_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZKDROPITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetupTextureSheet(::System::String* HKEDGIJBLAF)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZKDROPITEM_SETUPTEXTURESHEET_OFFSET))(this, HKEDGIJBLAF);
		}

		::System::Void SetupIcon(::System::String* FNJPKKAHJAJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOZKDROPITEM_SETUPICON_OFFSET))(this, FNJPKKAHJAJ);
		}
	};
}
