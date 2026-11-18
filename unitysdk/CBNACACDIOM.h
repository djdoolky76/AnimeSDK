#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
class MDEKNCGIEDI;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CBNACACDIOM_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x147818F0)
#define CBNACACDIOM_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x14780DD0)
#define CBNACACDIOM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x147808A0)
#define CBNACACDIOM_GLEAKOEFKKF_OFFSET UNITYSDK_OFFSET(0x14780D80)
#define CBNACACDIOM_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x14781410)
#define CBNACACDIOM_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x14780E60)
#define CBNACACDIOM_MHNKAIALBJL_OFFSET UNITYSDK_OFFSET(0x14781CD0)
#define CBNACACDIOM_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x14781060)
#define CBNACACDIOM_OBJABEKGHOE_OFFSET UNITYSDK_OFFSET(0x14781460)
#define CBNACACDIOM_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x147810F0)
#define CBNACACDIOM_UPDATE_OFFSET UNITYSDK_OFFSET(0x14780BC0)
#define CBNACACDIOM__CTOR_OFFSET UNITYSDK_OFFSET(0x14780D30)

inline static constexpr unsigned int CBNACACDIOM_TypeDefinitionIndex = 83994;

class CBNACACDIOM : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNACACDIOM__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CBNACACDIOM_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNACACDIOM_UPDATE_OFFSET))(this);
	}

	::System::Void GLEAKOEFKKF(::MDEKNCGIEDI* KCNLHKJJDLL)
	{
		return ((::System::Void(*)(::PVOID, ::MDEKNCGIEDI*))((::PBYTE)hIl2Cpp + CBNACACDIOM_GLEAKOEFKKF_OFFSET))(this, KCNLHKJJDLL);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNACACDIOM_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CBNACACDIOM_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CBNACACDIOM_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CBNACACDIOM_PMHJBNNPCLB_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void OBJABEKGHOE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CBNACACDIOM_OBJABEKGHOE_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CBNACACDIOM_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void MHNKAIALBJL(::MDEKNCGIEDI* KCNLHKJJDLL)
	{
		return ((::System::Void(*)(::MDEKNCGIEDI*))((::PBYTE)hIl2Cpp + CBNACACDIOM_MHNKAIALBJL_OFFSET))(KCNLHKJJDLL);
	}

	::System::Void ICJAPEMNLCF(::MDEKNCGIEDI* KCNLHKJJDLL)
	{
		return ((::System::Void(*)(::PVOID, ::MDEKNCGIEDI*))((::PBYTE)hIl2Cpp + CBNACACDIOM_ICJAPEMNLCF_OFFSET))(this, KCNLHKJJDLL);
	}
};
