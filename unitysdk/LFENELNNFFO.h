#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNAELLALHIM.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

class BKGKJNHLCKC;
class HFOPDHLEBHJ;

#define LFENELNNFFO_HOOILDPHOEJ_OFFSET UNITYSDK_OFFSET(0xD4275E0)
#define LFENELNNFFO_HPCAIENDODF_OFFSET UNITYSDK_OFFSET(0xD427780)
#define LFENELNNFFO_IDPPJMOLEKM_OFFSET UNITYSDK_OFFSET(0xD427850)
#define LFENELNNFFO_LJDHHNOIFKE_OFFSET UNITYSDK_OFFSET(0xD427860)
#define LFENELNNFFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD4275C0)

inline static constexpr unsigned int LFENELNNFFO_TypeDefinitionIndex = 49904;

class LFENELNNFFO : public ::DNAELLALHIM
{
public:
	::BKGKJNHLCKC* DCPFGBNLIPF; // 0x88

	::System::Void _ctor(::BKGKJNHLCKC* EAKKFKPOBLE)
	{
		return ((::System::Void(*)(::PVOID, ::BKGKJNHLCKC*))((::PBYTE)hIl2Cpp + LFENELNNFFO__CTOR_OFFSET))(this, EAKKFKPOBLE);
	}

	::System::Single HOOILDPHOEJ(::HFOPDHLEBHJ* DEKJDEPKKLH, ::MoleMole::Config::BaseProperty OFKIIOMFAHO)
	{
		return ((::System::Single(*)(::PVOID, ::HFOPDHLEBHJ*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + LFENELNNFFO_HOOILDPHOEJ_OFFSET))(this, DEKJDEPKKLH, OFKIIOMFAHO);
	}

	::System::Void HPCAIENDODF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENELNNFFO_HPCAIENDODF_OFFSET))(this);
	}

	::System::Void IDPPJMOLEKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFENELNNFFO_IDPPJMOLEKM_OFFSET))(this);
	}

	::System::Single LJDHHNOIFKE(::HFOPDHLEBHJ* MIALFKCCCPI, ::MoleMole::Config::BaseProperty KMGKAIDEIBA)
	{
		return ((::System::Single(*)(::PVOID, ::HFOPDHLEBHJ*, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + LFENELNNFFO_LJDHHNOIFKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
