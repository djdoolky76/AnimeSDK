#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeProxy_Priority.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class VolumeProxy; }

namespace RPG::Client
{
	inline static constexpr unsigned int VolumeComponentProxy_1_TypeDefinitionIndex = 75131;

	template <typename T>
	class VolumeComponentProxy_1 : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rendering::VolumeProxy* _VolumeProxy; // 0x0
		::UnityEngine::Rendering::VolumeProxy_Priority _Priority; // 0x0
		T _VolumeComponent; // 0x0
		::System::Collections::Generic::List_1<::System::Action_1<::System::Object*>*>* _TickActions; // 0x0
	};
}
