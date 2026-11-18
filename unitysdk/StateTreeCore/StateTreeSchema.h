#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/Object.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataDesc.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"
#include "unitysdk/UnrealTypes/ReadOnlyNativeListView_1.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }

#define STATETREECORE_STATETREESCHEMA_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1FF4A4A0)
#define STATETREECORE_STATETREESCHEMA_DISPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1FF4A4B0)
#define STATETREECORE_STATETREESCHEMA_GETCONTEXTDATADESCS_OFFSET UNITYSDK_OFFSET(0x1FF4A470)
#define STATETREECORE_STATETREESCHEMA_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1FF4A490)
#define STATETREECORE_STATETREESCHEMA_ISCLASSALLOWED_OFFSET UNITYSDK_OFFSET(0x1FF4A450)
#define STATETREECORE_STATETREESCHEMA_ISEXTERNALITEMALLOWED_OFFSET UNITYSDK_OFFSET(0x1FF4A460)
#define STATETREECORE_STATETREESCHEMA_ISSTRUCTALLOWED_OFFSET UNITYSDK_OFFSET(0x1FF4A440)
#define STATETREECORE_STATETREESCHEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF4A480)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeSchema_TypeDefinitionIndex = 31108;

	class StateTreeSchema : public ::UnrealTypes::Object
	{
	public:
		::System::Void _ctor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESCHEMA__CTOR_OFFSET))(this, initializer);
		}

		::System::Boolean IsStructAllowed(::UnrealTypes::ScriptStruct* scriptStruct)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::ScriptStruct*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESCHEMA_ISSTRUCTALLOWED_OFFSET))(this, scriptStruct);
		}

		::System::Boolean IsClassAllowed(::UnrealTypes::Class* class_)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Class*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESCHEMA_ISCLASSALLOWED_OFFSET))(this, class_);
		}

		::System::Boolean IsExternalItemAllowed(::UnrealTypes::Struct* struct_)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Struct*))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESCHEMA_ISEXTERNALITEMALLOWED_OFFSET))(this, struct_);
		}

		::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc> GetContextDataDescs()
		{
			return ((::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESCHEMA_GETCONTEXTDATADESCS_OFFSET))(this);
		}

		::System::Void InitializeProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESCHEMA_INITIALIZEPROPERTIES_OFFSET))(this);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESCHEMA_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperties(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESCHEMA_DISPOSEPROPERTIES_OFFSET))(this, disposing);
		}
	};
}
