#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATORPROPERTYCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3F6FE0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerInternalReader_CreatorPropertyContext_TypeDefinitionIndex = 9737;

	class JsonSerializerInternalReader_CreatorPropertyContext : public ::System::Object
	{
	public:
		::System::Object* Value; // 0x10
		::System::String* Name; // 0x18
		::Newtonsoft::Json::Serialization::JsonProperty* Property; // 0x20
		::Newtonsoft::Json::Serialization::JsonProperty* ConstructorProperty; // 0x28
		::System::Boolean Used; // 0x30
		::System::Byte _padding0[0x3];
		::System::Nullable* Presence; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATORPROPERTYCONTEXT_CTOR_OFFSET))(this);
		}

	};
}
