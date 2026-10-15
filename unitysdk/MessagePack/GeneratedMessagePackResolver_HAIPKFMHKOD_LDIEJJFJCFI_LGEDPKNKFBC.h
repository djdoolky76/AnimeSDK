#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatModifierFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_LDIEJJFJCFI_LGEDPKNKFBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C72B3C0)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_LDIEJJFJCFI_LGEDPKNKFBC_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C736C40)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_LDIEJJFJCFI_LGEDPKNKFBC_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C736BD0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_HAIPKFMHKOD_LDIEJJFJCFI_LGEDPKNKFBC_TypeDefinitionIndex = 36187;

	class GeneratedMessagePackResolver_HAIPKFMHKOD_LDIEJJFJCFI_LGEDPKNKFBC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_LDIEJJFJCFI_LGEDPKNKFBC_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::RPG::GameCore::DiceCombatModifierFlag a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::RPG::GameCore::DiceCombatModifierFlag, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_LDIEJJFJCFI_LGEDPKNKFBC_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::DiceCombatModifierFlag Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::RPG::GameCore::DiceCombatModifierFlag(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_HAIPKFMHKOD_LDIEJJFJCFI_LGEDPKNKFBC_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
}
