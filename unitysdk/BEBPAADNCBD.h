#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
class HJDNNLKBHBA;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define BEBPAADNCBD_ABNFKPHODGD_OFFSET UNITYSDK_OFFSET(0x12D1DE00)
#define BEBPAADNCBD_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x12D1EF70)
#define BEBPAADNCBD_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12D1D340)
#define BEBPAADNCBD_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x12D1E1B0)
#define BEBPAADNCBD_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x12D1EFC0)
#define BEBPAADNCBD_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x12D1D850)
#define BEBPAADNCBD_JFIJPEBCKKI_OFFSET UNITYSDK_OFFSET(0x12D1DB80)
#define BEBPAADNCBD_JGFEPAIPGGD_1_OFFSET UNITYSDK_OFFSET(0x12D1F3A0)
#define BEBPAADNCBD_JGFEPAIPGGD_OFFSET UNITYSDK_OFFSET(0x12D1ECB0)
#define BEBPAADNCBD_LPPLPDIACAH_OFFSET UNITYSDK_OFFSET(0x12D1EF00)
#define BEBPAADNCBD_MEJGJNPFIGF_OFFSET UNITYSDK_OFFSET(0x12D1E240)
#define BEBPAADNCBD_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x12D1EE70)
#define BEBPAADNCBD_PLBMPALJMON_OFFSET UNITYSDK_OFFSET(0x12D1E150)
#define BEBPAADNCBD_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x12D1D7B0)
#define BEBPAADNCBD__CTOR_OFFSET UNITYSDK_OFFSET(0x12D1D760)

inline static constexpr unsigned int BEBPAADNCBD_TypeDefinitionIndex = 92135;

class BEBPAADNCBD : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEBPAADNCBD__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BEBPAADNCBD_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + BEBPAADNCBD_PMHJBNNPCLB_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void JFIJPEBCKKI(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + BEBPAADNCBD_JFIJPEBCKKI_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean ABNFKPHODGD(::System::Int32 MJILCAFPFFA)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + BEBPAADNCBD_ABNFKPHODGD_OFFSET))(MJILCAFPFFA);
	}

	static ::System::Void PLBMPALJMON(::HJDNNLKBHBA* ABMGKBFMFFD)
	{
		return ((::System::Void(*)(::HJDNNLKBHBA*))((::PBYTE)hIl2Cpp + BEBPAADNCBD_PLBMPALJMON_OFFSET))(ABMGKBFMFFD);
	}

	static ::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BEBPAADNCBD_DIEPHAJCGOE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void MEJGJNPFIGF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BEBPAADNCBD_MEJGJNPFIGF_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean JGFEPAIPGGD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BEBPAADNCBD_JGFEPAIPGGD_OFFSET))(KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BEBPAADNCBD_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void LPPLPDIACAH(::HJDNNLKBHBA* ABMGKBFMFFD, ::MoleMole::Config::BaseProperty BGJOPBCCMOC)
	{
		return ((::System::Void(*)(::HJDNNLKBHBA*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + BEBPAADNCBD_LPPLPDIACAH_OFFSET))(ABMGKBFMFFD, BGJOPBCCMOC);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + BEBPAADNCBD_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BEBPAADNCBD_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BEBPAADNCBD_ICJAPEMNLCF_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean JGFEPAIPGGD_1(::System::Int32 MJILCAFPFFA)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + BEBPAADNCBD_JGFEPAIPGGD_1_OFFSET))(MJILCAFPFFA);
	}
};
