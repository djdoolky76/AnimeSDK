#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
class FNDAEEHOHPG;
class NCDMMMLNAMM;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KAPONGCPEDL_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x152BC320)
#define KAPONGCPEDL_BKGILOAMMJO_OFFSET UNITYSDK_OFFSET(0x152BB000)
#define KAPONGCPEDL_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x152BA970)
#define KAPONGCPEDL_DODAPNFEFFJ_OFFSET UNITYSDK_OFFSET(0x152BB2D0)
#define KAPONGCPEDL_EJJDPMIDNKN_OFFSET UNITYSDK_OFFSET(0x152BB6E0)
#define KAPONGCPEDL_EOHGCHGIGPF_OFFSET UNITYSDK_OFFSET(0x152BC080)
#define KAPONGCPEDL_GLEAKOEFKKF_OFFSET UNITYSDK_OFFSET(0x152BC5C0)
#define KAPONGCPEDL_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x152BCB70)
#define KAPONGCPEDL_IHKPECEAEEH_OFFSET UNITYSDK_OFFSET(0x152BBD20)
#define KAPONGCPEDL_KGCPABHFIGI_OFFSET UNITYSDK_OFFSET(0x152BBA80)
#define KAPONGCPEDL_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x152BC930)
#define KAPONGCPEDL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x152BAE40)
#define KAPONGCPEDL_MAAKGJFMCMJ_OFFSET UNITYSDK_OFFSET(0x152BBE60)
#define KAPONGCPEDL_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x152BD1A0)
#define KAPONGCPEDL_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x152BB240)
#define KAPONGCPEDL_NCNDLKPLDAD_OFFSET UNITYSDK_OFFSET(0x152BB9E0)
#define KAPONGCPEDL_NFADEGJBFGP_OFFSET UNITYSDK_OFFSET(0x152BC810)
#define KAPONGCPEDL_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x152BCDC0)
#define KAPONGCPEDL__CTOR_OFFSET UNITYSDK_OFFSET(0x152BAFB0)

inline static constexpr unsigned int KAPONGCPEDL_TypeDefinitionIndex = 93012;

class KAPONGCPEDL : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPONGCPEDL__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KAPONGCPEDL_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPONGCPEDL_LATEUPDATE_OFFSET))(this);
	}

	::NCDMMMLNAMM* BKGILOAMMJO(::System::Int32 FKNCCOGAGNF)
	{
		return ((::NCDMMMLNAMM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KAPONGCPEDL_BKGILOAMMJO_OFFSET))(this, FKNCCOGAGNF);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAPONGCPEDL_MNEJHDIKCGJ_OFFSET))(this);
	}

	static ::System::Void DODAPNFEFFJ(::System::Int32 AEIAFDJOACK, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KAPONGCPEDL_DODAPNFEFFJ_OFFSET))(AEIAFDJOACK, KECKGDFIALJ);
	}

	::System::Boolean NCNDLKPLDAD(::NCDMMMLNAMM* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::NCDMMMLNAMM*))((::PBYTE)hIl2Cpp + KAPONGCPEDL_NCNDLKPLDAD_OFFSET))(this, IPMMCGDMODG);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Byte>* KGCPABHFIGI(::FNDAEEHOHPG* FDHDCLGKCHK)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Byte>*(*)(::FNDAEEHOHPG*))((::PBYTE)hIl2Cpp + KAPONGCPEDL_KGCPABHFIGI_OFFSET))(FDHDCLGKCHK);
	}

	static ::System::Void IHKPECEAEEH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KAPONGCPEDL_IHKPECEAEEH_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void MAAKGJFMCMJ(::System::Int32 AEIAFDJOACK)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + KAPONGCPEDL_MAAKGJFMCMJ_OFFSET))(AEIAFDJOACK);
	}

	static ::System::Boolean EOHGCHGIGPF(::FNDAEEHOHPG* FDHDCLGKCHK)
	{
		return ((::System::Boolean(*)(::FNDAEEHOHPG*))((::PBYTE)hIl2Cpp + KAPONGCPEDL_EOHGCHGIGPF_OFFSET))(FDHDCLGKCHK);
	}

	static ::System::Void EJJDPMIDNKN(::System::Int32 AEIAFDJOACK, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::NCDMMMLNAMM* IAALOFKAFHM)
	{
		return ((::System::Void(*)(::System::Int32, ::MoleMole::Battle::Entity*, ::NCDMMMLNAMM*))((::PBYTE)hIl2Cpp + KAPONGCPEDL_EJJDPMIDNKN_OFFSET))(AEIAFDJOACK, KECKGDFIALJ, IAALOFKAFHM);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + KAPONGCPEDL_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void GLEAKOEFKKF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KAPONGCPEDL_GLEAKOEFKKF_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Void NFADEGJBFGP(::FNDAEEHOHPG* FDHDCLGKCHK)
	{
		return ((::System::Void(*)(::FNDAEEHOHPG*))((::PBYTE)hIl2Cpp + KAPONGCPEDL_NFADEGJBFGP_OFFSET))(FDHDCLGKCHK);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KAPONGCPEDL_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KAPONGCPEDL_ICJAPEMNLCF_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + KAPONGCPEDL_PMHJBNNPCLB_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + KAPONGCPEDL_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
