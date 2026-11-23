#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
namespace System { class Exception; }
namespace System { class String; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x3CD9FC0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3CDA020)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B5EFC0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3CDA0B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3CDA040)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationException_TypeDefinitionIndex = 10683;

	class SerializationException : public ::System::SystemException
	{
	public:
		static ::System::String** StaticGet_s_nullMessage()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SerializationException_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4);
		}

		::System::Void _ctor_2(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_2_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_3(::System::String* B083BE7841B347C4, ::System::Exception* FA644E43CA202E59)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CTOR_3_OFFSET))(this, B083BE7841B347C4, FA644E43CA202E59);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONEXCEPTION__CCTOR_OFFSET))();
		}
	};
}
