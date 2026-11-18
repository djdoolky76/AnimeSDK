#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Battle { class Entity; }

#define ODLOCAJKGDM_PBJFOJCFBMA_CBMGNAMAMPP_OFFSET UNITYSDK_OFFSET(0x777400)
#define ODLOCAJKGDM_PBJFOJCFBMA_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x15F5DEA0)
#define ODLOCAJKGDM_PBJFOJCFBMA_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x15F5DF50)
#define ODLOCAJKGDM_PBJFOJCFBMA__CTOR_OFFSET UNITYSDK_OFFSET(0x36F120)

inline static constexpr unsigned int ODLOCAJKGDM_PBJFOJCFBMA_TypeDefinitionIndex = 61945;

struct alignas(8) ODLOCAJKGDM_PBJFOJCFBMA
{
	::MoleMole::Battle::Entity* LEOKEOFNDLH; // 0x10
	::System::Boolean IDHMFNBAMDC; // 0x18

	::System::Void _ctor(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean GLOMOECJMLE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + ODLOCAJKGDM_PBJFOJCFBMA__CTOR_OFFSET))(this, KECKGDFIALJ, GLOMOECJMLE);
	}

	/*
	static ::ODLOCAJKGDM_PBJFOJCFBMA COKNIICCODC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::ODLOCAJKGDM_PBJFOJCFBMA(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ODLOCAJKGDM_PBJFOJCFBMA_COKNIICCODC_OFFSET))(KECKGDFIALJ);
	}
	*/

	/*
	static ::ODLOCAJKGDM_PBJFOJCFBMA JMDEKPONKMF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::ODLOCAJKGDM_PBJFOJCFBMA(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ODLOCAJKGDM_PBJFOJCFBMA_JMDEKPONKMF_OFFSET))(KECKGDFIALJ);
	}
	*/

	::System::Void CBMGNAMAMPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLOCAJKGDM_PBJFOJCFBMA_CBMGNAMAMPP_OFFSET))(this);
	}
};
