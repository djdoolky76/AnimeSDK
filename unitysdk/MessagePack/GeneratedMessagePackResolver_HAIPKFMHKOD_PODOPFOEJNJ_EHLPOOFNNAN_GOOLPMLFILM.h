#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
class BJAPDDEENCN;
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_GOOLPMLFILM_CTOR_OFFSET UNITYSDK_OFFSET(0x1606C1F0)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_GOOLPMLFILM_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x160865B0)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_GOOLPMLFILM_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x160864F0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_GOOLPMLFILM_TypeDefinitionIndex = 37100;

	class GeneratedMessagePackResolver_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_GOOLPMLFILM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_GOOLPMLFILM_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::BJAPDDEENCN* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::BJAPDDEENCN*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_GOOLPMLFILM_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::BJAPDDEENCN* Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::BJAPDDEENCN*(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_PODOPFOEJNJ_EHLPOOFNNAN_GOOLPMLFILM_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
