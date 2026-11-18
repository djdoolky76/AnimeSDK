#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define COECONGHNPH_CEMNCJDPIPN_KCOBELNFDMN_OFFSET UNITYSDK_OFFSET(0x15A1EF20)
#define COECONGHNPH_CEMNCJDPIPN_LBOBOPDHMNE_OFFSET UNITYSDK_OFFSET(0x15A1F0D0)
#define COECONGHNPH_CEMNCJDPIPN__CTOR_OFFSET UNITYSDK_OFFSET(0x15A1EF10)

inline static constexpr unsigned int COECONGHNPH_CEMNCJDPIPN_TypeDefinitionIndex = 66834;

class COECONGHNPH_CEMNCJDPIPN : public ::System::Object
{
public:
	::System::String* FKJGKBHGEHK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COECONGHNPH_CEMNCJDPIPN__CTOR_OFFSET))(this);
	}

	::System::Void KCOBELNFDMN(::System::String* LCEGOBBEECM, ::System::Int32 GIAEPMKCBIB, ::System::Int32 DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + COECONGHNPH_CEMNCJDPIPN_KCOBELNFDMN_OFFSET))(this, LCEGOBBEECM, GIAEPMKCBIB, DOBFFIICAII);
	}

	::System::Void LBOBOPDHMNE(::System::UInt16 IEBMHOFOAFF, ::System::UInt16 GIAEPMKCBIB, ::System::UInt16 DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + COECONGHNPH_CEMNCJDPIPN_LBOBOPDHMNE_OFFSET))(this, IEBMHOFOAFF, GIAEPMKCBIB, DOBFFIICAII);
	}
};
