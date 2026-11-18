#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
class POFGLFEFKBN;
namespace MoleMole { class BaseRedDotRecord; }
namespace System { class String; }

#define LKIEGFJLBIF_IMDHLNCBOIE_OFFSET UNITYSDK_OFFSET(0x12D38C00)
#define LKIEGFJLBIF_JFKDLFBOAKO_OFFSET UNITYSDK_OFFSET(0x12D389C0)
#define LKIEGFJLBIF_MFGLAKPKIEF_OFFSET UNITYSDK_OFFSET(0x12D389D0)
#define LKIEGFJLBIF_OCBADALNCDC_OFFSET UNITYSDK_OFFSET(0x12D389B0)
#define LKIEGFJLBIF__CTOR_OFFSET UNITYSDK_OFFSET(0x12D38970)

inline static constexpr unsigned int LKIEGFJLBIF_TypeDefinitionIndex = 45702;

class LKIEGFJLBIF : public ::System::Object
{
public:
	::System::String* OBCPEDFNOKI; // 0x10
	::POFGLFEFKBN* PMKCKOHBHGA; // 0x18
	::MoleMole::BaseRedDotRecord* ODKBCCEEIGE; // 0x20
	::System::Boolean OCKIEEIBBPD; // 0x28
	::System::Byte _padding0[0x7];
	::System::Int64 _MJJOBCPINND_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIEGFJLBIF__CTOR_OFFSET))(this);
	}

	::System::Void OCBADALNCDC(::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LKIEGFJLBIF_OCBADALNCDC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int64 JFKDLFBOAKO()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIEGFJLBIF_JFKDLFBOAKO_OFFSET))(this);
	}

	::System::Void MFGLAKPKIEF(::IBENDELLLAO* HHIJHDFHPOI, ::System::String* MECOFDHMKEB)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*, ::System::String*))((::PBYTE)hIl2Cpp + LKIEGFJLBIF_MFGLAKPKIEF_OFFSET))(this, HHIJHDFHPOI, MECOFDHMKEB);
	}

	::System::String* IMDHLNCBOIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIEGFJLBIF_IMDHLNCBOIE_OFFSET))(this);
	}
};
