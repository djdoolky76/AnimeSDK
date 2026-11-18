#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define HOBFMEGBAFA_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x16F50260)
#define HOBFMEGBAFA_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x16F500F0)
#define HOBFMEGBAFA_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x16F50250)
#define HOBFMEGBAFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F50050)
#define HOBFMEGBAFA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F501C0)

inline static constexpr unsigned int HOBFMEGBAFA_TypeDefinitionIndex = 76650;

class HOBFMEGBAFA : public ::IOOIHHOJOPI
{
public:
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBFMEGBAFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOBFMEGBAFA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + HOBFMEGBAFA_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBFMEGBAFA_EFKGNFCEENK_OFFSET))(this);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBFMEGBAFA_CBIBIFBAIFA_OFFSET))(this);
	}
};
