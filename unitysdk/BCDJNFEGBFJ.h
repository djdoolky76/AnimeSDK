#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

class LCFAKNCOMEF;
namespace MessagePack { class MessagePackSerializerOptions; }

#define BCDJNFEGBFJ_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1423E9F0)
#define BCDJNFEGBFJ_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1423E760)
#define BCDJNFEGBFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1423EC70)

inline static constexpr unsigned int BCDJNFEGBFJ_TypeDefinitionIndex = 62491;

class BCDJNFEGBFJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDJNFEGBFJ__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::LCFAKNCOMEF* EGEGIMGMJHN, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::LCFAKNCOMEF*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + BCDJNFEGBFJ_SERIALIZE_OFFSET))(this, KJOELGPFKDM, EGEGIMGMJHN, PPDBEALANGE);
	}

	::LCFAKNCOMEF* Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::LCFAKNCOMEF*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + BCDJNFEGBFJ_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
