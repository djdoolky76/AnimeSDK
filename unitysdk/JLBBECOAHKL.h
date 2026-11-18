#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define JLBBECOAHKL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18742570)
#define JLBBECOAHKL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18742520)
#define JLBBECOAHKL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x187421D0)
#define JLBBECOAHKL_OLPPMHKPLKP_OFFSET UNITYSDK_OFFSET(0x18742330)
#define JLBBECOAHKL__CTOR_OFFSET UNITYSDK_OFFSET(0x18742560)

inline static constexpr unsigned int JLBBECOAHKL_TypeDefinitionIndex = 60268;

class JLBBECOAHKL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KMJPBNIPKNL; // 0x18
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* OKOPPNCACHK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBBECOAHKL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLBBECOAHKL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLBBECOAHKL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* OLPPMHKPLKP(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLBBECOAHKL_OLPPMHKPLKP_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBBECOAHKL_KGEBDLGBGNM_OFFSET))(this);
	}
};
