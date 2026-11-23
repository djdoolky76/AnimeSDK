#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x3C6A1C0)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3C6A320)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x3C6A600)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C6A440)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C6A450)
#define SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3C6A590)

namespace System::Reflection
{
	inline static constexpr unsigned int ReflectionTypeLoadException_TypeDefinitionIndex = 11675;

	class ReflectionTypeLoadException : public ::System::SystemException
	{
	public:
		::Il2CppArray<::System::Type*>* _Types_k__BackingField; // 0x90
		::Il2CppArray<::System::Exception*>* _LoaderExceptions_k__BackingField; // 0x98

		::System::Void GetObjectData(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_GETOBJECTDATA_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::String* CreateString(::System::Boolean AB43CEA72329B141)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_CREATESTRING_OFFSET))(this, AB43CEA72329B141);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_TOSTRING_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void _ctor(::Il2CppArray<::System::Type*>* A555107D26C4D9B2, ::Il2CppArray<::System::Exception*>* F1CADDF7425917AF)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Exception*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_OFFSET))(this, A555107D26C4D9B2, F1CADDF7425917AF);
		}

		::System::Void _ctor_1(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONTYPELOADEXCEPTION__CTOR_1_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}
	};
}
