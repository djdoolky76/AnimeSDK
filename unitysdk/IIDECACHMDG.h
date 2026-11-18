#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"
#include "unitysdk/System/Object.h"

class ALFNOICELFF;
class DEHDDPEPHCA;
class DEKPMKEAGBN;
class DFEFCOAAPGK;
class GCAGKFONIKP;
class HMFADAONJKI;
class OJMIHLFPAHH;

#define IIDECACHMDG_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1DAC1070)
#define IIDECACHMDG_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1DAC1250)
#define IIDECACHMDG_LODFLGPGJGF_OFFSET UNITYSDK_OFFSET(0x1DAC1150)
#define IIDECACHMDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC1060)

inline static constexpr unsigned int IIDECACHMDG_TypeDefinitionIndex = 93978;

class IIDECACHMDG : public ::System::Object
{
public:
	::HMFADAONJKI* OKCIJCGMAAF; // 0x10
	::DEKPMKEAGBN* GJOJPIHDFEE; // 0x18
	::DEHDDPEPHCA* KFGMENDJFFD; // 0x20
	::GCAGKFONIKP* LEAFPGELJBA; // 0x28
	::ALFNOICELFF* NKBNDDOOJDP; // 0x30

	::System::Void _ctor(::DFEFCOAAPGK* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::DFEFCOAAPGK*))((::PBYTE)hIl2Cpp + IIDECACHMDG__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	::OJMIHLFPAHH* LODFLGPGJGF(::MoleMole::Arcade::BallsRace::BrEntityType OBNIAHNMHPF)
	{
		return ((::OJMIHLFPAHH*(*)(::PVOID, ::MoleMole::Arcade::BallsRace::BrEntityType))((::PBYTE)hIl2Cpp + IIDECACHMDG_LODFLGPGJGF_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void BBOMJDBNHIC(::DFEFCOAAPGK* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::DFEFCOAAPGK*))((::PBYTE)hIl2Cpp + IIDECACHMDG_BBOMJDBNHIC_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIDECACHMDG_BJANDJKKNCD_OFFSET))(this);
	}
};
