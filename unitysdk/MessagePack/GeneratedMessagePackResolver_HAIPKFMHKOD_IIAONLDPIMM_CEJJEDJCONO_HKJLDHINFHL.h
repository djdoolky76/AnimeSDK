#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
class PCOMPBCHHKC;
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_HKJLDHINFHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C759670)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_HKJLDHINFHL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C763830)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_HKJLDHINFHL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C7634F0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_HKJLDHINFHL_TypeDefinitionIndex = 36102;

	class GeneratedMessagePackResolver_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_HKJLDHINFHL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_HKJLDHINFHL_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::PCOMPBCHHKC* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::PCOMPBCHHKC*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_HKJLDHINFHL_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::PCOMPBCHHKC* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::PCOMPBCHHKC*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_HKJLDHINFHL_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
