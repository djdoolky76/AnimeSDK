#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/OMGFCFDABLN.h"

class GAMICCELBAG;
class LCFAKNCOMEF;
namespace MessagePack { class MessagePackSerializerOptions; }

#define OLMJLHPLLEL_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0x16F84AF0)
#define OLMJLHPLLEL_JIDMADDMGIE_OFFSET UNITYSDK_OFFSET(0x16F84D30)

inline static constexpr unsigned int OLMJLHPLLEL_TypeDefinitionIndex = 89789;

class OLMJLHPLLEL : public ::System::Object
{
public:
	static ::System::Void JGECEJIHMLG(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::LCFAKNCOMEF* GLGDAJADIFK, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::LCFAKNCOMEF*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + OLMJLHPLLEL_JGECEJIHMLG_OFFSET))(KJOELGPFKDM, GLGDAJADIFK, PPDBEALANGE);
	}

	static ::GAMICCELBAG* JIDMADDMGIE(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::OMGFCFDABLN& LOACBJBANNC, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::GAMICCELBAG*(*)(::MessagePack::MessagePackReader&, ::OMGFCFDABLN&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + OLMJLHPLLEL_JIDMADDMGIE_OFFSET))(FAJNJHEJMEA, LOACBJBANNC, PPDBEALANGE);
	}
};
