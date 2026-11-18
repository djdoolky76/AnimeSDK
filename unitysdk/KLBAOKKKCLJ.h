#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class KPNIFGIKELE;
class MHJDIPINMMF;

#define KLBAOKKKCLJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A2D0080)
#define KLBAOKKKCLJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A2CFF50)
#define KLBAOKKKCLJ_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1A2CFFE0)
#define KLBAOKKKCLJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A2CFE40)
#define KLBAOKKKCLJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2CFED0)
#define KLBAOKKKCLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CFF40)

inline static constexpr unsigned int KLBAOKKKCLJ_TypeDefinitionIndex = 62739;

class KLBAOKKKCLJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xFC; // 0x0
	::KPNIFGIKELE* IKHJEGECGJA; // 0x20
	::MHJDIPINMMF* DAJLAFEMAFM; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLBAOKKKCLJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBAOKKKCLJ__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBAOKKKCLJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBAOKKKCLJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBAOKKKCLJ_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBAOKKKCLJ_FIGPAOKNJLN_OFFSET))(this);
	}
};
