#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"

class AHNHEANMAML;
class EBEAAFHPBJG;
class LAAEPKNJKHA;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define HGJJGKIDLFD_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x17E481B0)
#define HGJJGKIDLFD_BPFEFMNKGKI_OFFSET UNITYSDK_OFFSET(0x17E48010)
#define HGJJGKIDLFD_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x17E47A50)
#define HGJJGKIDLFD_HLDGOENHIHB_OFFSET UNITYSDK_OFFSET(0x17E48250)
#define HGJJGKIDLFD_JDDMFEELKDH_OFFSET UNITYSDK_OFFSET(0x17E47D20)
#define HGJJGKIDLFD_MGALNDPKPOC_OFFSET UNITYSDK_OFFSET(0x17E481A0)
#define HGJJGKIDLFD_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x17E48100)
#define HGJJGKIDLFD_OPGMNEMMKEG_OFFSET UNITYSDK_OFFSET(0x17E48000)
#define HGJJGKIDLFD_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x17E47CC0)
#define HGJJGKIDLFD__CTOR_OFFSET UNITYSDK_OFFSET(0x17E47F90)

inline static constexpr unsigned int HGJJGKIDLFD_TypeDefinitionIndex = 61638;

class HGJJGKIDLFD : public ::FJCAJJEAJPC
{
public:
	::Nap::NapECS::EcsFilter* _GCNLOFNHHPC_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJJGKIDLFD__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HGJJGKIDLFD_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGJJGKIDLFD_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void OPGMNEMMKEG(::Nap::NapECS::EcsFilter* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + HGJJGKIDLFD_OPGMNEMMKEG_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Void BPFEFMNKGKI(::EBEAAFHPBJG* DKELJKPOHOC, ::AHNHEANMAML* DMHKCLNEMHJ)
	{
		return ((::System::Void(*)(::EBEAAFHPBJG*, ::AHNHEANMAML*))((::PBYTE)hIl2Cpp + HGJJGKIDLFD_BPFEFMNKGKI_OFFSET))(DKELJKPOHOC, DMHKCLNEMHJ);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + HGJJGKIDLFD_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::Nap::NapECS::EcsFilter* MGALNDPKPOC()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJJGKIDLFD_MGALNDPKPOC_OFFSET))(this);
	}

	static ::System::Void JDDMFEELKDH(::Nap::NapECS::EcsFilter* BIBLOMBHBHO, ::Nap::NapECS::EcsFilter* IKLHMJKDPMO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsFilter*, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + HGJJGKIDLFD_JDDMFEELKDH_OFFSET))(BIBLOMBHBHO, IKLHMJKDPMO);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGJJGKIDLFD_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void HLDGOENHIHB(::EBEAAFHPBJG* DKELJKPOHOC, ::LAAEPKNJKHA* EJPKBPLGOFH)
	{
		return ((::System::Void(*)(::EBEAAFHPBJG*, ::LAAEPKNJKHA*))((::PBYTE)hIl2Cpp + HGJJGKIDLFD_HLDGOENHIHB_OFFSET))(DKELJKPOHOC, EJPKBPLGOFH);
	}
};
