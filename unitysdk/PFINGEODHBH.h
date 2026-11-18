#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class IGMCGJEHGKH;
class IPCFDOGGOEI;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define PFINGEODHBH_BFLKBKBLLHK_OFFSET UNITYSDK_OFFSET(0x136F8250)
#define PFINGEODHBH_CJKKMPKHAKA_OFFSET UNITYSDK_OFFSET(0x136F9FE0)
#define PFINGEODHBH_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x136F7EA0)
#define PFINGEODHBH_DNGDOEPEEEO_OFFSET UNITYSDK_OFFSET(0x136FA080)
#define PFINGEODHBH_FBHHJFKLGMB_OFFSET UNITYSDK_OFFSET(0x136F9CC0)
#define PFINGEODHBH_FPMNDBLALMG_OFFSET UNITYSDK_OFFSET(0x136F9B10)
#define PFINGEODHBH_IIKPKDHGIGH_OFFSET UNITYSDK_OFFSET(0x136FA370)
#define PFINGEODHBH_INGNCLMEGID_OFFSET UNITYSDK_OFFSET(0x136F95C0)
#define PFINGEODHBH_LBMBLGDICDD_OFFSET UNITYSDK_OFFSET(0x136F8F60)
#define PFINGEODHBH_LPHNPCJNIJO_OFFSET UNITYSDK_OFFSET(0x136F8C00)
#define PFINGEODHBH_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x136FA3B0)
#define PFINGEODHBH_NKDHEEBIMIE_OFFSET UNITYSDK_OFFSET(0x136F86E0)
#define PFINGEODHBH_PHDDLAJKKPJ_OFFSET UNITYSDK_OFFSET(0x136F9D60)
#define PFINGEODHBH_POLMJBHFBAB_OFFSET UNITYSDK_OFFSET(0x136F8DC0)
#define PFINGEODHBH__CCTOR_OFFSET UNITYSDK_OFFSET(0x136F8240)
#define PFINGEODHBH__CTOR_OFFSET UNITYSDK_OFFSET(0x136F81F0)

inline static constexpr unsigned int PFINGEODHBH_TypeDefinitionIndex = 63386;

class PFINGEODHBH : public ::OAOOLPCNHKA
{
public:
	static ::MoleMole::Battle::Entity** StaticGet_DOOAIFGGDPK()
	{
		return (::MoleMole::Battle::Entity**)Il2CppClass::FromTypeDefinitionIndex(PFINGEODHBH_TypeDefinitionIndex)->GetStaticField(0x4C980);
	}
	::Nap::NapECS::EcsFilter* NOLKMMOIFME; // 0x20
	::Nap::NapECS::EcsFilter* BKGCDAOIGBH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFINGEODHBH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFINGEODHBH__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + PFINGEODHBH_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Boolean BFLKBKBLLHK(::IPCFDOGGOEI* KAANFDGOJGP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::IPCFDOGGOEI*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PFINGEODHBH_BFLKBKBLLHK_OFFSET))(KAANFDGOJGP, KECKGDFIALJ);
	}

	static ::System::Void NKDHEEBIMIE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PFINGEODHBH_NKDHEEBIMIE_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void POLMJBHFBAB(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PFINGEODHBH_POLMJBHFBAB_OFFSET))(NJNCGJLHLKC);
	}

	static ::System::Boolean LPHNPCJNIJO(::IPCFDOGGOEI* KAANFDGOJGP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::IPCFDOGGOEI*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PFINGEODHBH_LPHNPCJNIJO_OFFSET))(KAANFDGOJGP, KECKGDFIALJ);
	}

	static ::System::Void INGNCLMEGID(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PFINGEODHBH_INGNCLMEGID_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void LBMBLGDICDD(::Nap::NapECS::EcsEntity* DBIOAKNMBDM)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + PFINGEODHBH_LBMBLGDICDD_OFFSET))(DBIOAKNMBDM);
	}

	static ::System::Void PHDDLAJKKPJ(::System::String* MCOHLHMKLIP, ::System::Single& EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single&))((::PBYTE)hIl2Cpp + PFINGEODHBH_PHDDLAJKKPJ_OFFSET))(MCOHLHMKLIP, EGEGIMGMJHN);
	}

	static ::System::Void CJKKMPKHAKA(::MoleMole::Battle::Entity* FINEANOLAPH, ::IGMCGJEHGKH* IELJNOIAJPA)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::IGMCGJEHGKH*))((::PBYTE)hIl2Cpp + PFINGEODHBH_CJKKMPKHAKA_OFFSET))(FINEANOLAPH, IELJNOIAJPA);
	}

	static ::System::Void DNGDOEPEEEO(::System::UInt32 IPBIJKNELND)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PFINGEODHBH_DNGDOEPEEEO_OFFSET))(IPBIJKNELND);
	}

	static ::System::Void IIKPKDHGIGH(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + PFINGEODHBH_IIKPKDHGIGH_OFFSET))(KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + PFINGEODHBH_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void FBHHJFKLGMB(::IGMCGJEHGKH* MPKDFGDMBLA, ::IPCFDOGGOEI* DFMKILICPFB)
	{
		return ((::System::Void(*)(::IGMCGJEHGKH*, ::IPCFDOGGOEI*))((::PBYTE)hIl2Cpp + PFINGEODHBH_FBHHJFKLGMB_OFFSET))(MPKDFGDMBLA, DFMKILICPFB);
	}

	static ::System::Void FPMNDBLALMG(::MoleMole::Battle::Entity* DBIOAKNMBDM, ::IPCFDOGGOEI* DFMKILICPFB)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::IPCFDOGGOEI*))((::PBYTE)hIl2Cpp + PFINGEODHBH_FPMNDBLALMG_OFFSET))(DBIOAKNMBDM, DFMKILICPFB);
	}
};
