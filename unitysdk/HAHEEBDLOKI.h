#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class GEIHCPAOKKK;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define HAHEEBDLOKI_ADNMHIJLNCJ_OFFSET UNITYSDK_OFFSET(0x146D8AE0)
#define HAHEEBDLOKI_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x146D9010)
#define HAHEEBDLOKI_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x146D8540)
#define HAHEEBDLOKI_FLENFHLCIPC_OFFSET UNITYSDK_OFFSET(0x146D8C90)
#define HAHEEBDLOKI_GADDCIGHFFH_OFFSET UNITYSDK_OFFSET(0x146D8DC0)
#define HAHEEBDLOKI_GNJLKHHJIAN_OFFSET UNITYSDK_OFFSET(0x146D9DC0)
#define HAHEEBDLOKI_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x146D9340)
#define HAHEEBDLOKI_JMGPPGCGKMP_OFFSET UNITYSDK_OFFSET(0x146D99E0)
#define HAHEEBDLOKI_LDCJONOBGEB_OFFSET UNITYSDK_OFFSET(0x146D8A50)
#define HAHEEBDLOKI_LGCPLMOBPEL_OFFSET UNITYSDK_OFFSET(0x146D9A70)
#define HAHEEBDLOKI_LPMKMCGIJHO_OFFSET UNITYSDK_OFFSET(0x146D9930)
#define HAHEEBDLOKI_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x146D9D30)
#define HAHEEBDLOKI_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x146D88C0)
#define HAHEEBDLOKI__CTOR_OFFSET UNITYSDK_OFFSET(0x146D8A00)

inline static constexpr unsigned int HAHEEBDLOKI_TypeDefinitionIndex = 63624;

class HAHEEBDLOKI : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHEEBDLOKI__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HAHEEBDLOKI_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHEEBDLOKI_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void LDCJONOBGEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHEEBDLOKI_LDCJONOBGEB_OFFSET))(this);
	}

	static ::System::Boolean ADNMHIJLNCJ()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HAHEEBDLOKI_ADNMHIJLNCJ_OFFSET))();
	}

	static ::System::Void FLENFHLCIPC(::System::Boolean FBILHHBPEHD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + HAHEEBDLOKI_FLENFHLCIPC_OFFSET))(FBILHHBPEHD, KECKGDFIALJ);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + HAHEEBDLOKI_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HAHEEBDLOKI_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void LPMKMCGIJHO(::System::Int32 PIPGGOOELKG)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HAHEEBDLOKI_LPMKMCGIJHO_OFFSET))(PIPGGOOELKG);
	}

	static ::System::Void JMGPPGCGKMP(::System::Int32 PIPGGOOELKG)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HAHEEBDLOKI_JMGPPGCGKMP_OFFSET))(PIPGGOOELKG);
	}

	static ::System::Void LGCPLMOBPEL(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HAHEEBDLOKI_LGCPLMOBPEL_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void GADDCIGHFFH(::GEIHCPAOKKK* OHPJHPEOFLD, ::System::Boolean ABFKELONANO)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::System::Boolean))((::PBYTE)hIl2Cpp + HAHEEBDLOKI_GADDCIGHFFH_OFFSET))(OHPJHPEOFLD, ABFKELONANO);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HAHEEBDLOKI_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void GNJLKHHJIAN(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + HAHEEBDLOKI_GNJLKHHJIAN_OFFSET))(MNGHGOLKKNO);
	}
};
