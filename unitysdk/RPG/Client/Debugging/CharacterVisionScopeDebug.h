#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FCA60)
#define RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_FDMINJAIMEL_OFFSET UNITYSDK_OFFSET(0x1B7FC990)
#define RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_FHOLKJCPOGP_OFFSET UNITYSDK_OFFSET(0x1B7FC920)
#define RPG_CLIENT_DEBUGGING_CHARACTERVISIONSCOPEDEBUG_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1B7FC7F0)

namespace RPG::Client::Debugging
{
	inline static constexpr unsigned int CharacterVisionScopeDebug_TypeDefinitionIndex = 85001;

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
