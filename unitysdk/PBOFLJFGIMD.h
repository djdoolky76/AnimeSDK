#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PGDANPMGKPN.h"
#include "unitysdk/System/Object.h"

#define PBOFLJFGIMD_BOEKHNKLFGJ_OFFSET UNITYSDK_OFFSET(0x150B35D0)
#define PBOFLJFGIMD_DNDDJOCDFJI_OFFSET UNITYSDK_OFFSET(0x150B3520)
#define PBOFLJFGIMD_GCKCCGDINKI_OFFSET UNITYSDK_OFFSET(0x150B3570)
#define PBOFLJFGIMD_IALAAGBAAGB_OFFSET UNITYSDK_OFFSET(0x150B3470)
#define PBOFLJFGIMD_KKHNMKCEAHB_OFFSET UNITYSDK_OFFSET(0x150B3670)
#define PBOFLJFGIMD_KOFLJIHKFML_OFFSET UNITYSDK_OFFSET(0x150B3620)
#define PBOFLJFGIMD_MLGEHOMCADJ_OFFSET UNITYSDK_OFFSET(0x150B36D0)
#define PBOFLJFGIMD_PFIMPEKNOMO_OFFSET UNITYSDK_OFFSET(0x150B34D0)
#define PBOFLJFGIMD__CTOR_OFFSET UNITYSDK_OFFSET(0x150B3460)

inline static constexpr unsigned int PBOFLJFGIMD_TypeDefinitionIndex = 81667;

class PBOFLJFGIMD : public ::System::Object
{
public:
	::System::Int32 JDCMOOKLPND; // 0x10
	::System::Int32 ALBMJCFNHNB; // 0x14
	::System::UInt32 LFCEKCIDLFI; // 0x18
	::System::Single KNAEMFDFOCG; // 0x1C
	::PGDANPMGKPN HNKDENBPIKL; // 0x20
	::System::Int32 FCMABDCGCJJ; // 0x24
	::PGDANPMGKPN MKNNMJGGAEE; // 0x28
	::System::Int32 NJKDBHFBDHD; // 0x2C
	::System::Byte FEMHHGAMLGL; // 0x30
	::System::Byte _padding0[0x3];
	::PGDANPMGKPN HDHPCANGPOI; // 0x34
	::System::Int32 NKEJPMDCFDP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOFLJFGIMD__CTOR_OFFSET))(this);
	}

	::System::Void IALAAGBAAGB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBOFLJFGIMD_IALAAGBAAGB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PFIMPEKNOMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOFLJFGIMD_PFIMPEKNOMO_OFFSET))(this);
	}

	::System::Boolean DNDDJOCDFJI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOFLJFGIMD_DNDDJOCDFJI_OFFSET))(this);
	}

	::System::Void GCKCCGDINKI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBOFLJFGIMD_GCKCCGDINKI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean BOEKHNKLFGJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOFLJFGIMD_BOEKHNKLFGJ_OFFSET))(this);
	}

	::System::Boolean KOFLJIHKFML()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOFLJFGIMD_KOFLJIHKFML_OFFSET))(this);
	}

	::System::Void KKHNMKCEAHB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBOFLJFGIMD_KKHNMKCEAHB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MLGEHOMCADJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBOFLJFGIMD_MLGEHOMCADJ_OFFSET))(this, EGEGIMGMJHN);
	}
};
