#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace MessagePack { class MessagePackSerializerOptions; }

#define FKFJMAFNHIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C622D70)
#define FKFJMAFNHIF_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C622B20)
#define FKFJMAFNHIF_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C622A80)

	class FKFJMAFNHIF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFJMAFNHIF_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::RPG::GameCore::FixPoint a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::RPG::GameCore::FixPoint, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + FKFJMAFNHIF_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + FKFJMAFNHIF_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
