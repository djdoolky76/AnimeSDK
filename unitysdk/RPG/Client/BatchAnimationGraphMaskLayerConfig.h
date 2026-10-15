#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class BatchAnimationClip; }

#define RPG_CLIENT_BATCHANIMATIONGRAPHMASKLAYERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC7F5AE0)

namespace RPG::Client
{
	class BatchAnimationGraphMaskLayerConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* MaskBoneMaskList; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::BatchAnimationClip*>* MaskClips; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* MaskAnimList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATCHANIMATIONGRAPHMASKLAYERCONFIG_CTOR_OFFSET))(this);
		}

	};
}
