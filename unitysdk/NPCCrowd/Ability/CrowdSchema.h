#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeSchema.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }

#define NPCCROWD_ABILITY_CROWDSCHEMA_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x114B46D0)
#define NPCCROWD_ABILITY_CROWDSCHEMA_DISPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x114B46E0)
#define NPCCROWD_ABILITY_CROWDSCHEMA_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x114B46C0)
#define NPCCROWD_ABILITY_CROWDSCHEMA_ISEXTERNALITEMALLOWED_OFFSET UNITYSDK_OFFSET(0x114B45F0)
#define NPCCROWD_ABILITY_CROWDSCHEMA_ISSTRUCTALLOWED_OFFSET UNITYSDK_OFFSET(0x114B44D0)
#define NPCCROWD_ABILITY_CROWDSCHEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x114B46B0)
#define NPCCROWD_ABILITY_CROWDSCHEMA___BASE_ISEXTERNALITEMALLOWED_OFFSET UNITYSDK_OFFSET(0x114B46F0)
#define NPCCROWD_ABILITY_CROWDSCHEMA___BASE_ISSTRUCTALLOWED_OFFSET UNITYSDK_OFFSET(0x114B4700)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CrowdSchema_TypeDefinitionIndex = 86274;

	class CrowdSchema : public ::StateTreeCore::StateTreeSchema
	{
	public:
		::System::Void _ctor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSCHEMA__CTOR_OFFSET))(this, initializer);
		}

		::System::Boolean IsStructAllowed(::UnrealTypes::ScriptStruct* scriptStruct)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::ScriptStruct*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSCHEMA_ISSTRUCTALLOWED_OFFSET))(this, scriptStruct);
		}

		::System::Boolean IsExternalItemAllowed(::UnrealTypes::Struct* struct_)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Struct*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSCHEMA_ISEXTERNALITEMALLOWED_OFFSET))(this, struct_);
		}

		::System::Void InitializeProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSCHEMA_INITIALIZEPROPERTIES_OFFSET))(this);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSCHEMA_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperties(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSCHEMA_DISPOSEPROPERTIES_OFFSET))(this, disposing);
		}

		::System::Boolean __base_IsExternalItemAllowed(::UnrealTypes::Struct* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Struct*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSCHEMA___BASE_ISEXTERNALITEMALLOWED_OFFSET))(this, P0);
		}

		::System::Boolean __base_IsStructAllowed(::UnrealTypes::ScriptStruct* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::ScriptStruct*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSCHEMA___BASE_ISSTRUCTALLOWED_OFFSET))(this, P0);
		}
	};
}
