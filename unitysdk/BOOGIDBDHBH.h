#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HFPLNFLBBKI.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define BOOGIDBDHBH_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xFF941F0)
#define BOOGIDBDHBH_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xFF93DC0)
#define BOOGIDBDHBH__CTOR_OFFSET UNITYSDK_OFFSET(0xFF94640)

inline static constexpr unsigned int BOOGIDBDHBH_TypeDefinitionIndex = 57371;

class BOOGIDBDHBH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOGIDBDHBH__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::HFPLNFLBBKI EGEGIMGMJHN, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::HFPLNFLBBKI, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + BOOGIDBDHBH_SERIALIZE_OFFSET))(this, KJOELGPFKDM, EGEGIMGMJHN, PPDBEALANGE);
	}

	::HFPLNFLBBKI Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::HFPLNFLBBKI(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + BOOGIDBDHBH_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
