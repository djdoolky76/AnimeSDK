#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/InvalidOperationException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_OBJECTDISPOSEDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3CED570)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x3CED840)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION_GET_OBJECTNAME_OFFSET UNITYSDK_OFFSET(0x3CED910)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3CED720)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3CED7D0)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3CED680)
#define SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3CED780)

namespace System
{
	inline static constexpr unsigned int ObjectDisposedException_TypeDefinitionIndex = 10724;

	class ObjectDisposedException : public ::System::InvalidOperationException
	{
	public:
		::System::String* _objectName; // 0x90

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void _ctor(::System::String* A8065D652F33FA3B, ::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_OFFSET))(this, A8065D652F33FA3B, B083BE7841B347C4);
		}

		::System::Void GetObjectData(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION_GETOBJECTDATA_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* A8065D652F33FA3B)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_2_OFFSET))(this, A8065D652F33FA3B);
		}

		::System::String* get_ObjectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION_GET_OBJECTNAME_OFFSET))(this);
		}

		::System::Void _ctor_3(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_OBJECTDISPOSEDEXCEPTION__CTOR_3_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}
	};
}
