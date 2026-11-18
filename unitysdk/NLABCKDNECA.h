#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/PABKFONJHNH.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define NLABCKDNECA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1315D510)
#define NLABCKDNECA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1315D490)
#define NLABCKDNECA__CTOR_OFFSET UNITYSDK_OFFSET(0x1315D660)

inline static constexpr unsigned int NLABCKDNECA_TypeDefinitionIndex = 67234;

class NLABCKDNECA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLABCKDNECA__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::PABKFONJHNH CPNMOOANEBL, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::PABKFONJHNH, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + NLABCKDNECA_SERIALIZE_OFFSET))(this, KJOELGPFKDM, CPNMOOANEBL, PPDBEALANGE);
	}

	::PABKFONJHNH Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::PABKFONJHNH(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + NLABCKDNECA_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
