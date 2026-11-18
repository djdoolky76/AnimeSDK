#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define ODDDJFFPCAG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x18435F80)
#define ODDDJFFPCAG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x18435EF0)
#define ODDDJFFPCAG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x18435E60)
#define ODDDJFFPCAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x18435DE0)
#define ODDDJFFPCAG__CTOR_OFFSET UNITYSDK_OFFSET(0x18435E50)

inline static constexpr unsigned int ODDDJFFPCAG_TypeDefinitionIndex = 69897;

class ODDDJFFPCAG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x12E; // 0x0
	::System::String* KDFLKAFDIDN; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODDDJFFPCAG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDDJFFPCAG__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDDJFFPCAG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDDJFFPCAG_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODDDJFFPCAG_CNHBDOMKKDE_OFFSET))(this, AELLPLBJELA);
	}
};
