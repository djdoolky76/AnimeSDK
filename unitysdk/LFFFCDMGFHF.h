#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LFFFCDMGFHF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1A308AF0)
#define LFFFCDMGFHF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1A308B80)
#define LFFFCDMGFHF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1A308A60)
#define LFFFCDMGFHF_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1A308C10)
#define LFFFCDMGFHF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A308930)
#define LFFFCDMGFHF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3089E0)
#define LFFFCDMGFHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A308A50)

inline static constexpr unsigned int LFFFCDMGFHF_TypeDefinitionIndex = 70369;

class LFFFCDMGFHF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x14A; // 0x0
	::UnityEngine::Vector3 IAGIPAIGJJC; // 0x20
	::UnityEngine::Vector3 DIBLAHNCLBB; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFFFCDMGFHF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFCDMGFHF__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFCDMGFHF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFCDMGFHF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::UnityEngine::Vector3 FCNPOKNKMOD, ::UnityEngine::Vector3 FPNKBIPMBCA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LFFFCDMGFHF_CNHBDOMKKDE_OFFSET))(this, FCNPOKNKMOD, FPNKBIPMBCA);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFCDMGFHF_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFFFCDMGFHF_OHFHFOHMBJH_OFFSET))(this);
	}
};
