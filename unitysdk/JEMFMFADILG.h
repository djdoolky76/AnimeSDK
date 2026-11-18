#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"

namespace MessagePack { class MessagePackSerializerOptions; }

#define JEMFMFADILG_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14FAA7B0)
#define JEMFMFADILG_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14FAA730)
#define JEMFMFADILG__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FAA850)
#define JEMFMFADILG__CTOR_OFFSET UNITYSDK_OFFSET(0x14FAA840)

inline static constexpr unsigned int JEMFMFADILG_TypeDefinitionIndex = 54961;

class JEMFMFADILG : public ::System::Object
{
public:
	static ::JEMFMFADILG** StaticGet_NJLLMPCDOEB()
	{
		return (::JEMFMFADILG**)Il2CppClass::FromTypeDefinitionIndex(JEMFMFADILG_TypeDefinitionIndex)->GetStaticField(0x3B570);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMFMFADILG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEMFMFADILG__CCTOR_OFFSET))();
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::MoleMole::Config::Spline_WayPoint EGCKKDBJIDH, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::MoleMole::Config::Spline_WayPoint, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + JEMFMFADILG_SERIALIZE_OFFSET))(this, KJOELGPFKDM, EGCKKDBJIDH, PPDBEALANGE);
	}

	::MoleMole::Config::Spline_WayPoint Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::MoleMole::Config::Spline_WayPoint(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + JEMFMFADILG_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
