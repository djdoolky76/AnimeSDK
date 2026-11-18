#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define HDJMFMIFJDF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15B41650)
#define HDJMFMIFJDF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15B416E0)
#define HDJMFMIFJDF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15B415C0)
#define HDJMFMIFJDF__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B41540)
#define HDJMFMIFJDF__CTOR_OFFSET UNITYSDK_OFFSET(0x15B415B0)

inline static constexpr unsigned int HDJMFMIFJDF_TypeDefinitionIndex = 83122;

class HDJMFMIFJDF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x56; // 0x0
	::System::Boolean JDAGKAMAGAK; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDJMFMIFJDF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJMFMIFJDF__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJMFMIFJDF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 PPNALIJJAJL, ::System::Boolean KKMENMCMMBN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + HDJMFMIFJDF_CNHBDOMKKDE_OFFSET))(this, PPNALIJJAJL, KKMENMCMMBN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJMFMIFJDF_FIGPAOKNJLN_OFFSET))(this);
	}
};
