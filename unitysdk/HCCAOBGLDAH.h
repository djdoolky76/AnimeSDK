#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMEDFOINBOG.h"

class BODKCHJHPKM;
class CALPGLNODJH;
class CFCKIPEGOKN;
class EPIOKFOELKE;
class HDAFKKNKOBB;
class MHIGOHGCKOI;
class OBEDMAIKBLD;
class PFANPBLIMDC;
class PHDOMOLHAEB;
class PNFPGANMBGH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCCAOBGLDAH_AINIBDOJFPK_OFFSET UNITYSDK_OFFSET(0x1FF69630)
#define HCCAOBGLDAH_EMPKCOADOBH_OFFSET UNITYSDK_OFFSET(0x1FF69110)
#define HCCAOBGLDAH_JLEHIGKAMKJ_OFFSET UNITYSDK_OFFSET(0x1FF69B20)
#define HCCAOBGLDAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF69760)

inline static constexpr unsigned int HCCAOBGLDAH_TypeDefinitionIndex = 95371;

class HCCAOBGLDAH : public ::LMEDFOINBOG
{
public:
	::MHIGOHGCKOI* LGCFHGNILLJ; // 0x40
	::BODKCHJHPKM* IBIMEHDJDAH; // 0x48
	::CALPGLNODJH* OJAMMCBIJOM; // 0x50
	::EPIOKFOELKE* NJBABIFAKIP; // 0x58
	::PNFPGANMBGH* JKAJPCBGIAA; // 0x60
	::PHDOMOLHAEB* CMNFPLCCLFC; // 0x68
	::HDAFKKNKOBB* BMDGGGJNIHO; // 0x70
	::PFANPBLIMDC* FJPAHGBOJNE; // 0x78
	::OBEDMAIKBLD* FHNFHFBHPHH; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCAOBGLDAH__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::CFCKIPEGOKN*>* EMPKCOADOBH()
	{
		return ((::System::Collections::Generic::List_1<::CFCKIPEGOKN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCAOBGLDAH_EMPKCOADOBH_OFFSET))(this);
	}

	::System::Void AINIBDOJFPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCAOBGLDAH_AINIBDOJFPK_OFFSET))(this);
	}

	::System::Void JLEHIGKAMKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCAOBGLDAH_JLEHIGKAMKJ_OFFSET))(this);
	}
};
