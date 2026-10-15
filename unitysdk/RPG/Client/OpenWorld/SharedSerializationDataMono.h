#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGPFGDFHIOM.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO_APPLY_OFFSET UNITYSDK_OFFSET(0xDA0AF40)
#define RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO_CTOR_OFFSET UNITYSDK_OFFSET(0xDA0B170)
#define RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO_REVERT_OFFSET UNITYSDK_OFFSET(0xDA02570)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SharedSerializationDataMono_TypeDefinitionIndex = 73846;

	class SharedSerializationDataMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::LGPFGDFHIOM EIMMOFHCEFG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO_CTOR_OFFSET))(this);
		}

		::System::Void Apply(::LGPFGDFHIOM a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGPFGDFHIOM))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO_APPLY_OFFSET))(this, a1);
		}

		::System::Void Revert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO_REVERT_OFFSET))(this);
		}

	};
}
