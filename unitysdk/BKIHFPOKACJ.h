#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class ENGKPGFGGLM;
class HGGBGKKEBCC;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define BKIHFPOKACJ_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x115F7530)
#define BKIHFPOKACJ_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x115F69B0)
#define BKIHFPOKACJ_HFNFICPFPAK_OFFSET UNITYSDK_OFFSET(0x115F7360)
#define BKIHFPOKACJ_HOIJICBODBD_OFFSET UNITYSDK_OFFSET(0x115F6CC0)
#define BKIHFPOKACJ_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x115F6C50)
#define BKIHFPOKACJ_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x115F72D0)
#define BKIHFPOKACJ__CTOR_OFFSET UNITYSDK_OFFSET(0x115F6C00)

inline static constexpr unsigned int BKIHFPOKACJ_TypeDefinitionIndex = 55076;

class BKIHFPOKACJ : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIHFPOKACJ__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BKIHFPOKACJ_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BKIHFPOKACJ_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + BKIHFPOKACJ_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void HOIJICBODBD(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BKIHFPOKACJ_HOIJICBODBD_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void HFNFICPFPAK(::HGGBGKKEBCC* EIFBJGMCAEN, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::HGGBGKKEBCC*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BKIHFPOKACJ_HFNFICPFPAK_OFFSET))(EIFBJGMCAEN, KECKGDFIALJ);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + BKIHFPOKACJ_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}
};
