#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MBDDPHPODAN.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define PNGNNCIMAMH_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C698EF0)
#define PNGNNCIMAMH_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C698E50)
#define PNGNNCIMAMH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C698FA0)
#define PNGNNCIMAMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C698F90)

inline static constexpr unsigned int PNGNNCIMAMH_TypeDefinitionIndex = 44449;

class PNGNNCIMAMH : public ::System::Object
{
public:
	static ::PNGNNCIMAMH** StaticGet_NJLLMPCDOEB()
	{
		return (::PNGNNCIMAMH**)Il2CppClass::FromTypeDefinitionIndex(PNGNNCIMAMH_TypeDefinitionIndex)->GetStaticField(0x50EE0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGNNCIMAMH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNGNNCIMAMH__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::MBDDPHPODAN OCEDOBAMNJP, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MBDDPHPODAN, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + PNGNNCIMAMH_SERIALIZE_OFFSET))(this, KJOELGPFKDM, OCEDOBAMNJP, PPDBEALANGE);
	}

	::MBDDPHPODAN Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::MBDDPHPODAN(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + PNGNNCIMAMH_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
