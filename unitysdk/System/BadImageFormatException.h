#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_BADIMAGEFORMATEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3B765C0)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x3B76B00)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_SETMESSAGEFIELD_OFFSET UNITYSDK_OFFSET(0x3B766E0)
#define SYSTEM_BADIMAGEFORMATEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B76770)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B76A50)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B76A70)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3B76AB0)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3B76A30)
#define SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B76960)

namespace System
{
	inline static constexpr unsigned int BadImageFormatException_TypeDefinitionIndex = 11071;

	class BadImageFormatException : public ::System::SystemException
	{
	public:
		::System::String* _fileName; // 0x90
		::System::String* _fusionLog; // 0x98

		::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void _ctor_2(::System::String* B083BE7841B347C4, ::System::String* B823BD107ED98484)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_2_OFFSET))(this, B083BE7841B347C4, B823BD107ED98484);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_TOSTRING_OFFSET))(this);
		}

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_3_OFFSET))(this);
		}

		::System::Void SetMessageField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_SETMESSAGEFIELD_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void _ctor_4(::System::String* B083BE7841B347C4, ::System::Exception* B7AF548FA9CF41FC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION__CTOR_4_OFFSET))(this, B083BE7841B347C4, B7AF548FA9CF41FC);
		}

		::System::Void GetObjectData(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_BADIMAGEFORMATEXCEPTION_GETOBJECTDATA_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}
	};
}
