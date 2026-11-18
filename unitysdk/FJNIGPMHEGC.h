#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBNDFLEHNKF.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define FJNIGPMHEGC_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x14101180)
#define FJNIGPMHEGC_BAMKOKHBOKE_OFFSET UNITYSDK_OFFSET(0x141012F0)
#define FJNIGPMHEGC_CHEGHCGNLFG_OFFSET UNITYSDK_OFFSET(0x14100E00)
#define FJNIGPMHEGC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x141003A0)
#define FJNIGPMHEGC_DOGNNHGLFOJ_OFFSET UNITYSDK_OFFSET(0x14100EB0)
#define FJNIGPMHEGC_GGKFPFCOMHE_OFFSET UNITYSDK_OFFSET(0x141006A0)
#define FJNIGPMHEGC_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x141009D0)
#define FJNIGPMHEGC_LLAOJCLPGAK_OFFSET UNITYSDK_OFFSET(0x141010B0)
#define FJNIGPMHEGC_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x141010F0)
#define FJNIGPMHEGC_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x14100860)
#define FJNIGPMHEGC__CTOR_OFFSET UNITYSDK_OFFSET(0x14100650)

inline static constexpr unsigned int FJNIGPMHEGC_TypeDefinitionIndex = 87083;

class FJNIGPMHEGC : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNIGPMHEGC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + FJNIGPMHEGC_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::KBNDFLEHNKF GGKFPFCOMHE()
	{
		return ((::KBNDFLEHNKF(*)())((::PBYTE)hIl2Cpp + FJNIGPMHEGC_GGKFPFCOMHE_OFFSET))();
	}

	::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + FJNIGPMHEGC_PMHJBNNPCLB_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FJNIGPMHEGC_KOLPCLEMHGJ_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void CHEGHCGNLFG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FJNIGPMHEGC_CHEGHCGNLFG_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void DOGNNHGLFOJ(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FJNIGPMHEGC_DOGNNHGLFOJ_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean LLAOJCLPGAK()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJNIGPMHEGC_LLAOJCLPGAK_OFFSET))();
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + FJNIGPMHEGC_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + FJNIGPMHEGC_APAGIJMHEAK_OFFSET))(this, EIFONLCJOPG);
	}

	static ::System::Void BAMKOKHBOKE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJNIGPMHEGC_BAMKOKHBOKE_OFFSET))();
	}
};
