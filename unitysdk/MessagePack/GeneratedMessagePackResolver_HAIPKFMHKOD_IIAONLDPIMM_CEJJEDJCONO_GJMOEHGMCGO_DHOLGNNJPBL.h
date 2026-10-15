#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
class HKKAKOCGGFD;
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_DHOLGNNJPBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C759730)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_DHOLGNNJPBL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C75FB60)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_DHOLGNNJPBL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C75FAA0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_DHOLGNNJPBL_TypeDefinitionIndex = 36115;

	class GeneratedMessagePackResolver_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_DHOLGNNJPBL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_DHOLGNNJPBL_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::HKKAKOCGGFD* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::HKKAKOCGGFD*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_DHOLGNNJPBL_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::HKKAKOCGGFD* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::HKKAKOCGGFD*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_DHOLGNNJPBL_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
