#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHFNOJGMGEP.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define JCPJPCKODCL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14FA7F30)
#define JCPJPCKODCL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14FA7EA0)
#define JCPJPCKODCL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14FA7E10)
#define JCPJPCKODCL__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FA7D90)
#define JCPJPCKODCL__CTOR_OFFSET UNITYSDK_OFFSET(0x14FA7E00)

inline static constexpr unsigned int JCPJPCKODCL_TypeDefinitionIndex = 87443;

class JCPJPCKODCL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xB8; // 0x0
	::EHFNOJGMGEP OIJJADCMKIK; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCPJPCKODCL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPJPCKODCL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPJPCKODCL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPJPCKODCL_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::EHFNOJGMGEP IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::EHFNOJGMGEP))((::PBYTE)hIl2Cpp + JCPJPCKODCL_CNHBDOMKKDE_OFFSET))(this, IMLLDOHDCNC);
	}
};
