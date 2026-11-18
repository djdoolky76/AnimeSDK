#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/JNPLBMFJFDI.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/ODAHKHFOPDP.h"

#define FJKJDKKMNKL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x11C569F0)
#define FJKJDKKMNKL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x11C56A60)
#define FJKJDKKMNKL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x11C56960)
#define FJKJDKKMNKL__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C568E0)
#define FJKJDKKMNKL__CTOR_OFFSET UNITYSDK_OFFSET(0x11C56950)

inline static constexpr unsigned int FJKJDKKMNKL_TypeDefinitionIndex = 50533;

class FJKJDKKMNKL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xA7; // 0x0
	::System::Single PMLOGFLOLNJ; // 0x20
	::System::Boolean OKABBHMIOOM; // 0x24
	::System::Byte _padding0[0x3];
	::ODAHKHFOPDP IGEBAIMAFHD; // 0x28
	::JNPLBMFJFDI MFCDACDAGFP; // 0x2C
	::MoleMole::Config::PropertyModifyFunction HDCIHCKELCC; // 0x44
	::System::Single HBOJLFKAOOH; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJKJDKKMNKL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKJDKKMNKL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKJDKKMNKL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::JNPLBMFJFDI MFCDACDAGFP, ::System::Boolean ODNGLDNMAGF)
	{
		return ((::System::Void(*)(::PVOID, ::JNPLBMFJFDI, ::System::Boolean))((::PBYTE)hIl2Cpp + FJKJDKKMNKL_CNHBDOMKKDE_OFFSET))(this, MFCDACDAGFP, ODNGLDNMAGF);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKJDKKMNKL_FIGPAOKNJLN_OFFSET))(this);
	}
};
