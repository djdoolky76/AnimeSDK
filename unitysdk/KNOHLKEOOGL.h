#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define KNOHLKEOOGL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1A2D84B0)
#define KNOHLKEOOGL_DMIHHIBKEBM_OFFSET UNITYSDK_OFFSET(0x1A2D8540)
#define KNOHLKEOOGL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A2D8420)
#define KNOHLKEOOGL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A2D8390)
#define KNOHLKEOOGL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2D8310)
#define KNOHLKEOOGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D8380)

inline static constexpr unsigned int KNOHLKEOOGL_TypeDefinitionIndex = 67726;

class KNOHLKEOOGL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x6F; // 0x0
	::System::UInt32 NEIKAJPCDMF; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNOHLKEOOGL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOHLKEOOGL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOHLKEOOGL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOHLKEOOGL_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 NEIKAJPCDMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KNOHLKEOOGL_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, NEIKAJPCDMF);
	}

	::System::UInt32 DMIHHIBKEBM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOHLKEOOGL_DMIHHIBKEBM_OFFSET))(this);
	}
};
