#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }

#define MOLEMOLE_UIHADALZONE_LAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18C61540)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LayerConfig_TypeDefinitionIndex = 82593;

	class UIHadalZone_LayerConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::UnityEngine::GameObject*>* layerObjects; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Sprite*>* numberImages; // 0x60
		::System::Single UnlockAnimSeconds; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
