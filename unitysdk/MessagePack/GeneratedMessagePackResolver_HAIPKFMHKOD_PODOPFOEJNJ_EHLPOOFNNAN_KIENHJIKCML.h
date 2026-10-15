#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
class FCLBAFJKCPL;
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_KIENHJIKCML_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7598E0)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_KIENHJIKCML_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C77BF60)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_KIENHJIKCML_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C77BEB0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_KIENHJIKCML_TypeDefinitionIndex = 36147;

	class GeneratedMessagePackResolver_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_KIENHJIKCML : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_KIENHJIKCML_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::FCLBAFJKCPL* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::FCLBAFJKCPL*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_KIENHJIKCML_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::FCLBAFJKCPL* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::FCLBAFJKCPL*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_KIENHJIKCML_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
