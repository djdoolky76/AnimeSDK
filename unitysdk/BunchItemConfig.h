#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }

#define BUNCHITEMCONFIG_AWAKE_OFFSET UNITYSDK_OFFSET(0xC1B9DB0)
#define BUNCHITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC1B9FC0)

inline static constexpr unsigned int BunchItemConfig_TypeDefinitionIndex = 47322;

	class BunchItemConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* HLODPath; // 0x18
		::System::String* BunchLodTemplateName; // 0x20
		// static const ::System::String* InstanceItemParent; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUNCHITEMCONFIG_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUNCHITEMCONFIG_AWAKE_OFFSET))(this);
		}

	};
