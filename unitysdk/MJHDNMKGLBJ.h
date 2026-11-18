#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/Nap/NapECS/EcsComponent.h"

namespace MoleMole::Battle { class Entity; }

#define MJHDNMKGLBJ_AFTERCLEAN_OFFSET UNITYSDK_OFFSET(0x11F4EF40)
#define MJHDNMKGLBJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x11F4EFD0)
#define MJHDNMKGLBJ_CCLCMGFFNLM_OFFSET UNITYSDK_OFFSET(0x11F4F0A0)
#define MJHDNMKGLBJ_CJBGCGPMGHA_OFFSET UNITYSDK_OFFSET(0x11F4F130)
#define MJHDNMKGLBJ_FEKDNMHOMPI_OFFSET UNITYSDK_OFFSET(0x11F4F120)
#define MJHDNMKGLBJ_FFLLJNGADEI_OFFSET UNITYSDK_OFFSET(0x11F4F0D0)
#define MJHDNMKGLBJ_HJMIMLBMBOP_OFFSET UNITYSDK_OFFSET(0x11F4F0B0)
#define MJHDNMKGLBJ_KCNBAOBGGBB_OFFSET UNITYSDK_OFFSET(0x11F4F050)
#define MJHDNMKGLBJ_MOJIFCMELGI_OFFSET UNITYSDK_OFFSET(0x11F4EF90)
#define MJHDNMKGLBJ_OLGLPNOCJMP_OFFSET UNITYSDK_OFFSET(0x11F4F0C0)
#define MJHDNMKGLBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11F2B190)

inline static constexpr unsigned int MJHDNMKGLBJ_TypeDefinitionIndex = 71852;

class MJHDNMKGLBJ : public ::Nap::NapECS::EcsComponent
{
public:
	::MoleMole::Battle::Entity* _KOLPBICLIPC_k__BackingField; // 0x38
	::System::UInt32 _GIEFMEJCHPP_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHDNMKGLBJ__CTOR_OFFSET))(this);
	}

	::System::Void AfterClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHDNMKGLBJ_AFTERCLEAN_OFFSET))(this);
	}

	::System::Void MOJIFCMELGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHDNMKGLBJ_MOJIFCMELGI_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean LGPDEIDDJBB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MJHDNMKGLBJ_BBOMJDBNHIC_OFFSET))(this, KECKGDFIALJ, LGPDEIDDJBB);
	}

	::System::Void KCNBAOBGGBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHDNMKGLBJ_KCNBAOBGGBB_OFFSET))(this);
	}

	::System::Void CCLCMGFFNLM(::MoleMole::Battle::Entity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MJHDNMKGLBJ_CCLCMGFFNLM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 HJMIMLBMBOP()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHDNMKGLBJ_HJMIMLBMBOP_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* OLGLPNOCJMP()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHDNMKGLBJ_OLGLPNOCJMP_OFFSET))(this);
	}

	::MoleMole::Config::EntityType FFLLJNGADEI()
	{
		return ((::MoleMole::Config::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHDNMKGLBJ_FFLLJNGADEI_OFFSET))(this);
	}

	::System::Void FEKDNMHOMPI(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJHDNMKGLBJ_FEKDNMHOMPI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean CJBGCGPMGHA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHDNMKGLBJ_CJBGCGPMGHA_OFFSET))(this);
	}
};
