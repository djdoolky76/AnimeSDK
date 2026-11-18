#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/JsonConverter.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace System { class Object; }
namespace System { class Type; }

#define STATETREEGAMEPLAY_CROWDSCHEMACONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x1C6BD7F0)
#define STATETREEGAMEPLAY_CROWDSCHEMACONVERTER_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6BD9B0)
#define STATETREEGAMEPLAY_CROWDSCHEMACONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x1C6BD5A0)
#define STATETREEGAMEPLAY_CROWDSCHEMACONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x1C6BD370)
#define STATETREEGAMEPLAY_CROWDSCHEMACONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6BD860)
#define STATETREEGAMEPLAY_CROWDSCHEMACONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6BD9A0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int CrowdSchemaConverter_TypeDefinitionIndex = 70265;

	class CrowdSchemaConverter : public ::Newtonsoft::Json::JsonConverter
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDSCHEMACONVERTER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDSCHEMACONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDSCHEMACONVERTER_WRITEJSON_OFFSET))(this, writer, value, serializer);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDSCHEMACONVERTER_READJSON_OFFSET))(this, reader, objectType, existingValue, serializer);
		}

		::System::Boolean CanConvert(::System::Type* objectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDSCHEMACONVERTER_CANCONVERT_OFFSET))(this, objectType);
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_CROWDSCHEMACONVERTER_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
