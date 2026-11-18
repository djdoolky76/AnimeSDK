#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define HLLJKNNKKBO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B69F90)
#define HLLJKNNKKBO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B69EE0)
#define HLLJKNNKKBO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B69D70)
#define HLLJKNNKKBO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B69F80)

inline static constexpr unsigned int HLLJKNNKKBO_TypeDefinitionIndex = 60583;

class HLLJKNNKKBO : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* MINGMEKJADD; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* IHHNHCLIMEB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLJKNNKKBO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLLJKNNKKBO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLLJKNNKKBO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLJKNNKKBO_KGEBDLGBGNM_OFFSET))(this);
	}
};
