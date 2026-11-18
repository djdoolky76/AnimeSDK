#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define EKLLNADMBMJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xF9DCBF0)
#define EKLLNADMBMJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xF9DCD20)
#define EKLLNADMBMJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xF9DCB60)
#define EKLLNADMBMJ_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0xF9DCC80)
#define EKLLNADMBMJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xF9DCA90)
#define EKLLNADMBMJ__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9DCAE0)
#define EKLLNADMBMJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF9DCB50)

inline static constexpr unsigned int EKLLNADMBMJ_TypeDefinitionIndex = 40861;

class EKLLNADMBMJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x2; // 0x0
	::System::UInt32 PPNALIJJAJL; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKLLNADMBMJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLLNADMBMJ__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLLNADMBMJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLLNADMBMJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 PPNALIJJAJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EKLLNADMBMJ_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, PPNALIJJAJL);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLLNADMBMJ_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLLNADMBMJ_FIGPAOKNJLN_OFFSET))(this);
	}
};
