#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLJGPKJJPIL.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define HCIHKIDLFEJ_NEFPNJODGLF_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x146E70B0)
#define HCIHKIDLFEJ_NEFPNJODGLF_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x146E6F40)
#define HCIHKIDLFEJ_NEFPNJODGLF_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x146E70A0)
#define HCIHKIDLFEJ_NEFPNJODGLF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x146E6EA0)
#define HCIHKIDLFEJ_NEFPNJODGLF__CTOR_OFFSET UNITYSDK_OFFSET(0x146E7010)

inline static constexpr unsigned int HCIHKIDLFEJ_NEFPNJODGLF_TypeDefinitionIndex = 47957;

class HCIHKIDLFEJ_NEFPNJODGLF : public ::MLJGPKJJPIL
{
public:
	// static const ::System::String* BMHBEDCJMOO; // 0x0
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIHKIDLFEJ_NEFPNJODGLF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HCIHKIDLFEJ_NEFPNJODGLF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIHKIDLFEJ_NEFPNJODGLF_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + HCIHKIDLFEJ_NEFPNJODGLF_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIHKIDLFEJ_NEFPNJODGLF_CBIBIFBAIFA_OFFSET))(this);
	}
};
