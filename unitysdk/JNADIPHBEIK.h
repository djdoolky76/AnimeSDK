#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

class OPCAMPLOOAO;
namespace MessagePack { class MessagePackSerializerOptions; }

#define JNADIPHBEIK_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13C3AE70)
#define JNADIPHBEIK_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13C3ADC0)
#define JNADIPHBEIK__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C3AF60)
#define JNADIPHBEIK__CTOR_OFFSET UNITYSDK_OFFSET(0x13C3AF50)

inline static constexpr unsigned int JNADIPHBEIK_TypeDefinitionIndex = 59991;

class JNADIPHBEIK : public ::System::Object
{
public:
	static ::JNADIPHBEIK** StaticGet_NJLLMPCDOEB()
	{
		return (::JNADIPHBEIK**)Il2CppClass::FromTypeDefinitionIndex(JNADIPHBEIK_TypeDefinitionIndex)->GetStaticField(0x509A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNADIPHBEIK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNADIPHBEIK__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::OPCAMPLOOAO* DFLCJDMAMHL, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::OPCAMPLOOAO*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + JNADIPHBEIK_SERIALIZE_OFFSET))(this, KJOELGPFKDM, DFLCJDMAMHL, PPDBEALANGE);
	}

	::OPCAMPLOOAO* Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::OPCAMPLOOAO*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + JNADIPHBEIK_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
