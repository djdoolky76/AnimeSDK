#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALAGDAJALHD.h"

class IJBKAABGJJB;
class KJJCKCLBOJH;
namespace MoleMole { class Note; }

#define BADEAPJIKIB_IHKNOPBBMOK_OFFSET UNITYSDK_OFFSET(0x11BE6000)
#define BADEAPJIKIB_NNEPGHGMHDH_OFFSET UNITYSDK_OFFSET(0x11BE60A0)
#define BADEAPJIKIB__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE5FF0)

inline static constexpr unsigned int BADEAPJIKIB_TypeDefinitionIndex = 42401;

class BADEAPJIKIB : public ::ALAGDAJALHD
{
public:
	::System::Void _ctor(::MoleMole::Note* FCHKNNJEDIF, ::System::Double FKDEEMJPNFE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Note*, ::System::Double))((::PBYTE)hIl2Cpp + BADEAPJIKIB__CTOR_OFFSET))(this, FCHKNNJEDIF, FKDEEMJPNFE);
	}

	::IJBKAABGJJB* IHKNOPBBMOK(::KJJCKCLBOJH* DGACAADBAEF)
	{
		return ((::IJBKAABGJJB*(*)(::PVOID, ::KJJCKCLBOJH*))((::PBYTE)hIl2Cpp + BADEAPJIKIB_IHKNOPBBMOK_OFFSET))(this, DGACAADBAEF);
	}

	::IJBKAABGJJB* NNEPGHGMHDH(::KJJCKCLBOJH* MIALFKCCCPI)
	{
		return ((::IJBKAABGJJB*(*)(::PVOID, ::KJJCKCLBOJH*))((::PBYTE)hIl2Cpp + BADEAPJIKIB_NNEPGHGMHDH_OFFSET))(this, MIALFKCCCPI);
	}
};
