#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/OMGFCFDABLN.h"

class GAMICCELBAG;
namespace MessagePack { class MessagePackSerializerOptions; }

#define MOMAIEDKJGN_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0xFA7E690)
#define MOMAIEDKJGN_JIDMADDMGIE_OFFSET UNITYSDK_OFFSET(0xFA7EEC0)
#define MOMAIEDKJGN_MMCPDBCHPNH_OFFSET UNITYSDK_OFFSET(0xFA7F8A0)
#define MOMAIEDKJGN__CTOR_OFFSET UNITYSDK_OFFSET(0xFA7F890)

inline static constexpr unsigned int MOMAIEDKJGN_TypeDefinitionIndex = 52774;

class MOMAIEDKJGN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMAIEDKJGN__CTOR_OFFSET))(this);
	}

	::System::Void JGECEJIHMLG(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::GAMICCELBAG* EGEGIMGMJHN, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::GAMICCELBAG*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MOMAIEDKJGN_JGECEJIHMLG_OFFSET))(this, KJOELGPFKDM, EGEGIMGMJHN, PPDBEALANGE);
	}

	::GAMICCELBAG* JIDMADDMGIE(::OMGFCFDABLN& LOACBJBANNC, ::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::GAMICCELBAG*(*)(::PVOID, ::OMGFCFDABLN&, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MOMAIEDKJGN_JIDMADDMGIE_OFFSET))(this, LOACBJBANNC, FAJNJHEJMEA, PPDBEALANGE);
	}

	::GAMICCELBAG* MMCPDBCHPNH(::OMGFCFDABLN& LOACBJBANNC, ::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::GAMICCELBAG*(*)(::PVOID, ::OMGFCFDABLN&, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MOMAIEDKJGN_MMCPDBCHPNH_OFFSET))(this, LOACBJBANNC, FAJNJHEJMEA, PPDBEALANGE);
	}
};
