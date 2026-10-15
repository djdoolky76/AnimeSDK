#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_CTOR_OFFSET UNITYSDK_OFFSET(0xCBE4710)
#define RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_FDMINJAIMEL_OFFSET UNITYSDK_OFFSET(0xCBE4640)
#define RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_FHOLKJCPOGP_OFFSET UNITYSDK_OFFSET(0xCBE45D0)
#define RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xCBE44A0)

namespace RPG::Client::Debugging
{
	inline static constexpr unsigned int CharacterVisionScopeDebug_TypeDefinitionIndex = 82128;

	class CharacterVisionScopeDebug : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Angle; // 0x18
		::System::Single Distance; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void FHOLKJCPOGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_FHOLKJCPOGP_OFFSET))(this);
		}

		::System::Void FDMINJAIMEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_FDMINJAIMEL_OFFSET))(this);
		}

	};
}
