#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJHKEDBIPPK.h"
#include "unitysdk/NIGJBOIMNNH.h"

class AKHOKICACBA;
class CFFGNJNAMBD;
class ENGKPGFGGLM;
class FAOLDKHFLCM;
class OPEDCIFAAAE;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define PDPNPMHMKEJ_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1A7ED070)
#define PDPNPMHMKEJ_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1A7EBC90)
#define PDPNPMHMKEJ_DDDGDIOLBJO_OFFSET UNITYSDK_OFFSET(0x1A7ECF30)
#define PDPNPMHMKEJ_GMOLNPIFHFB_OFFSET UNITYSDK_OFFSET(0x1A7ECF70)
#define PDPNPMHMKEJ_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x1A7EC790)
#define PDPNPMHMKEJ_IDJCOGLHEIG_OFFSET UNITYSDK_OFFSET(0x1A7ECB20)
#define PDPNPMHMKEJ_JCPNOIALICE_OFFSET UNITYSDK_OFFSET(0x1A7EC380)
#define PDPNPMHMKEJ_KOABMBELODE_OFFSET UNITYSDK_OFFSET(0x1A7EC7D0)
#define PDPNPMHMKEJ_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x1A7EBF60)
#define PDPNPMHMKEJ_MCPDCEDEGFG_OFFSET UNITYSDK_OFFSET(0x1A7EC0B0)
#define PDPNPMHMKEJ_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1A7EBED0)
#define PDPNPMHMKEJ_NKNLGJJPGCJ_OFFSET UNITYSDK_OFFSET(0x1A7EC570)
#define PDPNPMHMKEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EBE80)

inline static constexpr unsigned int PDPNPMHMKEJ_TypeDefinitionIndex = 65668;

class PDPNPMHMKEJ : public ::NIGJBOIMNNH
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPNPMHMKEJ__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + PDPNPMHMKEJ_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + PDPNPMHMKEJ_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PDPNPMHMKEJ_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PDPNPMHMKEJ_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void JCPNOIALICE(::OPEDCIFAAAE* JNJIMEMCGCO, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::OPEDCIFAAAE*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PDPNPMHMKEJ_JCPNOIALICE_OFFSET))(JNJIMEMCGCO, KECKGDFIALJ);
	}

	static ::System::Void KOABMBELODE(::AKHOKICACBA* MIMNNMMMJJF)
	{
		return ((::System::Void(*)(::AKHOKICACBA*))((::PBYTE)hIl2Cpp + PDPNPMHMKEJ_KOABMBELODE_OFFSET))(MIMNNMMMJJF);
	}

	static ::System::Void IDJCOGLHEIG(::HJHKEDBIPPK HJLNBEJMCJO)
	{
		return ((::System::Void(*)(::HJHKEDBIPPK))((::PBYTE)hIl2Cpp + PDPNPMHMKEJ_IDJCOGLHEIG_OFFSET))(HJLNBEJMCJO);
	}

	static ::System::Void DDDGDIOLBJO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDPNPMHMKEJ_DDDGDIOLBJO_OFFSET))();
	}

	static ::System::Boolean GMOLNPIFHFB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PDPNPMHMKEJ_GMOLNPIFHFB_OFFSET))();
	}

	static ::System::Boolean NKNLGJJPGCJ(::CFFGNJNAMBD* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::CFFGNJNAMBD*))((::PBYTE)hIl2Cpp + PDPNPMHMKEJ_NKNLGJJPGCJ_OFFSET))(FFNKDGGHBPP);
	}

	static ::System::Boolean MCPDCEDEGFG(::FAOLDKHFLCM* FFNKDGGHBPP)
	{
		return ((::System::Boolean(*)(::FAOLDKHFLCM*))((::PBYTE)hIl2Cpp + PDPNPMHMKEJ_MCPDCEDEGFG_OFFSET))(FFNKDGGHBPP);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + PDPNPMHMKEJ_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}
};
