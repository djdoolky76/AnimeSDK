#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMEDFOINBOG.h"

class ADICPODJDFG;
class BDFGDAIBLHB;
class CFCKIPEGOKN;
class FBCHDHBDDNC;
class IIAPLFLEEOI;
class JKHIFDONDBI;
class MFCLHLGLPDI;
class MPGJODLBDHJ;
class MPMKONGEMJA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMOCGDKJFCE_AINIBDOJFPK_OFFSET UNITYSDK_OFFSET(0x1CCB7900)
#define GMOCGDKJFCE_EMPKCOADOBH_OFFSET UNITYSDK_OFFSET(0x1CCB70E0)
#define GMOCGDKJFCE_GEFNCCFJNIM_OFFSET UNITYSDK_OFFSET(0x1CCB8130)
#define GMOCGDKJFCE_JLEHIGKAMKJ_OFFSET UNITYSDK_OFFSET(0x1CCB8120)
#define GMOCGDKJFCE_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1CCB7C20)
#define GMOCGDKJFCE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1CCB7B00)
#define GMOCGDKJFCE_OKBOKHHEAMA_OFFSET UNITYSDK_OFFSET(0x1CCB8140)
#define GMOCGDKJFCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB7C60)

inline static constexpr unsigned int GMOCGDKJFCE_TypeDefinitionIndex = 93794;

class GMOCGDKJFCE : public ::LMEDFOINBOG
{
public:
	::FBCHDHBDDNC* HFELGPMIMHN; // 0x40
	::ADICPODJDFG* AECNJEFLPPK; // 0x48
	::MFCLHLGLPDI* GNOAPAOMJBO; // 0x50
	::MPMKONGEMJA* LJONFLALIPK; // 0x58
	::JKHIFDONDBI* MAMFOJPHEHF; // 0x60
	::IIAPLFLEEOI* AHFILNDAJDO; // 0x68
	::BDFGDAIBLHB* MOIDMBKNNFG; // 0x70
	::MPGJODLBDHJ* BKGCNPAGBKE; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOCGDKJFCE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::CFCKIPEGOKN*>* EMPKCOADOBH()
	{
		return ((::System::Collections::Generic::List_1<::CFCKIPEGOKN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOCGDKJFCE_EMPKCOADOBH_OFFSET))(this);
	}

	::System::Void AINIBDOJFPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOCGDKJFCE_AINIBDOJFPK_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOCGDKJFCE_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOCGDKJFCE_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void JLEHIGKAMKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOCGDKJFCE_JLEHIGKAMKJ_OFFSET))(this);
	}

	::System::Void GEFNCCFJNIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOCGDKJFCE_GEFNCCFJNIM_OFFSET))(this);
	}

	::System::Boolean OKBOKHHEAMA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMOCGDKJFCE_OKBOKHHEAMA_OFFSET))(this);
	}
};
