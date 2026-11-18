#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define COECONGHNPH_IMPCOLGINPL_FGPLKJOELDI_OFFSET UNITYSDK_OFFSET(0x18313600)
#define COECONGHNPH_IMPCOLGINPL_PPGEJBDFIEO_OFFSET UNITYSDK_OFFSET(0x18313500)
#define COECONGHNPH_IMPCOLGINPL__CTOR_OFFSET UNITYSDK_OFFSET(0x183134F0)

inline static constexpr unsigned int COECONGHNPH_IMPCOLGINPL_TypeDefinitionIndex = 66827;

class COECONGHNPH_IMPCOLGINPL : public ::System::Object
{
public:
	::System::String* FKJGKBHGEHK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COECONGHNPH_IMPCOLGINPL__CTOR_OFFSET))(this);
	}

	::System::Void PPGEJBDFIEO(::System::UInt16 IEBMHOFOAFF, ::System::UInt16 GIAEPMKCBIB, ::System::UInt16 DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + COECONGHNPH_IMPCOLGINPL_PPGEJBDFIEO_OFFSET))(this, IEBMHOFOAFF, GIAEPMKCBIB, DOBFFIICAII);
	}

	::System::Void FGPLKJOELDI(::System::String* LCEGOBBEECM, ::System::Int32 GIAEPMKCBIB, ::System::Int32 DOBFFIICAII)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + COECONGHNPH_IMPCOLGINPL_FGPLKJOELDI_OFFSET))(this, LCEGOBBEECM, GIAEPMKCBIB, DOBFFIICAII);
	}
};
