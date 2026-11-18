#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KNLFLMMHALL_1;

#define AHFCNOEEEBH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17CCDED0)
#define AHFCNOEEEBH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17CCDE80)
#define AHFCNOEEEBH_LNNBEGNDOHL_OFFSET UNITYSDK_OFFSET(0x17CCDC90)
#define AHFCNOEEEBH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17CCDB40)
#define AHFCNOEEEBH__CTOR_OFFSET UNITYSDK_OFFSET(0x17CCDEC0)

inline static constexpr unsigned int AHFCNOEEEBH_TypeDefinitionIndex = 72398;

class AHFCNOEEEBH : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* FJPCAHJIAGA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFCNOEEEBH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHFCNOEEEBH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHFCNOEEEBH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* LNNBEGNDOHL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AHFCNOEEEBH_LNNBEGNDOHL_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFCNOEEEBH_KGEBDLGBGNM_OFFSET))(this);
	}
};
