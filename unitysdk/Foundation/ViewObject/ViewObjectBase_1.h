#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EViewObjectMetaFlags.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectReadyFlagsRequest.h"
#include "unitysdk/System/Object.h"

class FLDPBAPLICI;
namespace Foundation::ViewObject { template <typename T> class IViewObjectComponent_1; }
namespace Foundation::ViewObject::Container { template <typename T> class ComponentContainer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectBase_1_TypeDefinitionIndex = 73249;

	template <typename T>
	class ViewObjectBase_1 : public ::System::Object
	{
	public:
		// static const ::System::UInt32 MaxFlags = 0xFFFFFFFF; // 0x0
		::Foundation::ViewObject::ViewObjectHandle _SelfHandle_k__BackingField; // 0x0
		::System::String* _Name_k__BackingField; // 0x0
		::System::UInt32 _NetID_k__BackingField; // 0x0
		::System::UInt16 _Version_k__BackingField; // 0x0
		::Foundation::ViewObject::Container::ComponentContainer_1<::Foundation::ViewObject::IViewObjectComponent_1<T>*>* ComponentContainer; // 0x0
		::System::Boolean _enable; // 0x0
		::FLDPBAPLICI* _ConfigViewObject_k__BackingField; // 0x0
		::System::Boolean _MarkedForDestroy_k__BackingField; // 0x0
		::System::Boolean _Recycling_k__BackingField; // 0x0
		::System::Boolean _Awoken_k__BackingField; // 0x0
		::System::Boolean _SpawnComplete_k__BackingField; // 0x0
		::Foundation::ViewObject::EViewObjectMetaFlags _MetaFlags_k__BackingField; // 0x0
		::System::Boolean _bPostedReady_k__BackingField; // 0x0
		::System::UInt32 _RequireReadyFlags_k__BackingField; // 0x0
		::System::UInt32 _ReadyFlags_k__BackingField; // 0x0
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectReadyFlagsRequest>* _readyFlagsRequests; // 0x0
	};
}
