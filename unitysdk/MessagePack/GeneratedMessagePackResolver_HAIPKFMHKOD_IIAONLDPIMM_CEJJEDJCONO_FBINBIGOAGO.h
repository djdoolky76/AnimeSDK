#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
class JCFCFDIFPFB;
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_FBINBIGOAGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C759640)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_FBINBIGOAGO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C75DE20)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_FBINBIGOAGO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C75DBF0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_FBINBIGOAGO_TypeDefinitionIndex = 36099;

	class GeneratedMessagePackResolver_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_FBINBIGOAGO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_FBINBIGOAGO_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::JCFCFDIFPFB* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::JCFCFDIFPFB*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_FBINBIGOAGO_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::JCFCFDIFPFB* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::JCFCFDIFPFB*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_FBINBIGOAGO_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
