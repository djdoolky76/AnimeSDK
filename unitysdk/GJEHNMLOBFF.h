#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/OMGFCFDABLN.h"

class GAMICCELBAG;
namespace MessagePack { class MessagePackSerializerOptions; }

#define GJEHNMLOBFF_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0x15F23850)
#define GJEHNMLOBFF_JIDMADDMGIE_OFFSET UNITYSDK_OFFSET(0x15F238B0)
#define GJEHNMLOBFF_MMCPDBCHPNH_OFFSET UNITYSDK_OFFSET(0x15F23960)
#define GJEHNMLOBFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F23920)
#define GJEHNMLOBFF__CTOR_OFFSET UNITYSDK_OFFSET(0x15F23910)

inline static constexpr unsigned int GJEHNMLOBFF_TypeDefinitionIndex = 51111;

class GJEHNMLOBFF : public ::System::Object
{
public:
	static ::GJEHNMLOBFF** StaticGet_DDGNFJDLOKA()
	{
		return (::GJEHNMLOBFF**)Il2CppClass::FromTypeDefinitionIndex(GJEHNMLOBFF_TypeDefinitionIndex)->GetStaticField(0x3E010);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEHNMLOBFF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJEHNMLOBFF__CCTOR_OFFSET))();
	}

	::System::Void JGECEJIHMLG(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::GAMICCELBAG* EGEGIMGMJHN, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::GAMICCELBAG*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + GJEHNMLOBFF_JGECEJIHMLG_OFFSET))(this, KJOELGPFKDM, EGEGIMGMJHN, PPDBEALANGE);
	}

	::GAMICCELBAG* JIDMADDMGIE(::OMGFCFDABLN& LOACBJBANNC, ::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::GAMICCELBAG*(*)(::PVOID, ::OMGFCFDABLN&, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + GJEHNMLOBFF_JIDMADDMGIE_OFFSET))(this, LOACBJBANNC, FAJNJHEJMEA, PPDBEALANGE);
	}

	::GAMICCELBAG* MMCPDBCHPNH(::OMGFCFDABLN& LOACBJBANNC, ::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::GAMICCELBAG*(*)(::PVOID, ::OMGFCFDABLN&, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + GJEHNMLOBFF_MMCPDBCHPNH_OFFSET))(this, LOACBJBANNC, FAJNJHEJMEA, PPDBEALANGE);
	}
};
