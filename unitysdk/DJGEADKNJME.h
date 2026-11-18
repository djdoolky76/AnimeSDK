#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class MHCEGPHDOID;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define DJGEADKNJME_AOOBMBBMAMD_OFFSET UNITYSDK_OFFSET(0x19D6A600)
#define DJGEADKNJME_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x19D69FE0)
#define DJGEADKNJME_BINPGCOKNOC_OFFSET UNITYSDK_OFFSET(0x19D6B170)
#define DJGEADKNJME_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x19D685B0)
#define DJGEADKNJME_EIOLHPOFGNG_OFFSET UNITYSDK_OFFSET(0x19D6B0C0)
#define DJGEADKNJME_EJEGNEKAEFA_OFFSET UNITYSDK_OFFSET(0x19D6A770)
#define DJGEADKNJME_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x19D68E40)
#define DJGEADKNJME_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x19D689A0)
#define DJGEADKNJME_JBPINIJENAJ_OFFSET UNITYSDK_OFFSET(0x19D68CC0)
#define DJGEADKNJME_KJEEKHOGPMG_OFFSET UNITYSDK_OFFSET(0x19D6A200)
#define DJGEADKNJME_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19D687E0)
#define DJGEADKNJME_LKAJMALAFNK_OFFSET UNITYSDK_OFFSET(0x19D6A0D0)
#define DJGEADKNJME_MDEIMEIHKOB_OFFSET UNITYSDK_OFFSET(0x19D697A0)
#define DJGEADKNJME_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x19D6AD10)
#define DJGEADKNJME_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x19D6A570)
#define DJGEADKNJME_NBEFFKIBJKL_OFFSET UNITYSDK_OFFSET(0x19D6ADA0)
#define DJGEADKNJME_NKLKEMEOIGP_OFFSET UNITYSDK_OFFSET(0x19D691A0)
#define DJGEADKNJME_NPIJFJJOBCA_OFFSET UNITYSDK_OFFSET(0x19D6A090)
#define DJGEADKNJME__CTOR_OFFSET UNITYSDK_OFFSET(0x19D68950)

inline static constexpr unsigned int DJGEADKNJME_TypeDefinitionIndex = 48484;

class DJGEADKNJME : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJGEADKNJME__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DJGEADKNJME_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJGEADKNJME_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DJGEADKNJME_ICJAPEMNLCF_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void JBPINIJENAJ(::MHCEGPHDOID* IGCDBHIPNIN, ::System::String* HLEOFFAOGBA, ::System::Collections::Generic::List_1<::System::String*>* HMKPPANMAEL)
	{
		return ((::System::Void(*)(::MHCEGPHDOID*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + DJGEADKNJME_JBPINIJENAJ_OFFSET))(IGCDBHIPNIN, HLEOFFAOGBA, HMKPPANMAEL);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DJGEADKNJME_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DJGEADKNJME_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Single LKAJMALAFNK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DJGEADKNJME_LKAJMALAFNK_OFFSET))(KECKGDFIALJ);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJGEADKNJME_MNEJHDIKCGJ_OFFSET))(this);
	}

	static ::System::Void NKLKEMEOIGP(::UnityEngine::Transform* IAPKABMDJNF, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DJGEADKNJME_NKLKEMEOIGP_OFFSET))(IAPKABMDJNF, KECKGDFIALJ);
	}

	static ::System::Void AOOBMBBMAMD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DJGEADKNJME_AOOBMBBMAMD_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Single KJEEKHOGPMG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DJGEADKNJME_KJEEKHOGPMG_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void MDEIMEIHKOB(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DJGEADKNJME_MDEIMEIHKOB_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void NPIJFJJOBCA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DJGEADKNJME_NPIJFJJOBCA_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void EJEGNEKAEFA(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DJGEADKNJME_EJEGNEKAEFA_OFFSET))(KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DJGEADKNJME_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void NBEFFKIBJKL(::MHCEGPHDOID*& IGCDBHIPNIN, ::System::Collections::Generic::List_1<::System::String*>*& HMKPPANMAEL)
	{
		return ((::System::Void(*)(::MHCEGPHDOID*&, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + DJGEADKNJME_NBEFFKIBJKL_OFFSET))(IGCDBHIPNIN, HMKPPANMAEL);
	}

	static ::System::Void EIOLHPOFGNG(::MHCEGPHDOID* IGCDBHIPNIN, ::System::String* HLEOFFAOGBA, ::System::Collections::Generic::List_1<::System::String*>* HMKPPANMAEL)
	{
		return ((::System::Void(*)(::MHCEGPHDOID*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + DJGEADKNJME_EIOLHPOFGNG_OFFSET))(IGCDBHIPNIN, HLEOFFAOGBA, HMKPPANMAEL);
	}

	static ::System::Void BINPGCOKNOC(::MHCEGPHDOID* IGCDBHIPNIN)
	{
		return ((::System::Void(*)(::MHCEGPHDOID*))((::PBYTE)hIl2Cpp + DJGEADKNJME_BINPGCOKNOC_OFFSET))(IGCDBHIPNIN);
	}
};
