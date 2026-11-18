#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/PCBJHAOEOEN.h"

namespace System { class String; }

#define CCFCJEHDHBL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14F14150)
#define CCFCJEHDHBL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14F141B0)
#define CCFCJEHDHBL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14F14020)
#define CCFCJEHDHBL_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14F140B0)
#define CCFCJEHDHBL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14F13EF0)
#define CCFCJEHDHBL__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F13F90)
#define CCFCJEHDHBL__CTOR_OFFSET UNITYSDK_OFFSET(0x14F14000)

inline static constexpr unsigned int CCFCJEHDHBL_TypeDefinitionIndex = 88450;

class CCFCJEHDHBL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xD0; // 0x0
	::System::String* CBHOLKMHFAH; // 0x20
	::PCBJHAOEOEN KGBLMJBKLJD; // 0x28
	::System::Int32 OMEKLHOFFEM; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCFCJEHDHBL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFCJEHDHBL__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFCJEHDHBL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFCJEHDHBL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFCJEHDHBL_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* AMJIHFDPIFH, ::System::Int32 IENMHKHBDHA, ::PCBJHAOEOEN KOBGAHDCAMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::PCBJHAOEOEN))((::PBYTE)hIl2Cpp + CCFCJEHDHBL_CNHBDOMKKDE_OFFSET))(this, AMJIHFDPIFH, IENMHKHBDHA, KOBGAHDCAMA);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFCJEHDHBL_FIGPAOKNJLN_OFFSET))(this);
	}
};
