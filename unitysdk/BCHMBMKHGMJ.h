#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define BCHMBMKHGMJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x14381000)
#define BCHMBMKHGMJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14380F70)
#define BCHMBMKHGMJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14380E40)
#define BCHMBMKHGMJ_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14380ED0)
#define BCHMBMKHGMJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14380D30)
#define BCHMBMKHGMJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x14380DC0)
#define BCHMBMKHGMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14380E30)

inline static constexpr unsigned int BCHMBMKHGMJ_TypeDefinitionIndex = 61417;

class BCHMBMKHGMJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xF7; // 0x0
	::System::UInt32 IIEENKNGKPP; // 0x20
	::System::UInt32 HPAKOJEOKAI; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCHMBMKHGMJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHMBMKHGMJ__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHMBMKHGMJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHMBMKHGMJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHMBMKHGMJ_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHMBMKHGMJ_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 FHHFPDDFNDB, ::System::UInt32 MIJJBPIGJNJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BCHMBMKHGMJ_CNHBDOMKKDE_OFFSET))(this, FHHFPDDFNDB, MIJJBPIGJNJ);
	}
};
