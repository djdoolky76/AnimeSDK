#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJCNJKOCENM_PICKJHKGAFJ.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define CJCNJKOCENM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x147A5060)
#define CJCNJKOCENM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x147A4FD0)
#define CJCNJKOCENM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x147A4F40)
#define CJCNJKOCENM__CCTOR_OFFSET UNITYSDK_OFFSET(0x147A4EC0)
#define CJCNJKOCENM__CTOR_OFFSET UNITYSDK_OFFSET(0x147A4F30)

inline static constexpr unsigned int CJCNJKOCENM_TypeDefinitionIndex = 51099;

class CJCNJKOCENM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xFA; // 0x0
	::System::UInt32 BKCPCICCOBM; // 0x20
	::System::UInt32 IDMFDEHNGLC; // 0x24
	::CJCNJKOCENM_PICKJHKGAFJ DGGNCIDEAJM; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJCNJKOCENM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCNJKOCENM__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCNJKOCENM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCNJKOCENM_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 BKCPCICCOBM, ::System::UInt32 IDMFDEHNGLC, ::CJCNJKOCENM_PICKJHKGAFJ DGGNCIDEAJM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::CJCNJKOCENM_PICKJHKGAFJ))((::PBYTE)hIl2Cpp + CJCNJKOCENM_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, BKCPCICCOBM, IDMFDEHNGLC, DGGNCIDEAJM);
	}
};
