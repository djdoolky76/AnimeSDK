#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/MoleMole/BubbleSpeakerPair.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define FIJMFGGGEDD_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17149F60)
#define FIJMFGGGEDD_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17149EE0)
#define FIJMFGGGEDD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1714A000)
#define FIJMFGGGEDD__CTOR_OFFSET UNITYSDK_OFFSET(0x17149FF0)

inline static constexpr unsigned int FIJMFGGGEDD_TypeDefinitionIndex = 60140;

class FIJMFGGGEDD : public ::System::Object
{
public:
	static ::FIJMFGGGEDD** StaticGet_NJLLMPCDOEB()
	{
		return (::FIJMFGGGEDD**)Il2CppClass::FromTypeDefinitionIndex(FIJMFGGGEDD_TypeDefinitionIndex)->GetStaticField(0x46210);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJMFGGGEDD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIJMFGGGEDD__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::MoleMole::BubbleSpeakerPair OGNAAAPIMJO, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::BubbleSpeakerPair, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + FIJMFGGGEDD_SERIALIZE_OFFSET))(this, KJOELGPFKDM, OGNAAAPIMJO, PPDBEALANGE);
	}

	::MoleMole::BubbleSpeakerPair Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::MoleMole::BubbleSpeakerPair(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + FIJMFGGGEDD_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
