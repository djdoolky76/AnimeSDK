#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KGNAEHLANOG.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define BCKMKNKBADC_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1701E9F0)
#define BCKMKNKBADC_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1701E970)
#define BCKMKNKBADC__CTOR_OFFSET UNITYSDK_OFFSET(0x1701EA60)

inline static constexpr unsigned int BCKMKNKBADC_TypeDefinitionIndex = 92245;

class BCKMKNKBADC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCKMKNKBADC__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::KGNAEHLANOG BIEAAEANOKD, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::KGNAEHLANOG, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + BCKMKNKBADC_SERIALIZE_OFFSET))(this, KJOELGPFKDM, BIEAAEANOKD, PPDBEALANGE);
	}

	::KGNAEHLANOG Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::KGNAEHLANOG(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + BCKMKNKBADC_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
