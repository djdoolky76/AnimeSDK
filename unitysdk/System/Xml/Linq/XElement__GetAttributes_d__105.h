#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Xml::Linq { class XAttribute; }
namespace System::Xml::Linq { class XElement; }
namespace System::Xml::Linq { class XName; }

#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE605E0)
#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EE60A90)
#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_XML_LINQ_XATTRIBUTE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EE60BA0)
#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_XML_LINQ_XATTRIBUTE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EE60B30)
#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EE60C20)
#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EE60B90)
#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EE60B40)
#define SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EE60A80)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XElement__GetAttributes_d__105_TypeDefinitionIndex = 3897;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66, typename T67, typename T68, typename T69, typename T70, typename T71, typename T72, typename T73, typename T74, typename T75, typename T76, typename T77, typename T78, typename T79, typename T80, typename T81, typename T82, typename T83, typename T84, typename T85, typename T86, typename T87, typename T88, typename T89, typename T90, typename T91, typename T92, typename T93, typename T94, typename T95, typename T96, typename T97, typename T98, typename T99, typename T100, typename T101, typename T102, typename T103, typename T104, typename T105>
	class XElement__GetAttributes_d__105 : public ::System::Object
	{
	public:
		::System::Xml::Linq::XName* __3__name; // 0x10
		::System::Xml::Linq::XElement* __4__this; // 0x18
		::System::Xml::Linq::XAttribute* _a_5__1; // 0x20
		::System::Xml::Linq::XName* name; // 0x28
		::System::Xml::Linq::XAttribute* __2__current; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_MOVENEXT_OFFSET))(this);
		}

		::System::Xml::Linq::XAttribute* System_Collections_Generic_IEnumerator_System_Xml_Linq_XAttribute__get_Current()
		{
			return ((::System::Xml::Linq::XAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_XML_LINQ_XATTRIBUTE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>* System_Collections_Generic_IEnumerable_System_Xml_Linq_XAttribute__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_XML_LINQ_XATTRIBUTE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__GETATTRIBUTES_D__105_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
}
