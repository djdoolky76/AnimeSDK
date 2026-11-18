#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define AHBKEBCNJIO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16D7B100)
#define AHBKEBCNJIO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16D7B070)
#define AHBKEBCNJIO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16D7AFE0)
#define AHBKEBCNJIO__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D7AF60)
#define AHBKEBCNJIO__CTOR_OFFSET UNITYSDK_OFFSET(0x16D7AFD0)

inline static constexpr unsigned int AHBKEBCNJIO_TypeDefinitionIndex = 49212;

class AHBKEBCNJIO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x13C; // 0x0
	::System::UInt32 MJJIAPBOIKH; // 0x20
	::System::Boolean IMIFFJMMHFA; // 0x24
	::System::Byte _padding0[0x3];
	::System::Int32 HOMFGOGJNAN; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHBKEBCNJIO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBKEBCNJIO__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBKEBCNJIO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBKEBCNJIO_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 JJGNKFNINLM, ::System::UInt32 DKBGLBIECBN, ::System::Boolean NBDFPCBOMCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + AHBKEBCNJIO_CNHBDOMKKDE_OFFSET))(this, JJGNKFNINLM, DKBGLBIECBN, NBDFPCBOMCF);
	}
};
