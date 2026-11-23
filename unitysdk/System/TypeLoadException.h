#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class String; }

#define SYSTEM_TYPELOADEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3BA2940)
#define SYSTEM_TYPELOADEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x3BA2F70)
#define SYSTEM_TYPELOADEXCEPTION_SETMESSAGEFIELD_OFFSET UNITYSDK_OFFSET(0x3BA2B00)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BA2EE0)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3BA2C60)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3BA2E90)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3BA2E70)
#define SYSTEM_TYPELOADEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3BA2D00)

namespace System
{
	inline static constexpr unsigned int TypeLoadException_TypeDefinitionIndex = 11143;

	class TypeLoadException : public ::System::SystemException
	{
	public:
		::System::String* ClassName; // 0x90
		::System::String* AssemblyName; // 0x98
		::System::String* MessageArg; // 0xA0
		::System::Int32 ResourceId; // 0xA8

		::System::Void SetMessageField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_SETMESSAGEFIELD_OFFSET))(this);
		}

		::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1(::System::String* FB6493F8788CE54A, ::System::String* B84A4D8260C22648)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_1_OFFSET))(this, FB6493F8788CE54A, B84A4D8260C22648);
		}

		::System::Void _ctor_2(::System::String* FB6493F8788CE54A, ::System::String* B84A4D8260C22648, ::System::String* A6D84984F120C1CC, ::System::Int32 E192053FE4767177)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_2_OFFSET))(this, FB6493F8788CE54A, B84A4D8260C22648, A6D84984F120C1CC, E192053FE4767177);
		}

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_3_OFFSET))(this);
		}

		::System::Void _ctor_4(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION__CTOR_4_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void GetObjectData(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_GETOBJECTDATA_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPELOADEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}
	};
}
