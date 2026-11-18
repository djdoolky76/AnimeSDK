#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/LOCOJEENBIP.h"

namespace System { class String; }

#define NDJDGNFPDFB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1ADFAD50)
#define NDJDGNFPDFB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1ADFADB0)
#define NDJDGNFPDFB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1ADFAC20)
#define NDJDGNFPDFB_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1ADFACB0)
#define NDJDGNFPDFB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ADFAB10)
#define NDJDGNFPDFB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADFABA0)
#define NDJDGNFPDFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADFAC10)

inline static constexpr unsigned int NDJDGNFPDFB_TypeDefinitionIndex = 53369;

class NDJDGNFPDFB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xC3; // 0x0
	::System::String* CBHOLKMHFAH; // 0x20
	::LOCOJEENBIP LJDCLBCPFCG; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDJDGNFPDFB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJDGNFPDFB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJDGNFPDFB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJDGNFPDFB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJDGNFPDFB_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* NMNBFFOJOJA, ::LOCOJEENBIP EPIEOPFNKKL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::LOCOJEENBIP))((::PBYTE)hIl2Cpp + NDJDGNFPDFB_CNHBDOMKKDE_OFFSET))(this, NMNBFFOJOJA, EPIEOPFNKKL);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJDGNFPDFB_FIGPAOKNJLN_OFFSET))(this);
	}
};
