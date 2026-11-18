#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BLLKKBMFHCC.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define LNPGDPEEEPM_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16C6A200)
#define LNPGDPEEEPM_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16C69F90)
#define LNPGDPEEEPM__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6A4B0)

inline static constexpr unsigned int LNPGDPEEEPM_TypeDefinitionIndex = 65374;

class LNPGDPEEEPM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNPGDPEEEPM__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::BLLKKBMFHCC CPNMOOANEBL, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::BLLKKBMFHCC, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + LNPGDPEEEPM_SERIALIZE_OFFSET))(this, KJOELGPFKDM, CPNMOOANEBL, PPDBEALANGE);
	}

	::BLLKKBMFHCC Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::BLLKKBMFHCC(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + LNPGDPEEEPM_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
