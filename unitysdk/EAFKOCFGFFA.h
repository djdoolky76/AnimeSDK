#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EIEJNAJKLHK_BHJPKEBPGOB.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EIEJNAJKLHK;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace UnityEngine { class Animator; }

#define EAFKOCFGFFA_AEJDDJONJJE_OFFSET UNITYSDK_OFFSET(0x7FE1660)
#define EAFKOCFGFFA_AKKFFCDMFGJ_OFFSET UNITYSDK_OFFSET(0x7FE1F60)
#define EAFKOCFGFFA_BDOCNGEPPOM_OFFSET UNITYSDK_OFFSET(0x7FE2960)
#define EAFKOCFGFFA_CDGEIMLAMAI_OFFSET UNITYSDK_OFFSET(0x7FE1F40)
#define EAFKOCFGFFA_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x7FE16B0)
#define EAFKOCFGFFA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x7FE1210)
#define EAFKOCFGFFA_DCEAGCDKBME_OFFSET UNITYSDK_OFFSET(0x7FE1740)
#define EAFKOCFGFFA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x7FE28D0)
#define EAFKOCFGFFA_NFIHDHABECJ_OFFSET UNITYSDK_OFFSET(0x7FE2150)
#define EAFKOCFGFFA_NJKDBMLPHLG_OFFSET UNITYSDK_OFFSET(0x7FE2510)
#define EAFKOCFGFFA_OLOEEIFCDKH_OFFSET UNITYSDK_OFFSET(0x7FE2240)
#define EAFKOCFGFFA_UPDATE_OFFSET UNITYSDK_OFFSET(0x7FE14A0)
#define EAFKOCFGFFA__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE1610)

inline static constexpr unsigned int EAFKOCFGFFA_TypeDefinitionIndex = 66599;

class EAFKOCFGFFA : public ::OAOOLPCNHKA
{
public:
	// static const ::System::Single LNOPFOKMHCB; // 0x0
	::Nap::NapECS::EcsFilter* BKGCDAOIGBH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFKOCFGFFA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + EAFKOCFGFFA_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFKOCFGFFA_UPDATE_OFFSET))(this);
	}

	static ::System::Void AEJDDJONJJE(::EIEJNAJKLHK* KKPFEIGFAKK, ::UnityEngine::Animator* ICAAMDMMDDJ, ::System::Boolean GPCHIMBGNJO)
	{
		return ((::System::Void(*)(::EIEJNAJKLHK*, ::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + EAFKOCFGFFA_AEJDDJONJJE_OFFSET))(KKPFEIGFAKK, ICAAMDMMDDJ, GPCHIMBGNJO);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAFKOCFGFFA_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void DCEAGCDKBME(::EIEJNAJKLHK* PKJPAJFJOFK, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::EIEJNAJKLHK*, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + EAFKOCFGFFA_DCEAGCDKBME_OFFSET))(PKJPAJFJOFK, KECKGDFIALJ, PBCAAADNEPK);
	}

	static ::System::Void CDGEIMLAMAI(::EIEJNAJKLHK* OJCMELAIFJE, ::EIEJNAJKLHK_BHJPKEBPGOB EEMJAKOJHBG)
	{
		return ((::System::Void(*)(::EIEJNAJKLHK*, ::EIEJNAJKLHK_BHJPKEBPGOB))((::PBYTE)hIl2Cpp + EAFKOCFGFFA_CDGEIMLAMAI_OFFSET))(OJCMELAIFJE, EEMJAKOJHBG);
	}

	static ::System::Boolean NFIHDHABECJ(::EIEJNAJKLHK* OJCMELAIFJE)
	{
		return ((::System::Boolean(*)(::EIEJNAJKLHK*))((::PBYTE)hIl2Cpp + EAFKOCFGFFA_NFIHDHABECJ_OFFSET))(OJCMELAIFJE);
	}

	static ::System::Void NJKDBMLPHLG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EAFKOCFGFFA_NJKDBMLPHLG_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void OLOEEIFCDKH(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean GELCBJDLBII)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + EAFKOCFGFFA_OLOEEIFCDKH_OFFSET))(KECKGDFIALJ, GELCBJDLBII);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + EAFKOCFGFFA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::UnityEngine::Vector3 AKKFFCDMFGJ()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + EAFKOCFGFFA_AKKFFCDMFGJ_OFFSET))();
	}

	static ::System::Void BDOCNGEPPOM(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EAFKOCFGFFA_BDOCNGEPPOM_OFFSET))(NJNCGJLHLKC);
	}
};
