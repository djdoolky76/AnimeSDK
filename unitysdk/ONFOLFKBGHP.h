#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/OMGFCFDABLN.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define ONFOLFKBGHP_EMNLAGPKMIF_OFFSET UNITYSDK_OFFSET(0xFB9B250)
#define ONFOLFKBGHP_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0xFB9B0B0)
#define ONFOLFKBGHP_JIDMADDMGIE_OFFSET UNITYSDK_OFFSET(0xFB9B120)
#define ONFOLFKBGHP_OELGHLDCCNF_OFFSET UNITYSDK_OFFSET(0xFB9B1D0)
#define ONFOLFKBGHP__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB9B190)
#define ONFOLFKBGHP__CTOR_OFFSET UNITYSDK_OFFSET(0xFB9B180)

inline static constexpr unsigned int ONFOLFKBGHP_TypeDefinitionIndex = 54714;

class ONFOLFKBGHP : public ::System::Object
{
public:
	static ::ONFOLFKBGHP** StaticGet_DDGNFJDLOKA()
	{
		return (::ONFOLFKBGHP**)Il2CppClass::FromTypeDefinitionIndex(ONFOLFKBGHP_TypeDefinitionIndex)->GetStaticField(0x3E020);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFOLFKBGHP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONFOLFKBGHP__CCTOR_OFFSET))();
	}

	::System::Void JGECEJIHMLG(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::OMGFCFDABLN& LOACBJBANNC, ::System::Object* HEAJMIGHEHG, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::OMGFCFDABLN&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + ONFOLFKBGHP_JGECEJIHMLG_OFFSET))(this, KJOELGPFKDM, LOACBJBANNC, HEAJMIGHEHG, PPDBEALANGE);
	}

	::System::Object* JIDMADDMGIE(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::OMGFCFDABLN& LOACBJBANNC, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::OMGFCFDABLN&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + ONFOLFKBGHP_JIDMADDMGIE_OFFSET))(this, FAJNJHEJMEA, LOACBJBANNC, PPDBEALANGE);
	}

	::System::Void OELGHLDCCNF(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::OMGFCFDABLN& LOACBJBANNC, ::System::Object* EGEGIMGMJHN, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::OMGFCFDABLN&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + ONFOLFKBGHP_OELGHLDCCNF_OFFSET))(this, KJOELGPFKDM, LOACBJBANNC, EGEGIMGMJHN, PPDBEALANGE);
	}

	::System::Object* EMNLAGPKMIF(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::OMGFCFDABLN& LOACBJBANNC, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::OMGFCFDABLN&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + ONFOLFKBGHP_EMNLAGPKMIF_OFFSET))(this, FAJNJHEJMEA, LOACBJBANNC, PPDBEALANGE);
	}
};
