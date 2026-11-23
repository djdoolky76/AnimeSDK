#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace HoudiniEngineUnity { class HEU_InputNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define TA_HOUDINI_HDAPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x28EE830)

namespace TA::Houdini
{
	inline static constexpr unsigned int HDAPreset_TypeDefinitionIndex = 16451;

	class HDAPreset : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* HDAPath; // 0x18
		::System::String* HEU_PresetPath; // 0x20
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InputNode*>* InputNodes; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_HOUDINI_HDAPRESET__CTOR_OFFSET))(this);
		}
	};
}
