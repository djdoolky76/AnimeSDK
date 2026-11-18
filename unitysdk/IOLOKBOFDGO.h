#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KNLFLMMHALL_1;

#define IOLOKBOFDGO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13CA08F0)
#define IOLOKBOFDGO_KDLIMHEAALM_OFFSET UNITYSDK_OFFSET(0x13CA06B0)
#define IOLOKBOFDGO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13CA08A0)
#define IOLOKBOFDGO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13CA0520)
#define IOLOKBOFDGO__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA08E0)

inline static constexpr unsigned int IOLOKBOFDGO_TypeDefinitionIndex = 90457;

class IOLOKBOFDGO : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* BGAAIKGMOMO; // 0x18
	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* AKJELLIHIBF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLOKBOFDGO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOLOKBOFDGO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* KDLIMHEAALM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOLOKBOFDGO_KDLIMHEAALM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLOKBOFDGO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOLOKBOFDGO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
