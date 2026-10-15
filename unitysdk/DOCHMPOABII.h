#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/MVector2.h"
namespace MessagePack { class MessagePackSerializerOptions; }

#define DOCHMPOABII_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CBD80)
#define DOCHMPOABII_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C5CBA40)
#define DOCHMPOABII_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C5CB970)

inline static constexpr unsigned int DOCHMPOABII_TypeDefinitionIndex = 37206;

	class DOCHMPOABII : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCHMPOABII_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::RPG::MVector2 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::RPG::MVector2, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + DOCHMPOABII_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::MVector2 Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + DOCHMPOABII_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
