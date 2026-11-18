#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HLLMHIAANOG.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define DJJPKAJPPDL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13448BF0)
#define DJJPKAJPPDL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13448910)
#define DJJPKAJPPDL__CTOR_OFFSET UNITYSDK_OFFSET(0x13448EE0)

inline static constexpr unsigned int DJJPKAJPPDL_TypeDefinitionIndex = 61200;

class DJJPKAJPPDL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJPKAJPPDL__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::HLLMHIAANOG CNEKIHBHPPJ, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::HLLMHIAANOG, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + DJJPKAJPPDL_SERIALIZE_OFFSET))(this, KJOELGPFKDM, CNEKIHBHPPJ, PPDBEALANGE);
	}

	::HLLMHIAANOG Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::HLLMHIAANOG(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + DJJPKAJPPDL_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
