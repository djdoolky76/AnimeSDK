#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define PPLDLNNMBCF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1C2C8A30)
#define PPLDLNNMBCF_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1C2C8A80)
#define PPLDLNNMBCF_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1C2C89A0)
#define PPLDLNNMBCF_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1C2C8B10)
#define PPLDLNNMBCF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C2C8890)
#define PPLDLNNMBCF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2C8920)
#define PPLDLNNMBCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C8990)

inline static constexpr unsigned int PPLDLNNMBCF_TypeDefinitionIndex = 55092;

class PPLDLNNMBCF : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xD6; // 0x0
	::System::String* DCJCHGOGLMF; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPLDLNNMBCF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLDLNNMBCF__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLDLNNMBCF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLDLNNMBCF_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PPLDLNNMBCF_CNHBDOMKKDE_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLDLNNMBCF_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLDLNNMBCF_OHFHFOHMBJH_OFFSET))(this);
	}
};
