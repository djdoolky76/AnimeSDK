#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATAREMOTIONCLIPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC6D3670)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEmotionClipConfig_TypeDefinitionIndex = 69417;

	class AvatarEmotionClipConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* Entries; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREMOTIONCLIPCONFIG_CTOR_OFFSET))(this);
		}

	};
}
