#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDEGFGKIMDC.h"
#include "unitysdk/OAOOLPCNHKA.h"

class PIJCCFAADKK;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define ALPFBAHDNNC_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x11BC2660)
#define ALPFBAHDNNC_CHPMFIIBNAC_OFFSET UNITYSDK_OFFSET(0x11BC2820)
#define ALPFBAHDNNC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x11BC23C0)
#define ALPFBAHDNNC_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x11BC2BC0)
#define ALPFBAHDNNC_LBABIMEHPNA_OFFSET UNITYSDK_OFFSET(0x11BC2B40)
#define ALPFBAHDNNC_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x11BC2790)
#define ALPFBAHDNNC__CTOR_OFFSET UNITYSDK_OFFSET(0x11BC2610)

inline static constexpr unsigned int ALPFBAHDNNC_TypeDefinitionIndex = 67635;

class ALPFBAHDNNC : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPFBAHDNNC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + ALPFBAHDNNC_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + ALPFBAHDNNC_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + ALPFBAHDNNC_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void CHPMFIIBNAC(::PIJCCFAADKK* JGKEFHHPGCC, ::EDEGFGKIMDC OJBJPFBIMPJ, ::EDEGFGKIMDC FDDFDLEINFM)
	{
		return ((::System::Void(*)(::PIJCCFAADKK*, ::EDEGFGKIMDC, ::EDEGFGKIMDC))((::PBYTE)hIl2Cpp + ALPFBAHDNNC_CHPMFIIBNAC_OFFSET))(JGKEFHHPGCC, OJBJPFBIMPJ, FDDFDLEINFM);
	}

	static ::System::Void LBABIMEHPNA(::PIJCCFAADKK* JGKEFHHPGCC)
	{
		return ((::System::Void(*)(::PIJCCFAADKK*))((::PBYTE)hIl2Cpp + ALPFBAHDNNC_LBABIMEHPNA_OFFSET))(JGKEFHHPGCC);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALPFBAHDNNC_HMLGKBFFNHI_OFFSET))(this, BKLGNCBNEGM);
	}
};
