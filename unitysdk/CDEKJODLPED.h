#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define CDEKJODLPED_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x139A5320)
#define CDEKJODLPED_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x139A5420)
#define CDEKJODLPED_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x139A5290)
#define CDEKJODLPED_KHLHOPKBELP_OFFSET UNITYSDK_OFFSET(0x139A53A0)
#define CDEKJODLPED__CCTOR_OFFSET UNITYSDK_OFFSET(0x139A5210)
#define CDEKJODLPED__CTOR_OFFSET UNITYSDK_OFFSET(0x139A5280)

inline static constexpr unsigned int CDEKJODLPED_TypeDefinitionIndex = 43784;

class CDEKJODLPED : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xA9; // 0x0
	::System::Boolean OKABBHMIOOM; // 0x20
	::System::Byte _padding0[0x3];
	::System::Single PMLOGFLOLNJ; // 0x24
	::System::Single HBOJLFKAOOH; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDEKJODLPED__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEKJODLPED__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEKJODLPED_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Single MFMMNDAHFAD, ::System::Single OICIDHAGAKN, ::System::Boolean ODNGLDNMAGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CDEKJODLPED_CNHBDOMKKDE_OFFSET))(this, MFMMNDAHFAD, OICIDHAGAKN, ODNGLDNMAGF);
	}

	::System::Void KHLHOPKBELP(::System::Single MFMMNDAHFAD, ::System::Single OICIDHAGAKN, ::System::Boolean ODNGLDNMAGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CDEKJODLPED_KHLHOPKBELP_OFFSET))(this, MFMMNDAHFAD, OICIDHAGAKN, ODNGLDNMAGF);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEKJODLPED_FIGPAOKNJLN_OFFSET))(this);
	}
};
