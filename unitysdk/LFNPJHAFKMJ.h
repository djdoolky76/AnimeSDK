#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define LFNPJHAFKMJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1565A580)
#define LFNPJHAFKMJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1565A620)
#define LFNPJHAFKMJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1565A4F0)
#define LFNPJHAFKMJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1565A470)
#define LFNPJHAFKMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1565A4E0)

inline static constexpr unsigned int LFNPJHAFKMJ_TypeDefinitionIndex = 60412;

class LFNPJHAFKMJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x55; // 0x0
	::System::String* KIHGNGKBADE; // 0x20
	::System::Boolean PEDANHBGIGE; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFNPJHAFKMJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNPJHAFKMJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNPJHAFKMJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 PPNALIJJAJL, ::System::Boolean FBILHHBPEHD, ::System::String* HOOJMOGPNBG)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + LFNPJHAFKMJ_CNHBDOMKKDE_OFFSET))(this, PPNALIJJAJL, FBILHHBPEHD, HOOJMOGPNBG);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNPJHAFKMJ_FIGPAOKNJLN_OFFSET))(this);
	}
};
