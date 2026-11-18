#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class CGKMBHKOFKF;
class ENGKPGFGGLM;
class HENCJHMEDDK;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define EJFMOALHEBG_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x11CAAD20)
#define EJFMOALHEBG_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x11CAAD80)
#define EJFMOALHEBG_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16BF02D0)
#define EJFMOALHEBG_FLNKHKMHJNM_OFFSET UNITYSDK_OFFSET(0x16BF0800)
#define EJFMOALHEBG_GLEAKOEFKKF_OFFSET UNITYSDK_OFFSET(0x11CAACE0)
#define EJFMOALHEBG_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x16BF12F0)
#define EJFMOALHEBG_JIHLONEPPGH_OFFSET UNITYSDK_OFFSET(0x11CAA760)
#define EJFMOALHEBG_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x16BF0740)
#define EJFMOALHEBG_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x11CAAE10)
#define EJFMOALHEBG_OBEPJBLIACE_OFFSET UNITYSDK_OFFSET(0x11CAAA20)
#define EJFMOALHEBG_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x11CAAC80)
#define EJFMOALHEBG_UPDATE_OFFSET UNITYSDK_OFFSET(0x16BF0580)
#define EJFMOALHEBG__CTOR_OFFSET UNITYSDK_OFFSET(0x16BF06F0)

inline static constexpr unsigned int EJFMOALHEBG_TypeDefinitionIndex = 90667;

class EJFMOALHEBG : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFMOALHEBG__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + EJFMOALHEBG_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFMOALHEBG_UPDATE_OFFSET))(this);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EJFMOALHEBG_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void ICJAPEMNLCF(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + EJFMOALHEBG_ICJAPEMNLCF_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void FLNKHKMHJNM(::CGKMBHKOFKF* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::CGKMBHKOFKF*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EJFMOALHEBG_FLNKHKMHJNM_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void JIHLONEPPGH(::MoleMole::Battle::Entity* MFMPICKHAMJ, ::System::Int32 BOBBHFPEPHC, ::CGKMBHKOFKF* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::CGKMBHKOFKF*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EJFMOALHEBG_JIHLONEPPGH_OFFSET))(MFMPICKHAMJ, BOBBHFPEPHC, FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void OBEPJBLIACE(::System::Single PMNLNNGEIFM, ::HENCJHMEDDK* IBOPEAMOIGG)
	{
		return ((::System::Void(*)(::System::Single, ::HENCJHMEDDK*))((::PBYTE)hIl2Cpp + EJFMOALHEBG_OBEPJBLIACE_OFFSET))(PMNLNNGEIFM, IBOPEAMOIGG);
	}

	static ::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + EJFMOALHEBG_PMHJBNNPCLB_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Void GLEAKOEFKKF(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + EJFMOALHEBG_GLEAKOEFKKF_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + EJFMOALHEBG_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFMOALHEBG_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + EJFMOALHEBG_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
