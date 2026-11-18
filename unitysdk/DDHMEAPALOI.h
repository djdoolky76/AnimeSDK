#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/NGAFLAACDGG.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define DDHMEAPALOI_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12BACE70)
#define DDHMEAPALOI_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12BACA60)
#define DDHMEAPALOI__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAD2E0)

inline static constexpr unsigned int DDHMEAPALOI_TypeDefinitionIndex = 67727;

class DDHMEAPALOI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHMEAPALOI__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::NGAFLAACDGG CPNMOOANEBL, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::NGAFLAACDGG, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + DDHMEAPALOI_SERIALIZE_OFFSET))(this, KJOELGPFKDM, CPNMOOANEBL, PPDBEALANGE);
	}

	::NGAFLAACDGG Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::NGAFLAACDGG(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + DDHMEAPALOI_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
