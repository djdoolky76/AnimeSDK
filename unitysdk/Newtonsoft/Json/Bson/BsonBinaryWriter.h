#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::IO { class BinaryWriter; }
namespace System::Text { class Encoding; }

#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C348470)
#define NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1C3483E0)

namespace Newtonsoft::Json::Bson
{
	inline static constexpr unsigned int BsonBinaryWriter_TypeDefinitionIndex = 9847;

	class BsonBinaryWriter : public ::System::Object
	{
	public:
		::System::IO::BinaryWriter* _writer; // 0x10
		static ::System::Text::Encoding** StaticGet_Encoding()
		{
			return (::System::Text::Encoding**)UnitySDK::FromName("Newtonsoft.Json.Bson", "BsonBinaryWriter")->GetStaticField(0x31650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_CCTOR_OFFSET))();
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_BSON_BSONBINARYWRITER_FLUSH_OFFSET))(this);
		}

	};
}
