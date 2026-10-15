#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class AttachPointOverride; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ATTACHPOINTMAPPINGOVERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0xC6A9C00)
#define RPG_CLIENT_ATTACHPOINTMAPPINGOVERRIDE_LOGICUPDATE_OFFSET UNITYSDK_OFFSET(0xC6A9980)

namespace RPG::Client
{
	class AttachPointMappingOverride : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AttachPointOverride*>* AttachPointOverrides; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPINGOVERRIDE_CTOR_OFFSET))(this);
		}

		::System::Void LogicUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHPOINTMAPPINGOVERRIDE_LOGICUPDATE_OFFSET))(this, a1);
		}

	};
}
