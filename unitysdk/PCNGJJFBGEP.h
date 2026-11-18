#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PCNGJJFBGEP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x136F2A10)
#define PCNGJJFBGEP_DMIHHIBKEBM_OFFSET UNITYSDK_OFFSET(0x136F29D0)
#define PCNGJJFBGEP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x136F2AA0)
#define PCNGJJFBGEP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x136F2940)
#define PCNGJJFBGEP__CCTOR_OFFSET UNITYSDK_OFFSET(0x136F28C0)
#define PCNGJJFBGEP__CTOR_OFFSET UNITYSDK_OFFSET(0x136F2930)

inline static constexpr unsigned int PCNGJJFBGEP_TypeDefinitionIndex = 65957;

class PCNGJJFBGEP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x70; // 0x0
	::System::UInt32 NEIKAJPCDMF; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCNGJJFBGEP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNGJJFBGEP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNGJJFBGEP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::UInt32 DMIHHIBKEBM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNGJJFBGEP_DMIHHIBKEBM_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 NEIKAJPCDMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PCNGJJFBGEP_BBOMJDBNHIC_OFFSET))(this, JHGKGEGGGFF, NEIKAJPCDMF);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNGJJFBGEP_FIGPAOKNJLN_OFFSET))(this);
	}
};
