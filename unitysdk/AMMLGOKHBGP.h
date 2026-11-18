#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/OMGFCFDABLN.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define AMMLGOKHBGP_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D0AA40)
#define AMMLGOKHBGP_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D0A9A0)
#define AMMLGOKHBGP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D0ABA0)

inline static constexpr unsigned int AMMLGOKHBGP_TypeDefinitionIndex = 93158;

class AMMLGOKHBGP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMLGOKHBGP__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::OMGFCFDABLN EGEGIMGMJHN, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::OMGFCFDABLN, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + AMMLGOKHBGP_SERIALIZE_OFFSET))(this, KJOELGPFKDM, EGEGIMGMJHN, PPDBEALANGE);
	}

	::OMGFCFDABLN Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::OMGFCFDABLN(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + AMMLGOKHBGP_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
