#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/OMGFCFDABLN.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define IAGAEKJGGOG_EMNLAGPKMIF_OFFSET UNITYSDK_OFFSET(0x1655D330)
#define IAGAEKJGGOG_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0x1655C080)
#define IAGAEKJGGOG_JIDMADDMGIE_OFFSET UNITYSDK_OFFSET(0x1655CAB0)
#define IAGAEKJGGOG_OELGHLDCCNF_OFFSET UNITYSDK_OFFSET(0x1655D2A0)
#define IAGAEKJGGOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1655D290)

inline static constexpr unsigned int IAGAEKJGGOG_TypeDefinitionIndex = 83806;

class IAGAEKJGGOG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGAEKJGGOG__CTOR_OFFSET))(this);
	}

	::System::Void JGECEJIHMLG(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::OMGFCFDABLN& LOACBJBANNC, ::System::Object* EGEGIMGMJHN, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::OMGFCFDABLN&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + IAGAEKJGGOG_JGECEJIHMLG_OFFSET))(this, KJOELGPFKDM, LOACBJBANNC, EGEGIMGMJHN, PPDBEALANGE);
	}

	::System::Object* JIDMADDMGIE(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::OMGFCFDABLN& LOACBJBANNC, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::OMGFCFDABLN&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + IAGAEKJGGOG_JIDMADDMGIE_OFFSET))(this, FAJNJHEJMEA, LOACBJBANNC, PPDBEALANGE);
	}

	::System::Void OELGHLDCCNF(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::OMGFCFDABLN& LOACBJBANNC, ::System::Object* EGEGIMGMJHN, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::OMGFCFDABLN&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + IAGAEKJGGOG_OELGHLDCCNF_OFFSET))(this, KJOELGPFKDM, LOACBJBANNC, EGEGIMGMJHN, PPDBEALANGE);
	}

	::System::Object* EMNLAGPKMIF(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::OMGFCFDABLN& LOACBJBANNC, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::OMGFCFDABLN&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + IAGAEKJGGOG_EMNLAGPKMIF_OFFSET))(this, FAJNJHEJMEA, LOACBJBANNC, PPDBEALANGE);
	}
};
