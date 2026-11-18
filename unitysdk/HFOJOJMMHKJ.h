#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/OMGFCFDABLN.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define HFOJOJMMHKJ_EMNLAGPKMIF_OFFSET UNITYSDK_OFFSET(0x16CED7C0)
#define HFOJOJMMHKJ_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0x16CECCE0)
#define HFOJOJMMHKJ_JIDMADDMGIE_OFFSET UNITYSDK_OFFSET(0x16CED1D0)
#define HFOJOJMMHKJ_OELGHLDCCNF_OFFSET UNITYSDK_OFFSET(0x16CED730)
#define HFOJOJMMHKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16CED720)

inline static constexpr unsigned int HFOJOJMMHKJ_TypeDefinitionIndex = 67508;

class HFOJOJMMHKJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFOJOJMMHKJ__CTOR_OFFSET))(this);
	}

	::System::Void JGECEJIHMLG(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::OMGFCFDABLN& LOACBJBANNC, ::System::Object* EGEGIMGMJHN, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::OMGFCFDABLN&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + HFOJOJMMHKJ_JGECEJIHMLG_OFFSET))(this, KJOELGPFKDM, LOACBJBANNC, EGEGIMGMJHN, PPDBEALANGE);
	}

	::System::Object* JIDMADDMGIE(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::OMGFCFDABLN& LOACBJBANNC, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::OMGFCFDABLN&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + HFOJOJMMHKJ_JIDMADDMGIE_OFFSET))(this, FAJNJHEJMEA, LOACBJBANNC, PPDBEALANGE);
	}

	::System::Void OELGHLDCCNF(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::OMGFCFDABLN& LOACBJBANNC, ::System::Object* EGEGIMGMJHN, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::OMGFCFDABLN&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + HFOJOJMMHKJ_OELGHLDCCNF_OFFSET))(this, KJOELGPFKDM, LOACBJBANNC, EGEGIMGMJHN, PPDBEALANGE);
	}

	::System::Object* EMNLAGPKMIF(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::OMGFCFDABLN& LOACBJBANNC, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::OMGFCFDABLN&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + HFOJOJMMHKJ_EMNLAGPKMIF_OFFSET))(this, FAJNJHEJMEA, LOACBJBANNC, PPDBEALANGE);
	}
};
