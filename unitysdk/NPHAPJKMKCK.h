#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/NFNCKCMAPAJ.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define NPHAPJKMKCK_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xFB37610)
#define NPHAPJKMKCK_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xFB37580)
#define NPHAPJKMKCK__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB37690)
#define NPHAPJKMKCK__CTOR_OFFSET UNITYSDK_OFFSET(0xFB37680)

inline static constexpr unsigned int NPHAPJKMKCK_TypeDefinitionIndex = 71958;

class NPHAPJKMKCK : public ::System::Object
{
public:
	static ::NPHAPJKMKCK** StaticGet_NJLLMPCDOEB()
	{
		return (::NPHAPJKMKCK**)Il2CppClass::FromTypeDefinitionIndex(NPHAPJKMKCK_TypeDefinitionIndex)->GetStaticField(0x50EC0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPHAPJKMKCK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPHAPJKMKCK__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::NFNCKCMAPAJ IAJGGBGNDOP, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::NFNCKCMAPAJ, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + NPHAPJKMKCK_SERIALIZE_OFFSET))(this, KJOELGPFKDM, IAJGGBGNDOP, PPDBEALANGE);
	}

	::NFNCKCMAPAJ Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::NFNCKCMAPAJ(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + NPHAPJKMKCK_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
