#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/MoleMole/BubbleGraphStruct.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define BKLOFDCOALB_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13977770)
#define BKLOFDCOALB_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13977510)
#define BKLOFDCOALB__CCTOR_OFFSET UNITYSDK_OFFSET(0x13977A00)
#define BKLOFDCOALB__CTOR_OFFSET UNITYSDK_OFFSET(0x139779F0)

inline static constexpr unsigned int BKLOFDCOALB_TypeDefinitionIndex = 64842;

class BKLOFDCOALB : public ::System::Object
{
public:
	static ::BKLOFDCOALB** StaticGet_NJLLMPCDOEB()
	{
		return (::BKLOFDCOALB**)Il2CppClass::FromTypeDefinitionIndex(BKLOFDCOALB_TypeDefinitionIndex)->GetStaticField(0x4F250);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKLOFDCOALB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKLOFDCOALB__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::MoleMole::BubbleGraphStruct KGEOCIHBBJH, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::BubbleGraphStruct, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + BKLOFDCOALB_SERIALIZE_OFFSET))(this, KJOELGPFKDM, KGEOCIHBBJH, PPDBEALANGE);
	}

	::MoleMole::BubbleGraphStruct Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::MoleMole::BubbleGraphStruct(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + BKLOFDCOALB_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
