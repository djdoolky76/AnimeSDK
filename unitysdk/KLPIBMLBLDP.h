#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMAGJGLPIIF.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
namespace MessagePack { class MessagePackSerializerOptions; }

#define KLPIBMLBLDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71BEE0)
#define KLPIBMLBLDP_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C71BA10)
#define KLPIBMLBLDP_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C71B940)

inline static constexpr unsigned int KLPIBMLBLDP_TypeDefinitionIndex = 37204;

	class KLPIBMLBLDP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPIBMLBLDP_CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter a1, ::BMAGJGLPIIF a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter, ::BMAGJGLPIIF, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + KLPIBMLBLDP_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::BMAGJGLPIIF Deserialize(::MessagePack::MessagePackReader a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::BMAGJGLPIIF(*)(::PVOID, ::MessagePack::MessagePackReader, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + KLPIBMLBLDP_DESERIALIZE_OFFSET))(this, a1, a2);
		}

	};
