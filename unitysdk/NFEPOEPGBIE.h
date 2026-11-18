#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define NFEPOEPGBIE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11587E50)
#define NFEPOEPGBIE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11587D80)
#define NFEPOEPGBIE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11587BB0)
#define NFEPOEPGBIE__CTOR_OFFSET UNITYSDK_OFFSET(0x11587E40)

inline static constexpr unsigned int NFEPOEPGBIE_TypeDefinitionIndex = 65900;

class NFEPOEPGBIE : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* OGKFNEPEHMP; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* GAFPEOCAECI; // 0x20
	::LGINJIKKBJA* OEHPNJHPKLB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEPOEPGBIE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFEPOEPGBIE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEPOEPGBIE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFEPOEPGBIE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
