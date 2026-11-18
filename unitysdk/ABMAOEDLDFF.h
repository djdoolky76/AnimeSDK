#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class BAAPFFNJAPN;
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define ABMAOEDLDFF_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x181E76C0)
#define ABMAOEDLDFF_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x181E6AC0)
#define ABMAOEDLDFF_FHLKIFHLOAG_OFFSET UNITYSDK_OFFSET(0x181E7350)
#define ABMAOEDLDFF_FPAJMLPDBDI_OFFSET UNITYSDK_OFFSET(0x181E7170)
#define ABMAOEDLDFF_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x181E6F40)
#define ABMAOEDLDFF_KKAKPABBAHI_OFFSET UNITYSDK_OFFSET(0x181E7280)
#define ABMAOEDLDFF_LDCJONOBGEB_OFFSET UNITYSDK_OFFSET(0x181E6EB0)
#define ABMAOEDLDFF_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x181E7630)
#define ABMAOEDLDFF_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x181E7310)
#define ABMAOEDLDFF_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x181E6CF0)
#define ABMAOEDLDFF__CTOR_OFFSET UNITYSDK_OFFSET(0x181E6E60)

inline static constexpr unsigned int ABMAOEDLDFF_TypeDefinitionIndex = 47084;

class ABMAOEDLDFF : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMAOEDLDFF__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + ABMAOEDLDFF_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void WaitForFixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMAOEDLDFF_WAITFORFIXEDUPDATE_OFFSET))(this);
	}

	::System::Void LDCJONOBGEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMAOEDLDFF_LDCJONOBGEB_OFFSET))(this);
	}

	static ::System::Void HMLGKBFFNHI(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ABMAOEDLDFF_HMLGKBFFNHI_OFFSET))(BKLGNCBNEGM);
	}

	static ::System::Void KKAKPABBAHI(::BAAPFFNJAPN* HKBMDAPIILF)
	{
		return ((::System::Void(*)(::BAAPFFNJAPN*))((::PBYTE)hIl2Cpp + ABMAOEDLDFF_KKAKPABBAHI_OFFSET))(HKBMDAPIILF);
	}

	static ::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + ABMAOEDLDFF_PMHJBNNPCLB_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void FHLKIFHLOAG(::BAAPFFNJAPN* HKBMDAPIILF, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::BAAPFFNJAPN*, ::System::Single))((::PBYTE)hIl2Cpp + ABMAOEDLDFF_FHLKIFHLOAG_OFFSET))(HKBMDAPIILF, PMNLNNGEIFM);
	}

	static ::System::Void FPAJMLPDBDI(::BAAPFFNJAPN* HKBMDAPIILF)
	{
		return ((::System::Void(*)(::BAAPFFNJAPN*))((::PBYTE)hIl2Cpp + ABMAOEDLDFF_FPAJMLPDBDI_OFFSET))(HKBMDAPIILF);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + ABMAOEDLDFF_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + ABMAOEDLDFF_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}
};
