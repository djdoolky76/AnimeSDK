#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEOPMCHBGNM.h"
#include "unitysdk/COBABJOLFLG.h"
#include "unitysdk/HLLMHIAANOG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/OEDGDCLJLGF.h"

namespace MessagePack { class MessagePackSerializerOptions; }
template <typename T> class PGHMNNJKKHA_1;

#define HCEMDEIFKBA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11007850)
#define HCEMDEIFKBA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11007550)
#define HCEMDEIFKBA__CTOR_OFFSET UNITYSDK_OFFSET(0x11007DD0)

inline static constexpr unsigned int HCEMDEIFKBA_TypeDefinitionIndex = 72825;

class HCEMDEIFKBA : public ::System::Object
{
public:
	::PGHMNNJKKHA_1<::CEOPMCHBGNM>* LGPNKCAAOGP; // 0x10
	::PGHMNNJKKHA_1<::HLLMHIAANOG>* JIHKCHNMLHO; // 0x18
	::PGHMNNJKKHA_1<::COBABJOLFLG>* KONEGADBCIO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEMDEIFKBA__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::OEDGDCLJLGF DDLHDNAMHPB, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::OEDGDCLJLGF, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + HCEMDEIFKBA_SERIALIZE_OFFSET))(this, KJOELGPFKDM, DDLHDNAMHPB, PPDBEALANGE);
	}

	::OEDGDCLJLGF Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::OEDGDCLJLGF(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + HCEMDEIFKBA_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
