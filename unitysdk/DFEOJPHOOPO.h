#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFEOJPHOOPO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12076B70)
#define DFEOJPHOOPO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12076AE0)
#define DFEOJPHOOPO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12076810)
#define DFEOJPHOOPO_OLJFHIJICHH_OFFSET UNITYSDK_OFFSET(0x12076990)
#define DFEOJPHOOPO__CTOR_OFFSET UNITYSDK_OFFSET(0x12076B60)

inline static constexpr unsigned int DFEOJPHOOPO_TypeDefinitionIndex = 82090;

class DFEOJPHOOPO : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::MonoUITableScrollV2*>* LHEAKJCKCJD; // 0x18
	::LGINJIKKBJA* PPAHJPCCOPL; // 0x20
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEOJPHOOPO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFEOJPHOOPO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFEOJPHOOPO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::MonoUITableScrollV2*>* OLJFHIJICHH(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MonoUITableScrollV2*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFEOJPHOOPO_OLJFHIJICHH_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEOJPHOOPO_KGEBDLGBGNM_OFFSET))(this);
	}
};
