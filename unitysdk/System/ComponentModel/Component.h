#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MarshalByRefObject.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class EventHandlerList; }
namespace System::ComponentModel { class ISite; }

#define SYSTEM_COMPONENTMODEL_COMPONENT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB0A530)
#define SYSTEM_COMPONENTMODEL_COMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0A520)
#define SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1DB09C90)
#define SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DB09BB0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DB09A40)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x1DB0A090)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_CANRAISEEVENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1DB09B20)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_CANRAISEEVENTS_OFFSET UNITYSDK_OFFSET(0x1DB09B10)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_DESIGNMODE_OFFSET UNITYSDK_OFFSET(0x1DB0A1C0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_GET_SITE_OFFSET UNITYSDK_OFFSET(0x1DB09BA0)
#define SYSTEM_COMPONENTMODEL_COMPONENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB0A2B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int Component_TypeDefinitionIndex = 2570;

	class Component : public ::System::MarshalByRefObject
	{
	public:
		::System::ComponentModel::ISite* site; // 0x18
		::System::ComponentModel::EventHandlerList* events; // 0x20
		static ::System::Object** StaticGet_EventDisposed()
		{
			return (::System::Object**)UnitySDK::FromName("System.ComponentModel", "Component")->GetStaticField(0x33770);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_FINALIZE_OFFSET))(this);
		}

		::System::Boolean get_CanRaiseEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_CANRAISEEVENTS_OFFSET))(this);
		}

		::System::Boolean get_CanRaiseEventsInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_CANRAISEEVENTSINTERNAL_OFFSET))(this);
		}

		::System::ComponentModel::ISite* get_Site()
		{
			return ((::System::ComponentModel::ISite*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_SITE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Object* GetService(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GETSERVICE_OFFSET))(this, a1);
		}

		::System::Boolean get_DesignMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_GET_DESIGNMODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENT_TOSTRING_OFFSET))(this);
		}

	};
}
