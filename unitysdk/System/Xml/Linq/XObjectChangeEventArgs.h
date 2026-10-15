#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/XObjectChange.h"
#include "unitysdk/System/EventArgs.h"
namespace System::Xml::Linq { class XObjectChangeEventArgs; }

#define SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE62500)
#define SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE624D0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XObjectChangeEventArgs_TypeDefinitionIndex = 3889;

	class XObjectChangeEventArgs : public ::System::EventArgs
	{
	public:
		::System::Xml::Linq::XObjectChange objectChange; // 0x10
		static ::System::Xml::Linq::XObjectChangeEventArgs** StaticGet_Add()
		{
			return (::System::Xml::Linq::XObjectChangeEventArgs**)UnitySDK::FromName("System.Xml.Linq", "XObjectChangeEventArgs")->GetStaticField(0x120);
		}

		static ::System::Xml::Linq::XObjectChangeEventArgs** StaticGet_Remove()
		{
			return (::System::Xml::Linq::XObjectChangeEventArgs**)UnitySDK::FromName("System.Xml.Linq", "XObjectChangeEventArgs")->GetStaticField(0x128);
		}

		static ::System::Xml::Linq::XObjectChangeEventArgs** StaticGet_Name()
		{
			return (::System::Xml::Linq::XObjectChangeEventArgs**)UnitySDK::FromName("System.Xml.Linq", "XObjectChangeEventArgs")->GetStaticField(0x130);
		}

		static ::System::Xml::Linq::XObjectChangeEventArgs** StaticGet_Value()
		{
			return (::System::Xml::Linq::XObjectChangeEventArgs**)UnitySDK::FromName("System.Xml.Linq", "XObjectChangeEventArgs")->GetStaticField(0x138);
		}

		::System::Void _ctor(::System::Xml::Linq::XObjectChange a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XObjectChange))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECTCHANGEEVENTARGS_CCTOR_OFFSET))();
		}

	};
}
