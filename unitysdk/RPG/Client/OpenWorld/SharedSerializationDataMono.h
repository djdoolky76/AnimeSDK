#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGPFGDFHIOM.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO_APPLY_OFFSET UNITYSDK_OFFSET(0x1BEFF440)
#define RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEFF670)
#define RPG_CLIENT_OPENWORLD_SHAREDSERIALIZATIONDATAMONO_REVERT_OFFSET UNITYSDK_OFFSET(0x1BEF6B00)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int SharedSerializationDataMono_TypeDefinitionIndex = 75971;

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
