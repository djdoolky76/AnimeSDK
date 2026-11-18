#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
template <typename T> class KNLFLMMHALL_1;

#define IAIIBHCAAOG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1608C770)
#define IAIIBHCAAOG_KCIEKOPPJEN_OFFSET UNITYSDK_OFFSET(0x1608C4F0)
#define IAIIBHCAAOG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1608C6E0)
#define IAIIBHCAAOG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1608C370)
#define IAIIBHCAAOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1608C760)

inline static constexpr unsigned int IAIIBHCAAOG_TypeDefinitionIndex = 75252;

class IAIIBHCAAOG : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x18
	::UnityEngine::RectTransform* EHMLMJKEJMM; // 0x20
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* MDKFANNFDIP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIIBHCAAOG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAIIBHCAAOG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIIBHCAAOG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* KCIEKOPPJEN(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAIIBHCAAOG_KCIEKOPPJEN_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAIIBHCAAOG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
