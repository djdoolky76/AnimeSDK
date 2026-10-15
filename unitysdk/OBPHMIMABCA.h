#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
namespace MessagePack { class MessagePackSerializerOptions; }

#define OBPHMIMABCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7CBBE0)
#define OBPHMIMABCA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C7CB5E0)
#define OBPHMIMABCA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C7CB1C0)

inline static constexpr unsigned int OBPHMIMABCA_TypeDefinitionIndex = 37203;

	class OBPHMIMABCA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPHMIMABCA_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::RPG::GameCore::FixVec3 a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::RPG::GameCore::FixVec3, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + OBPHMIMABCA_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixVec3 Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + OBPHMIMABCA_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
