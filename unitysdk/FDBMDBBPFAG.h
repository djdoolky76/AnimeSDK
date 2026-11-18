#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MoleMole { class BubbleGroupPlayGraphContent; }

#define FDBMDBBPFAG_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x141968B0)
#define FDBMDBBPFAG_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14196670)
#define FDBMDBBPFAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x14196B20)
#define FDBMDBBPFAG__CTOR_OFFSET UNITYSDK_OFFSET(0x14196B10)

inline static constexpr unsigned int FDBMDBBPFAG_TypeDefinitionIndex = 61033;

class FDBMDBBPFAG : public ::System::Object
{
public:
	static ::FDBMDBBPFAG** StaticGet_NJLLMPCDOEB()
	{
		return (::FDBMDBBPFAG**)Il2CppClass::FromTypeDefinitionIndex(FDBMDBBPFAG_TypeDefinitionIndex)->GetStaticField(0x376C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBMDBBPFAG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDBMDBBPFAG__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::MoleMole::BubbleGroupPlayGraphContent* IAGBNIMFNAL, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::BubbleGroupPlayGraphContent*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + FDBMDBBPFAG_SERIALIZE_OFFSET))(this, KJOELGPFKDM, IAGBNIMFNAL, PPDBEALANGE);
	}

	::MoleMole::BubbleGroupPlayGraphContent* Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::MoleMole::BubbleGroupPlayGraphContent*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + FDBMDBBPFAG_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
