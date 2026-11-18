#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class DMMFJBHLLEI;
class ENGKPGFGGLM;
class NGCINGEDCNK;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define LKDFEIKIIKB_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x184FC6D0)
#define LKDFEIKIIKB_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x184FC940)
#define LKDFEIKIIKB_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x184FBA90)
#define LKDFEIKIIKB_EIKGJOEBPMO_OFFSET UNITYSDK_OFFSET(0x184FC520)
#define LKDFEIKIIKB_GHCLONHBEAL_OFFSET UNITYSDK_OFFSET(0x184FBFC0)
#define LKDFEIKIIKB_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x184FC4D0)
#define LKDFEIKIIKB_ILCPOELIJIK_OFFSET UNITYSDK_OFFSET(0x184FC390)
#define LKDFEIKIIKB_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x184FC9D0)
#define LKDFEIKIIKB_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x184FBF30)
#define LKDFEIKIIKB_UPDATE_OFFSET UNITYSDK_OFFSET(0x184FBD70)
#define LKDFEIKIIKB__CTOR_OFFSET UNITYSDK_OFFSET(0x184FBEE0)

inline static constexpr unsigned int LKDFEIKIIKB_TypeDefinitionIndex = 82287;

class LKDFEIKIIKB : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDFEIKIIKB__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LKDFEIKIIKB_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDFEIKIIKB_UPDATE_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LKDFEIKIIKB_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void GHCLONHBEAL(::DMMFJBHLLEI* GIIMGGLDHEA)
	{
		return ((::System::Void(*)(::DMMFJBHLLEI*))((::PBYTE)hIl2Cpp + LKDFEIKIIKB_GHCLONHBEAL_OFFSET))(GIIMGGLDHEA);
	}

	static ::System::Void ILCPOELIJIK(::DMMFJBHLLEI* GIIMGGLDHEA)
	{
		return ((::System::Void(*)(::DMMFJBHLLEI*))((::PBYTE)hIl2Cpp + LKDFEIKIIKB_ILCPOELIJIK_OFFSET))(GIIMGGLDHEA);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKDFEIKIIKB_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void EIKGJOEBPMO(::NGCINGEDCNK* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::NGCINGEDCNK*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LKDFEIKIIKB_EIKGJOEBPMO_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + LKDFEIKIIKB_APAGIJMHEAK_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDFEIKIIKB_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LKDFEIKIIKB_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}
};
