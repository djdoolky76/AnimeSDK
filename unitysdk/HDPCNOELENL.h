#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace MoleMole::Battle { class Entity; }

#define HDPCNOELENL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16F283A0)
#define HDPCNOELENL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16F28440)
#define HDPCNOELENL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16F28310)
#define HDPCNOELENL__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F28290)
#define HDPCNOELENL__CTOR_OFFSET UNITYSDK_OFFSET(0x16F28300)

inline static constexpr unsigned int HDPCNOELENL_TypeDefinitionIndex = 91165;

class HDPCNOELENL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x152; // 0x0
	::MoleMole::Battle::Entity* JPKKAAOOIEI; // 0x20
	::MoleMole::Battle::Entity* DGFBAHIOGAG; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDPCNOELENL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPCNOELENL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPCNOELENL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Battle::Entity* KPPPGIMEAKP, ::MoleMole::Battle::Entity* KIAGKPDIDDH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HDPCNOELENL_CNHBDOMKKDE_OFFSET))(this, KPPPGIMEAKP, KIAGKPDIDDH);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPCNOELENL_FIGPAOKNJLN_OFFSET))(this);
	}
};
