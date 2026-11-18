#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MoleMole::FlowCanvas::Nodes { class LDSetInLevelStateGroup_StateGroupKeyValue; }

#define PMMMNKEHBBI_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13725C60)
#define PMMMNKEHBBI_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13725BE0)
#define PMMMNKEHBBI__CCTOR_OFFSET UNITYSDK_OFFSET(0x13725D20)
#define PMMMNKEHBBI__CTOR_OFFSET UNITYSDK_OFFSET(0x13725D10)

inline static constexpr unsigned int PMMMNKEHBBI_TypeDefinitionIndex = 41359;

class PMMMNKEHBBI : public ::System::Object
{
public:
	static ::PMMMNKEHBBI** StaticGet_NJLLMPCDOEB()
	{
		return (::PMMMNKEHBBI**)Il2CppClass::FromTypeDefinitionIndex(PMMMNKEHBBI_TypeDefinitionIndex)->GetStaticField(0x4C9E0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMMNKEHBBI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMMMNKEHBBI__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue* JGGCOOHPHFK, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + PMMMNKEHBBI_SERIALIZE_OFFSET))(this, KJOELGPFKDM, JGGCOOHPHFK, PPDBEALANGE);
	}

	::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue* Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupKeyValue*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + PMMMNKEHBBI_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
