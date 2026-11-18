#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/PJHKDJEGJOG.h"
#include "unitysdk/HCDCPDGBIMB.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLMCENJOGPN_AJINNLNIHJC_OFFSET UNITYSDK_OFFSET(0x18636860)
#define KLMCENJOGPN_DFILIFBBMLN_OFFSET UNITYSDK_OFFSET(0x18636470)
#define KLMCENJOGPN_HIHMDMNJIIJ_OFFSET UNITYSDK_OFFSET(0x18636550)
#define KLMCENJOGPN_IKAIPOINKCG_OFFSET UNITYSDK_OFFSET(0x186365B0)
#define KLMCENJOGPN_LAKHJJCLDKB_OFFSET UNITYSDK_OFFSET(0x186368F0)
#define KLMCENJOGPN_NMNOHGIFONK_OFFSET UNITYSDK_OFFSET(0x186364E0)
#define KLMCENJOGPN_NPHBLJDPFHH_OFFSET UNITYSDK_OFFSET(0x18636480)
#define KLMCENJOGPN__CTOR_OFFSET UNITYSDK_OFFSET(0x186365A0)

inline static constexpr unsigned int KLMCENJOGPN_TypeDefinitionIndex = 84176;

class KLMCENJOGPN : public ::PJHKDJEGJOG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCENJOGPN__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* DFILIFBBMLN()
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCENJOGPN_DFILIFBBMLN_OFFSET))(this);
	}

	::System::Single NPHBLJDPFHH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCENJOGPN_NPHBLJDPFHH_OFFSET))(this);
	}

	::System::Void NMNOHGIFONK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCENJOGPN_NMNOHGIFONK_OFFSET))(this);
	}

	::System::Boolean HIHMDMNJIIJ(::MoleMole::Level::RatingType& NILNNELOMCG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&))((::PBYTE)hIl2Cpp + KLMCENJOGPN_HIHMDMNJIIJ_OFFSET))(this, NILNNELOMCG);
	}

	::System::Void IKAIPOINKCG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCENJOGPN_IKAIPOINKCG_OFFSET))(this);
	}

	::System::Void AJINNLNIHJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLMCENJOGPN_AJINNLNIHJC_OFFSET))(this);
	}

	::System::Boolean LAKHJJCLDKB(::MoleMole::Level::RatingType& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&))((::PBYTE)hIl2Cpp + KLMCENJOGPN_LAKHJJCLDKB_OFFSET))(this, MIALFKCCCPI);
	}
};
