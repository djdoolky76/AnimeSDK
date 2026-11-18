#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define COECONGHNPH_PJDFCABGOLI_EFKMEJIMOJB_OFFSET UNITYSDK_OFFSET(0x12B8DB40)
#define COECONGHNPH_PJDFCABGOLI_HGEGPNJCIEA_OFFSET UNITYSDK_OFFSET(0x12B8DDC0)
#define COECONGHNPH_PJDFCABGOLI__CTOR_OFFSET UNITYSDK_OFFSET(0x12B8DB30)

inline static constexpr unsigned int COECONGHNPH_PJDFCABGOLI_TypeDefinitionIndex = 66831;

class COECONGHNPH_PJDFCABGOLI : public ::System::Object
{
public:
	::System::String* FKJGKBHGEHK; // 0x10
	::System::Boolean MNPJNCFJKBP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COECONGHNPH_PJDFCABGOLI__CTOR_OFFSET))(this);
	}

	::System::Void EFKMEJIMOJB(::System::UInt16 IEBMHOFOAFF, ::System::UInt16 GIAEPMKCBIB, ::System::UInt16 DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + COECONGHNPH_PJDFCABGOLI_EFKMEJIMOJB_OFFSET))(this, IEBMHOFOAFF, GIAEPMKCBIB, DOBFFIICAII);
	}

	::System::Void HGEGPNJCIEA(::System::String* LCEGOBBEECM, ::System::Int32 GIAEPMKCBIB, ::System::Int32 DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + COECONGHNPH_PJDFCABGOLI_HGEGPNJCIEA_OFFSET))(this, LCEGOBBEECM, GIAEPMKCBIB, DOBFFIICAII);
	}
};
