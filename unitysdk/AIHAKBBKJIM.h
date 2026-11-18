#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALAGDAJALHD.h"

class IJBKAABGJJB;
class KJJCKCLBOJH;
namespace MoleMole { class Note; }

#define AIHAKBBKJIM_IHKNOPBBMOK_OFFSET UNITYSDK_OFFSET(0x15501AD0)
#define AIHAKBBKJIM_NNEPGHGMHDH_OFFSET UNITYSDK_OFFSET(0x15501B70)
#define AIHAKBBKJIM__CTOR_OFFSET UNITYSDK_OFFSET(0x15501AC0)

inline static constexpr unsigned int AIHAKBBKJIM_TypeDefinitionIndex = 83558;

class AIHAKBBKJIM : public ::ALAGDAJALHD
{
public:
	::System::Void _ctor(::MoleMole::Note* FCHKNNJEDIF, ::System::Double FKDEEMJPNFE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Note*, ::System::Double))((::PBYTE)hIl2Cpp + AIHAKBBKJIM__CTOR_OFFSET))(this, FCHKNNJEDIF, FKDEEMJPNFE);
	}

	::IJBKAABGJJB* IHKNOPBBMOK(::KJJCKCLBOJH* DGACAADBAEF)
	{
		return ((::IJBKAABGJJB*(*)(::PVOID, ::KJJCKCLBOJH*))((::PBYTE)hIl2Cpp + AIHAKBBKJIM_IHKNOPBBMOK_OFFSET))(this, DGACAADBAEF);
	}

	::IJBKAABGJJB* NNEPGHGMHDH(::KJJCKCLBOJH* MIALFKCCCPI)
	{
		return ((::IJBKAABGJJB*(*)(::PVOID, ::KJJCKCLBOJH*))((::PBYTE)hIl2Cpp + AIHAKBBKJIM_NNEPGHGMHDH_OFFSET))(this, MIALFKCCCPI);
	}
};
