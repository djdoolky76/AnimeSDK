#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLKKBMFHCC.h"
#include "unitysdk/FMLMKEKGHOF.h"
#include "unitysdk/NGAFLAACDGG.h"
#include "unitysdk/PABKFONJHNH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GNOCMGCKHKO.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { template <typename T> class ListFormatter_1; }

#define LCOKLOKKPCC_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xD41F530)
#define LCOKLOKKPCC_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xD41F3D0)
#define LCOKLOKKPCC__CTOR_OFFSET UNITYSDK_OFFSET(0xD41F750)

inline static constexpr unsigned int LCOKLOKKPCC_TypeDefinitionIndex = 89619;

class LCOKLOKKPCC : public ::System::Object
{
public:
	::MessagePack::Formatters::ListFormatter_1<::NGAFLAACDGG>* JDOFAKGDNBJ; // 0x10
	::MessagePack::Formatters::ListFormatter_1<::FMLMKEKGHOF>* MODILIAHIJJ; // 0x18
	::MessagePack::Formatters::ListFormatter_1<::BLLKKBMFHCC>* GCLPLLFKHHC; // 0x20
	::MessagePack::Formatters::ListFormatter_1<::PABKFONJHNH>* COBJFKBEJEO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOKLOKKPCC__CTOR_OFFSET))(this);
	}

	::System::Void Serialize(::MessagePack::MessagePackWriter& KJOELGPFKDM, ::GNOCMGCKHKO CPNMOOANEBL, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::GNOCMGCKHKO, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + LCOKLOKKPCC_SERIALIZE_OFFSET))(this, KJOELGPFKDM, CPNMOOANEBL, PPDBEALANGE);
	}

	::GNOCMGCKHKO Deserialize(::MessagePack::MessagePackReader& FAJNJHEJMEA, ::MessagePack::MessagePackSerializerOptions* PPDBEALANGE)
	{
		return ((::GNOCMGCKHKO(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + LCOKLOKKPCC_DESERIALIZE_OFFSET))(this, FAJNJHEJMEA, PPDBEALANGE);
	}
};
