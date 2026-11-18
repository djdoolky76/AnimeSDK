#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFPLNFLBBKI.h"
#include "unitysdk/OEDGDCLJLGF.h"
#include "unitysdk/PHAHJCOGLJK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CMOPPAAGJLK.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }
template <typename T> class PGHMNNJKKHA_1;

#define LPDILFKHKJH_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D4B2E0)
#define LPDILFKHKJH_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12D4B100)
#define LPDILFKHKJH__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4B510)

inline static constexpr unsigned int LPDILFKHKJH_TypeDefinitionIndex = 72021;

class LPDILFKHKJH : public ::System::Object
{
public:
	::PGHMNNJKKHA_1<::PHAHJCOGLJK>* GDECLAIHDFK; // 0x10
	::PGHMNNJKKHA_1<::OEDGDCLJLGF>* BBCGDHPEDDF; // 0x18
	::PGHMNNJKKHA_1<::HFPLNFLBBKI>* LGPNKCAAOGP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDILFKHKJH__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::CMOPPAAGJLK CPFFPLPPDDI, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::CMOPPAAGJLK, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + LPDILFKHKJH_SERIALIZE_OFFSET))(this, KJOELGPFKDM, CPFFPLPPDDI, PPDBEALANGE);
	}

	::CMOPPAAGJLK Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::CMOPPAAGJLK(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + LPDILFKHKJH_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
