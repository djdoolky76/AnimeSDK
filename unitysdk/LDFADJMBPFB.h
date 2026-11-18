#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LDFADJMBPFB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x179429C0)
#define LDFADJMBPFB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17942890)
#define LDFADJMBPFB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17942800)
#define LDFADJMBPFB_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x17942920)
#define LDFADJMBPFB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x179426D0)
#define LDFADJMBPFB__CCTOR_OFFSET UNITYSDK_OFFSET(0x17942780)
#define LDFADJMBPFB__CTOR_OFFSET UNITYSDK_OFFSET(0x179427F0)

inline static constexpr unsigned int LDFADJMBPFB_TypeDefinitionIndex = 64264;

class LDFADJMBPFB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x148; // 0x0
	::UnityEngine::Vector3 DIBLAHNCLBB; // 0x20
	::UnityEngine::Vector3 IAGIPAIGJJC; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDFADJMBPFB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFADJMBPFB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFADJMBPFB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFADJMBPFB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFADJMBPFB_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFADJMBPFB_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::UnityEngine::Vector3 FCNPOKNKMOD, ::UnityEngine::Vector3 FPNKBIPMBCA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LDFADJMBPFB_CNHBDOMKKDE_OFFSET))(this, FCNPOKNKMOD, FPNKBIPMBCA);
	}
};
