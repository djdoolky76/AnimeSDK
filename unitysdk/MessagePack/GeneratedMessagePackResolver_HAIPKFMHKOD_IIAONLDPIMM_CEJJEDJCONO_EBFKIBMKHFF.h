#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/SpawnEntityMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_EBFKIBMKHFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7595C0)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_EBFKIBMKHFF_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C75DB10)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_EBFKIBMKHFF_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C75DAA0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_EBFKIBMKHFF_TypeDefinitionIndex = 36120;

	class GeneratedMessagePackResolver_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_EBFKIBMKHFF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_EBFKIBMKHFF_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::RPG::Client::LittleGameShare::SpawnEntityMode a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::RPG::Client::LittleGameShare::SpawnEntityMode, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_EBFKIBMKHFF_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LittleGameShare::SpawnEntityMode Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::RPG::Client::LittleGameShare::SpawnEntityMode(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_IIAONLDPIMM_CEJJEDJCONO_EBFKIBMKHFF_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
