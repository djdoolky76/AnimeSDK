#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
class JFAIGANLDBK;
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_CMHHJOHIKFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7596E0)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_CMHHJOHIKFG_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C75EE50)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_CMHHJOHIKFG_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C75EC10)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_CMHHJOHIKFG_TypeDefinitionIndex = 36110;

	class GeneratedMessagePackResolver_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_CMHHJOHIKFG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_CMHHJOHIKFG_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::JFAIGANLDBK* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::JFAIGANLDBK*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_CMHHJOHIKFG_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::JFAIGANLDBK* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::JFAIGANLDBK*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_GJMOEHGMCGO_CMHHJOHIKFG_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
