#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKCOPJPIGJL.h"
#include "unitysdk/System/Object.h"

class ENDBGIPMOFN;

#define FPEEPFBOGDP_CIJIEKNDICN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1750F730)
#define FPEEPFBOGDP_CIJIEKNDICN__CTOR_OFFSET UNITYSDK_OFFSET(0x1750F720)

inline static constexpr unsigned int FPEEPFBOGDP_CIJIEKNDICN_TypeDefinitionIndex = 71669;

class FPEEPFBOGDP_CIJIEKNDICN : public ::System::Object
{
public:
	::System::Int32 POGLLJGOBMB; // 0x10
	::System::Int32 IDDPBGCBMLJ; // 0x14
	::EKCOPJPIGJL OHOGDOMNHNK; // 0x18

	::System::Void _ctor(::ENDBGIPMOFN* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::ENDBGIPMOFN*))((::PBYTE)hIl2Cpp + FPEEPFBOGDP_CIJIEKNDICN__CTOR_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OKJCHFGIKBH(::ENDBGIPMOFN* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::ENDBGIPMOFN*))((::PBYTE)hIl2Cpp + FPEEPFBOGDP_CIJIEKNDICN_OKJCHFGIKBH_OFFSET))(this, AAOCANGHBDG);
	}
};
