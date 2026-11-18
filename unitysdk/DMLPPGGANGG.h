#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ECNDAMAIADN;
class ENGKPGFGGLM;
class JEKHBPGEDKO;
class JMPHGLMDPGK;
namespace MoleMole { class MonoStageCamera; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define DMLPPGGANGG_AMFICBHGELJ_OFFSET UNITYSDK_OFFSET(0x12BD0490)
#define DMLPPGGANGG_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x12BCFB20)
#define DMLPPGGANGG_CIGLPHNBELJ_OFFSET UNITYSDK_OFFSET(0x12BD11A0)
#define DMLPPGGANGG_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x12BCF830)
#define DMLPPGGANGG_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12BCE6E0)
#define DMLPPGGANGG_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x12BD04E0)
#define DMLPPGGANGG_FBMOADOIGDK_OFFSET UNITYSDK_OFFSET(0x12BCFBC0)
#define DMLPPGGANGG_FINDJGCIHMJ_OFFSET UNITYSDK_OFFSET(0x12BCFA30)
#define DMLPPGGANGG_HBKIDDKIBCP_OFFSET UNITYSDK_OFFSET(0x12BCFDE0)
#define DMLPPGGANGG_ILONDINGDNG_OFFSET UNITYSDK_OFFSET(0x12BD0CC0)
#define DMLPPGGANGG_JDOELLFIFID_OFFSET UNITYSDK_OFFSET(0x12BCF950)
#define DMLPPGGANGG_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x12BD0800)
#define DMLPPGGANGG_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12BCF2C0)
#define DMLPPGGANGG_MDNJFGJFJID_OFFSET UNITYSDK_OFFSET(0x12BD0670)
#define DMLPPGGANGG_MJBOOMIIJIB_OFFSET UNITYSDK_OFFSET(0x12BCFC50)
#define DMLPPGGANGG_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x12BCF8C0)
#define DMLPPGGANGG_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x12BD0400)
#define DMLPPGGANGG_PBPFEJHNIBN_OFFSET UNITYSDK_OFFSET(0x12BCF480)
#define DMLPPGGANGG_PJPFHFANPAE_OFFSET UNITYSDK_OFFSET(0x12BCFFC0)
#define DMLPPGGANGG_PPAEALIJPJO_OFFSET UNITYSDK_OFFSET(0x12BCFE30)
#define DMLPPGGANGG_UPDATE_OFFSET UNITYSDK_OFFSET(0x12BCF150)
#define DMLPPGGANGG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BCF430)

inline static constexpr unsigned int DMLPPGGANGG_TypeDefinitionIndex = 57926;

class DMLPPGGANGG : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20
	::Nap::NapECS::EcsFilter* DDCLMCMLKJK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLPPGGANGG__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLPPGGANGG_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLPPGGANGG_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void PBPFEJHNIBN(::JMPHGLMDPGK* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::JMPHGLMDPGK*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_PBPFEJHNIBN_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLPPGGANGG_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JDOELLFIFID(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_JDOELLFIFID_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::MoleMole::MonoStageCamera* FINDJGCIHMJ(::JEKHBPGEDKO* KOIGKPFMKOE, ::System::String* PFMBCLFOFDO)
	{
		return ((::MoleMole::MonoStageCamera*(*)(::JEKHBPGEDKO*, ::System::String*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_FINDJGCIHMJ_OFFSET))(KOIGKPFMKOE, PFMBCLFOFDO);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void FBMOADOIGDK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_FBMOADOIGDK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void MJBOOMIIJIB(::MoleMole::Battle::Entity* FINEANOLAPH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO, ::System::Double GOKEGHENOGP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_MJBOOMIIJIB_OFFSET))(FINEANOLAPH, KGGJCGPMAIH, BPEGDPLGFPO, GOKEGHENOGP, KECKGDFIALJ);
	}

	::System::Void HBKIDDKIBCP(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_HBKIDDKIBCP_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void PPAEALIJPJO(::MoleMole::Battle::Entity* FINEANOLAPH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO, ::System::Double GOKEGHENOGP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_PPAEALIJPJO_OFFSET))(FINEANOLAPH, KGGJCGPMAIH, BPEGDPLGFPO, GOKEGHENOGP, KECKGDFIALJ);
	}

	::System::Void PJPFHFANPAE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_PJPFHFANPAE_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLPPGGANGG_MNEJHDIKCGJ_OFFSET))(this);
	}

	::System::Void AMFICBHGELJ(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_AMFICBHGELJ_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_DIEPHAJCGOE_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void MDNJFGJFJID(::MoleMole::Battle::Entity* FINEANOLAPH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO, ::System::Double GOKEGHENOGP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_MDNJFGJFJID_OFFSET))(FINEANOLAPH, KGGJCGPMAIH, BPEGDPLGFPO, GOKEGHENOGP, KECKGDFIALJ);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Boolean ILONDINGDNG(::ECNDAMAIADN* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::ECNDAMAIADN*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_ILONDINGDNG_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void CIGLPHNBELJ(::MoleMole::Battle::Entity* FINEANOLAPH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO, ::System::Double GOKEGHENOGP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DMLPPGGANGG_CIGLPHNBELJ_OFFSET))(FINEANOLAPH, KGGJCGPMAIH, BPEGDPLGFPO, GOKEGHENOGP, KECKGDFIALJ);
	}
};
