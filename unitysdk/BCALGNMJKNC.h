#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
class HOCDCNHMELA;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define BCALGNMJKNC_CJHGLMNDCEB_OFFSET UNITYSDK_OFFSET(0x113D50C0)
#define BCALGNMJKNC_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x113D4F70)
#define BCALGNMJKNC_COKOAFBOEKP_OFFSET UNITYSDK_OFFSET(0x113D5950)
#define BCALGNMJKNC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x113D34A0)
#define BCALGNMJKNC_FNFPHODEELN_OFFSET UNITYSDK_OFFSET(0x113D5750)
#define BCALGNMJKNC_GLDLNIPCKBA_OFFSET UNITYSDK_OFFSET(0x113D4630)
#define BCALGNMJKNC_HLDDHCEOEFE_OFFSET UNITYSDK_OFFSET(0x113D5190)
#define BCALGNMJKNC_IHBJIKOLLNN_OFFSET UNITYSDK_OFFSET(0x113D5A50)
#define BCALGNMJKNC_JFKCKEGEGNA_OFFSET UNITYSDK_OFFSET(0x113D5250)
#define BCALGNMJKNC_KLAPNPIJGHP_OFFSET UNITYSDK_OFFSET(0x113D48C0)
#define BCALGNMJKNC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x113D44B0)
#define BCALGNMJKNC_MEJEBAIHGHC_OFFSET UNITYSDK_OFFSET(0x113D5390)
#define BCALGNMJKNC_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x113D5300)
#define BCALGNMJKNC_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x113D58C0)
#define BCALGNMJKNC_NABCEMBGCGO_OFFSET UNITYSDK_OFFSET(0x113D5530)
#define BCALGNMJKNC_PHPGOKHJAKI_OFFSET UNITYSDK_OFFSET(0x113D5000)
#define BCALGNMJKNC_UPDATE_OFFSET UNITYSDK_OFFSET(0x113D4770)
#define BCALGNMJKNC__CTOR_OFFSET UNITYSDK_OFFSET(0x113D4F20)

inline static constexpr unsigned int BCALGNMJKNC_TypeDefinitionIndex = 76803;

class BCALGNMJKNC : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* BJEANMIIEJL; // 0x20
	::Nap::NapECS::EcsFilter* CHGBAHLDNMD; // 0x28
	::Nap::NapECS::EcsFilter* BKGCDAOIGBH; // 0x30
	::Nap::NapECS::EcsFilter* JCGCCDPCLNB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCALGNMJKNC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BCALGNMJKNC_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCALGNMJKNC_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCALGNMJKNC_UPDATE_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCALGNMJKNC_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void PHPGOKHJAKI(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BCALGNMJKNC_PHPGOKHJAKI_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void HLDDHCEOEFE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BCALGNMJKNC_HLDDHCEOEFE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void JFKCKEGEGNA(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BCALGNMJKNC_JFKCKEGEGNA_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void CJHGLMNDCEB(::HOCDCNHMELA* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::HOCDCNHMELA*))((::PBYTE)hIl2Cpp + BCALGNMJKNC_CJHGLMNDCEB_OFFSET))(FFNKDGGHBPP);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BCALGNMJKNC_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void MEJEBAIHGHC(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BCALGNMJKNC_MEJEBAIHGHC_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void GLDLNIPCKBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCALGNMJKNC_GLDLNIPCKBA_OFFSET))(this);
	}

	static ::System::Void NABCEMBGCGO(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BCALGNMJKNC_NABCEMBGCGO_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void FNFPHODEELN(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BCALGNMJKNC_FNFPHODEELN_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::MoleMole::Battle::Entity* KLAPNPIJGHP()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCALGNMJKNC_KLAPNPIJGHP_OFFSET))(this);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCALGNMJKNC_MNEJHDIKCGJ_OFFSET))(this);
	}

	::System::Void COKOAFBOEKP(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BCALGNMJKNC_COKOAFBOEKP_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void IHBJIKOLLNN(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BCALGNMJKNC_IHBJIKOLLNN_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}
};
