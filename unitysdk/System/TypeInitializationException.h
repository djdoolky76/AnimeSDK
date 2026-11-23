#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_TYPEINITIALIZATIONEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3B8A830)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x3B8AB10)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B8A940)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B8A990)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3B8AAC0)
#define SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B8AA20)

namespace System
{
	inline static constexpr unsigned int TypeInitializationException_TypeDefinitionIndex = 11079;

	class TypeInitializationException : public ::System::SystemException
	{
	public:
		::System::String* _typeName; // 0x90

		::System::Void _ctor(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::String* get_TypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION_GET_TYPENAME_OFFSET))(this);
		}

		::System::Void GetObjectData(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION_GETOBJECTDATA_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* EA13ED3B97933823, ::System::Exception* FA644E43CA202E59)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_2_OFFSET))(this, EA13ED3B97933823, FA644E43CA202E59);
		}

		::System::Void _ctor_3(::System::String* EA13ED3B97933823, ::System::String* B083BE7841B347C4, ::System::Exception* FA644E43CA202E59)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEINITIALIZATIONEXCEPTION__CTOR_3_OFFSET))(this, EA13ED3B97933823, B083BE7841B347C4, FA644E43CA202E59);
		}
	};
}
