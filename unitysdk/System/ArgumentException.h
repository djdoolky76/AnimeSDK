#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_ARGUMENTEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3CA7140)
#define SYSTEM_ARGUMENTEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x3CA7380)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3CA7280)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3CA72C0)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3CA7230)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3CA7210)
#define SYSTEM_ARGUMENTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3CA7360)

namespace System
{
	inline static constexpr unsigned int ArgumentException_TypeDefinitionIndex = 10468;

	class ArgumentException : public ::System::SystemException
	{
	public:
		::System::String* _paramName; // 0x90

		::System::Void _ctor(::System::String* B083BE7841B347C4, ::System::Exception* FA644E43CA202E59)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_OFFSET))(this, B083BE7841B347C4, FA644E43CA202E59);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4, ::System::String* F1A536645E6067F3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4, F1A536645E6067F3);
		}

		::System::Void GetObjectData(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION_GETOBJECTDATA_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void _ctor_2(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_2_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_3_OFFSET))(this);
		}

		::System::Void _ctor_4(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_ARGUMENTEXCEPTION__CTOR_4_OFFSET))(this, B083BE7841B347C4);
		}
	};
}
