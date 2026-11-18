#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define DEMAADPOPGM_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x15A39960)
#define DEMAADPOPGM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15A39A40)
#define DEMAADPOPGM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15A398D0)
#define DEMAADPOPGM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x15A399A0)
#define DEMAADPOPGM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15A397C0)
#define DEMAADPOPGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15A39630)
#define DEMAADPOPGM__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A39850)
#define DEMAADPOPGM__CTOR_OFFSET UNITYSDK_OFFSET(0x15A398C0)

inline static constexpr unsigned int DEMAADPOPGM_TypeDefinitionIndex = 79094;

class DEMAADPOPGM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xDD; // 0x0
	::System::String* JPGMFDLLEGI; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEMAADPOPGM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMAADPOPGM__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMAADPOPGM_TOSTRING_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMAADPOPGM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMAADPOPGM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMAADPOPGM_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMAADPOPGM_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMAADPOPGM_FIGPAOKNJLN_OFFSET))(this);
	}
};
