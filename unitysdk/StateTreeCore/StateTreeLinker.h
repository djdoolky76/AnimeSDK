#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataDesc.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataRequirement.h"
#include "unitysdk/StateTreeCore/StateTreeLinkerStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle.h"

namespace StateTreeCore { class StateTreeSchema; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { template <typename T> class ManagedStructList_1; }

#define STATETREECORE_STATETREELINKER_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x2003C8D0)
#define STATETREECORE_STATETREELINKER_LINKEXTERNALDATA_1_OFFSET UNITYSDK_OFFSET(0x2003C9E0)
#define STATETREECORE_STATETREELINKER__CTOR_OFFSET UNITYSDK_OFFSET(0x2003C8E0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeLinker_TypeDefinitionIndex = 31023;

	class StateTreeLinker : public ::System::Object
	{
	public:
		::UnrealTypes::ManagedStructList_1<::StateTreeCore::StateTreeExternalDataDesc>* ExternalDataDesc; // 0x10
		::StateTreeCore::StateTreeSchema* _schema; // 0x18
		::StateTreeCore::StateTreeLinkerStatus _status; // 0x20

		::System::Void _ctor(::StateTreeCore::StateTreeSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeSchema*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREELINKER__CTOR_OFFSET))(this, schema);
		}

		::StateTreeCore::StateTreeLinkerStatus get_Status()
		{
			return ((::StateTreeCore::StateTreeLinkerStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREELINKER_GET_STATUS_OFFSET))(this);
		}

		::System::Void LinkExternalData_1(::StateTreeCore::StateTreeExternalDataHandle& handle, ::UnrealTypes::ScriptStruct* scriptStruct, ::StateTreeCore::StateTreeExternalDataRequirement requirement)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExternalDataHandle&, ::UnrealTypes::ScriptStruct*, ::StateTreeCore::StateTreeExternalDataRequirement))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREELINKER_LINKEXTERNALDATA_1_OFFSET))(this, handle, scriptStruct, requirement);
		}
	};
}
