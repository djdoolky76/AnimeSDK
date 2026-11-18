#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FMLMKEKGHOF.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define DDHFIENBCNN_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1832CCF0)
#define DDHFIENBCNN_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1832CC60)
#define DDHFIENBCNN__CTOR_OFFSET UNITYSDK_OFFSET(0x1832CDB0)

inline static constexpr unsigned int DDHFIENBCNN_TypeDefinitionIndex = 76059;

class DDHFIENBCNN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHFIENBCNN__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::FMLMKEKGHOF CPNMOOANEBL, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::FMLMKEKGHOF, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + DDHFIENBCNN_SERIALIZE_OFFSET))(this, KJOELGPFKDM, CPNMOOANEBL, PPDBEALANGE);
	}

	::FMLMKEKGHOF Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::FMLMKEKGHOF(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + DDHFIENBCNN_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
