#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MoleMole::Config { class InputEnableInfo; }

#define LKKECOJICCH_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14DBD270)
#define LKKECOJICCH_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14DBD1E0)
#define LKKECOJICCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DBD330)
#define LKKECOJICCH__CTOR_OFFSET UNITYSDK_OFFSET(0x14DBD320)

inline static constexpr unsigned int LKKECOJICCH_TypeDefinitionIndex = 51766;

class LKKECOJICCH : public ::System::Object
{
public:
	static ::LKKECOJICCH** StaticGet_NJLLMPCDOEB()
	{
		return (::LKKECOJICCH**)Il2CppClass::FromTypeDefinitionIndex(LKKECOJICCH_TypeDefinitionIndex)->GetStaticField(0x50ED0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKECOJICCH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKKECOJICCH__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::MoleMole::Config::InputEnableInfo* DEHICCLGHHK, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::Config::InputEnableInfo*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + LKKECOJICCH_SERIALIZE_OFFSET))(this, KJOELGPFKDM, DEHICCLGHHK, PPDBEALANGE);
	}

	::MoleMole::Config::InputEnableInfo* Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::MoleMole::Config::InputEnableInfo*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + LKKECOJICCH_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
