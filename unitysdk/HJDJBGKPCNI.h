#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKKJJHBHFOE.h"
#include "unitysdk/KGNAEHLANOG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/PHAHJCOGLJK.h"

namespace MessagePack { class MessagePackSerializerOptions; }
template <typename T> class PGHMNNJKKHA_1;

#define HJDJBGKPCNI_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1494F520)
#define HJDJBGKPCNI_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1494F0A0)
#define HJDJBGKPCNI__CTOR_OFFSET UNITYSDK_OFFSET(0x1494F9D0)

inline static constexpr unsigned int HJDJBGKPCNI_TypeDefinitionIndex = 78025;

class HJDJBGKPCNI : public ::System::Object
{
public:
	::PGHMNNJKKHA_1<::JKKJJHBHFOE>* KONEGADBCIO; // 0x10
	::PGHMNNJKKHA_1<::KGNAEHLANOG>* JIHKCHNMLHO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDJBGKPCNI__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::PHAHJCOGLJK IGIIJFGDOGO, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::PHAHJCOGLJK, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + HJDJBGKPCNI_SERIALIZE_OFFSET))(this, KJOELGPFKDM, IGIIJFGDOGO, PPDBEALANGE);
	}

	::PHAHJCOGLJK Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::PHAHJCOGLJK(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + HJDJBGKPCNI_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
