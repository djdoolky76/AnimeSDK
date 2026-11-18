#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CEOPMCHBGNM.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define PJHGPGAGCFJ_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x150CF890)
#define PJHGPGAGCFJ_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x150CF810)
#define PJHGPGAGCFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x150CF920)

inline static constexpr unsigned int PJHGPGAGCFJ_TypeDefinitionIndex = 69889;

class PJHGPGAGCFJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHGPGAGCFJ__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::CEOPMCHBGNM JIIJFHLJDLF, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::CEOPMCHBGNM, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + PJHGPGAGCFJ_SERIALIZE_OFFSET))(this, KJOELGPFKDM, JIIJFHLJDLF, PPDBEALANGE);
	}

	::CEOPMCHBGNM Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::CEOPMCHBGNM(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + PJHGPGAGCFJ_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
