#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
class HAFCMNPMFGO;
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_HMFGMKDCELL_CTOR_OFFSET UNITYSDK_OFFSET(0x1606C120)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_HMFGMKDCELL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16088910)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_HMFGMKDCELL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x160884C0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_HMFGMKDCELL_TypeDefinitionIndex = 37087;

	class GeneratedMessagePackResolver_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_HMFGMKDCELL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_HMFGMKDCELL_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::HAFCMNPMFGO* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::HAFCMNPMFGO*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_HMFGMKDCELL_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::HAFCMNPMFGO* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::HAFCMNPMFGO*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_HMFGMKDCELL_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
