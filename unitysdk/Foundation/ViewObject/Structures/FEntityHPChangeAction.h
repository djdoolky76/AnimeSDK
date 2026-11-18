#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class BFLPANDDGHG;
class IFLPGOKHDJI;
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB7BDF0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION_GET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0xBB7B9E0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0xBB7B9F0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7B880)

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FEntityHPChangeAction_TypeDefinitionIndex = 82422;

	class FEntityHPChangeAction : public ::System::Object
	{
	public:
		// static const ::System::Single MinHpNotifyDeltaRatio; // 0x0
		::MoleMole::EntityHandle EntityHandle; // 0x10
		::BFLPANDDGHG* _fighter; // 0x20
		::Foundation::ViewObject::ViewObjectHandle GroupHandle; // 0x28
		::System::String* Name; // 0x38
		::IFLPGOKHDJI* Graph; // 0x40
		::System::Boolean _triggered; // 0x48
		::System::Byte _padding0[0x3];
		::System::Single ListenValue; // 0x4C
		::System::Int32 ListenType; // 0x50

		::System::Void _ctor(::System::String* name, ::MoleMole::EntityHandle entityHandle, ::System::Int32 listenType, ::System::Single listenValue, ::IFLPGOKHDJI* graph, ::Foundation::ViewObject::ViewObjectHandle groupHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::EntityHandle, ::System::Int32, ::System::Single, ::IFLPGOKHDJI*, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION__CTOR_OFFSET))(this, name, entityHandle, listenType, listenValue, graph, groupHandle);
		}

		::System::Boolean get_IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION_GET_ISTRIGGERED_OFFSET))(this);
		}

		::System::Void OnFighter_PropertyValueChanged(::System::UInt32 FighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, FighterId, type, customType, oldValue, newValue);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION_DISPOSE_OFFSET))(this);
		}
	};
}
