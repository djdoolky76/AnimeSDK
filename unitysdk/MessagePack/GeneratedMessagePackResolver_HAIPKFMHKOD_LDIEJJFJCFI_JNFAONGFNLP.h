#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerModifierType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_LDIEJJFJCFI_JNFAONGFNLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C72B3D0)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_LDIEJJFJCFI_JNFAONGFNLP_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C736AF0)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_LDIEJJFJCFI_JNFAONGFNLP_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C736A80)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_HAIPKFMHKOD_LDIEJJFJCFI_JNFAONGFNLP_TypeDefinitionIndex = 36188;

	class GeneratedMessagePackResolver_HAIPKFMHKOD_LDIEJJFJCFI_JNFAONGFNLP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_LDIEJJFJCFI_JNFAONGFNLP_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::RPG::GameCore::TeamTowersPlayerModifierType a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::RPG::GameCore::TeamTowersPlayerModifierType, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_LDIEJJFJCFI_JNFAONGFNLP_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::TeamTowersPlayerModifierType Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::RPG::GameCore::TeamTowersPlayerModifierType(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_LDIEJJFJCFI_JNFAONGFNLP_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
