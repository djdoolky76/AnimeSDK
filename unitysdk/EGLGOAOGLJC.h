#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define EGLGOAOGLJC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17230780)
#define EGLGOAOGLJC_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x172308E0)
#define EGLGOAOGLJC_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17230850)
#define EGLGOAOGLJC__CCTOR_OFFSET UNITYSDK_OFFSET(0x172307D0)
#define EGLGOAOGLJC__CTOR_OFFSET UNITYSDK_OFFSET(0x17230840)

inline static constexpr unsigned int EGLGOAOGLJC_TypeDefinitionIndex = 66006;

class EGLGOAOGLJC : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xE1; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGLGOAOGLJC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLGOAOGLJC__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::String* LAAIEKGDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EGLGOAOGLJC_BBOMJDBNHIC_OFFSET))(this, LAAIEKGDKHD);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLGOAOGLJC_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLGOAOGLJC_FIGPAOKNJLN_OFFSET))(this);
	}
};
