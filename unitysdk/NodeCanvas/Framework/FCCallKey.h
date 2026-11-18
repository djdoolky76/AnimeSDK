#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NODECANVAS_FRAMEWORK_FCCALLKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9641D0)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E964140)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9642B0)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x1E9640E0)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0x1E964100)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_GET_PORTNAME_OFFSET UNITYSDK_OFFSET(0x1E964120)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x1E9640F0)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_SET_NODENAME_OFFSET UNITYSDK_OFFSET(0x1E964110)
#define NODECANVAS_FRAMEWORK_FCCALLKEY_SET_PORTNAME_OFFSET UNITYSDK_OFFSET(0x1E964130)
#define NODECANVAS_FRAMEWORK_FCCALLKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9643D0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int FCCallKey_TypeDefinitionIndex = 30004;

	class FCCallKey : public ::System::Object
	{
	public:
		::System::String* _NodeName_k__BackingField; // 0x10
		::System::String* _PortName_k__BackingField; // 0x18
		::System::UInt64 _NodeId_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY__CTOR_OFFSET))(this);
		}

		::System::UInt64 get_NodeId()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_GET_NODEID_OFFSET))(this);
		}

		::System::Void set_NodeId(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_SET_NODEID_OFFSET))(this, value);
		}

		::System::String* get_NodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_GET_NODENAME_OFFSET))(this);
		}

		::System::Void set_NodeName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_SET_NODENAME_OFFSET))(this, value);
		}

		::System::String* get_PortName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_GET_PORTNAME_OFFSET))(this);
		}

		::System::Void set_PortName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_SET_PORTNAME_OFFSET))(this, value);
		}

		::System::Boolean Equals(::NodeCanvas::Framework::FCCallKey* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::FCCallKey*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_FCCALLKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
