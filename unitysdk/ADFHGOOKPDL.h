#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/COBABJOLFLG.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define ADFHGOOKPDL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12647160)
#define ADFHGOOKPDL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12646CD0)
#define ADFHGOOKPDL__CTOR_OFFSET UNITYSDK_OFFSET(0x12647630)

inline static constexpr unsigned int ADFHGOOKPDL_TypeDefinitionIndex = 81406;

class ADFHGOOKPDL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFHGOOKPDL__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::COBABJOLFLG OPJCHPGFPPG, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::COBABJOLFLG, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + ADFHGOOKPDL_SERIALIZE_OFFSET))(this, KJOELGPFKDM, OPJCHPGFPPG, PPDBEALANGE);
	}

	::COBABJOLFLG Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::COBABJOLFLG(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + ADFHGOOKPDL_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
