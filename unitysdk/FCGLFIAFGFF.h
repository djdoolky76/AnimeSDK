#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/OMGFCFDABLN.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define FCGLFIAFGFF_EMNLAGPKMIF_OFFSET UNITYSDK_OFFSET(0x14194490)
#define FCGLFIAFGFF_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0x14193A40)
#define FCGLFIAFGFF_JIDMADDMGIE_OFFSET UNITYSDK_OFFSET(0x14193F30)
#define FCGLFIAFGFF_OELGHLDCCNF_OFFSET UNITYSDK_OFFSET(0x14194500)
#define FCGLFIAFGFF__CTOR_OFFSET UNITYSDK_OFFSET(0x14194480)

inline static constexpr unsigned int FCGLFIAFGFF_TypeDefinitionIndex = 60564;

class FCGLFIAFGFF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGLFIAFGFF__CTOR_OFFSET))(this);
	}

	::System::Void JGECEJIHMLG(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::OMGFCFDABLN& LOACBJBANNC, ::System::Object* EGEGIMGMJHN, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::OMGFCFDABLN&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + FCGLFIAFGFF_JGECEJIHMLG_OFFSET))(this, KJOELGPFKDM, LOACBJBANNC, EGEGIMGMJHN, PPDBEALANGE);
	}

	::System::Object* JIDMADDMGIE(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::OMGFCFDABLN& LOACBJBANNC, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::OMGFCFDABLN&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + FCGLFIAFGFF_JIDMADDMGIE_OFFSET))(this, FAJNJHEJMEA, LOACBJBANNC, PPDBEALANGE);
	}

	::System::Object* EMNLAGPKMIF(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::OMGFCFDABLN& LOACBJBANNC, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::OMGFCFDABLN&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + FCGLFIAFGFF_EMNLAGPKMIF_OFFSET))(this, FAJNJHEJMEA, LOACBJBANNC, PPDBEALANGE);
	}

	::System::Void OELGHLDCCNF(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::OMGFCFDABLN& LOACBJBANNC, ::System::Object* EGEGIMGMJHN, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::OMGFCFDABLN&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + FCGLFIAFGFF_OELGHLDCCNF_OFFSET))(this, KJOELGPFKDM, LOACBJBANNC, EGEGIMGMJHN, PPDBEALANGE);
	}
};
