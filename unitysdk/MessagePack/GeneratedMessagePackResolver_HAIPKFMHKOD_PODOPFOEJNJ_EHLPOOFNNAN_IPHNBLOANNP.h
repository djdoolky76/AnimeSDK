#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
class GFCOHGKHIPJ;
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_IPHNBLOANNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1606C1C0)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_IPHNBLOANNP_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1608B040)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_IPHNBLOANNP_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1608ACE0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_IPHNBLOANNP_TypeDefinitionIndex = 37097;

	class GeneratedMessagePackResolver_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_IPHNBLOANNP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_IPHNBLOANNP_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::GFCOHGKHIPJ* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::GFCOHGKHIPJ*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_IPHNBLOANNP_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::GFCOHGKHIPJ* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::GFCOHGKHIPJ*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_IPHNBLOANNP_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
