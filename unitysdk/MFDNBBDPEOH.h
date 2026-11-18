#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JKKJJHBHFOE.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define MFDNBBDPEOH_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D1F040)
#define MFDNBBDPEOH_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D1EFC0)
#define MFDNBBDPEOH__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1F0B0)

inline static constexpr unsigned int MFDNBBDPEOH_TypeDefinitionIndex = 62185;

class MFDNBBDPEOH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDNBBDPEOH__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::JKKJJHBHFOE GGPMFLKEIJA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::JKKJJHBHFOE, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MFDNBBDPEOH_SERIALIZE_OFFSET))(this, KJOELGPFKDM, GGPMFLKEIJA, PPDBEALANGE);
	}

	::JKKJJHBHFOE Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::JKKJJHBHFOE(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MFDNBBDPEOH_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
