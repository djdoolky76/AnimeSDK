#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
class BKKCAANDKJI;
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_MKCFFMKFNLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C759880)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_MKCFFMKFNLB_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C77DCD0)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_MKCFFMKFNLB_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C77D990)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_MKCFFMKFNLB_TypeDefinitionIndex = 36141;

	class GeneratedMessagePackResolver_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_MKCFFMKFNLB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_MKCFFMKFNLB_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::BKKCAANDKJI* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::BKKCAANDKJI*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_MKCFFMKFNLB_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::BKKCAANDKJI* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::BKKCAANDKJI*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_MKCFFMKFNLB_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
