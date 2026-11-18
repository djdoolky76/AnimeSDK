#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMDMPLPEJFP.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/HCDCPDGBIMB.h"

class BDBPOGPNCBP;
class POFOFGILKAA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDKKGDPACNJ_AJINNLNIHJC_OFFSET UNITYSDK_OFFSET(0x1ADFB880)
#define NDKKGDPACNJ_DFILIFBBMLN_OFFSET UNITYSDK_OFFSET(0x1ADFB000)
#define NDKKGDPACNJ_FNACHECOODF_OFFSET UNITYSDK_OFFSET(0x1ADFB600)
#define NDKKGDPACNJ_HIHMDMNJIIJ_OFFSET UNITYSDK_OFFSET(0x1ADFAE50)
#define NDKKGDPACNJ_JMMOGNJIICM_OFFSET UNITYSDK_OFFSET(0x1ADFB6D0)
#define NDKKGDPACNJ_KNAMLBOMBMK_OFFSET UNITYSDK_OFFSET(0x1ADFB870)
#define NDKKGDPACNJ_LAKHJJCLDKB_OFFSET UNITYSDK_OFFSET(0x1ADFB940)
#define NDKKGDPACNJ_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0x1ADFAE40)
#define NDKKGDPACNJ_NMNOHGIFONK_OFFSET UNITYSDK_OFFSET(0x1ADFB750)
#define NDKKGDPACNJ_NPHBLJDPFHH_OFFSET UNITYSDK_OFFSET(0x1ADFB5F0)
#define NDKKGDPACNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADFB7E0)

inline static constexpr unsigned int NDKKGDPACNJ_TypeDefinitionIndex = 59532;

class NDKKGDPACNJ : public ::LMDMPLPEJFP
{
public:
	::BDBPOGPNCBP* AAJIHIJOFFM; // 0x320

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKKGDPACNJ__CTOR_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKKGDPACNJ_LJEEJABBAHD_OFFSET))(this);
	}

	::System::Boolean HIHMDMNJIIJ(::MoleMole::Level::RatingType& NILNNELOMCG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&))((::PBYTE)hIl2Cpp + NDKKGDPACNJ_HIHMDMNJIIJ_OFFSET))(this, NILNNELOMCG);
	}

	::System::Collections::Generic::List_1<::HCDCPDGBIMB>* DFILIFBBMLN()
	{
		return ((::System::Collections::Generic::List_1<::HCDCPDGBIMB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKKGDPACNJ_DFILIFBBMLN_OFFSET))(this);
	}

	::System::Single NPHBLJDPFHH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKKGDPACNJ_NPHBLJDPFHH_OFFSET))(this);
	}

	::System::Void FNACHECOODF(::POFOFGILKAA* HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + NDKKGDPACNJ_FNACHECOODF_OFFSET))(this, HEJIBNEHLIG);
	}

	::System::Single JMMOGNJIICM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKKGDPACNJ_JMMOGNJIICM_OFFSET))(this);
	}

	::System::Void NMNOHGIFONK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKKGDPACNJ_NMNOHGIFONK_OFFSET))(this);
	}

	::System::Void KNAMLBOMBMK(::POFOFGILKAA* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::POFOFGILKAA*))((::PBYTE)hIl2Cpp + NDKKGDPACNJ_KNAMLBOMBMK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void AJINNLNIHJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDKKGDPACNJ_AJINNLNIHJC_OFFSET))(this);
	}

	::System::Boolean LAKHJJCLDKB(::MoleMole::Level::RatingType& MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Level::RatingType&))((::PBYTE)hIl2Cpp + NDKKGDPACNJ_LAKHJJCLDKB_OFFSET))(this, MIALFKCCCPI);
	}
};
