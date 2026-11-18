#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define MEJPLBKAFFO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14DDF360)
#define MEJPLBKAFFO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14DDF2D0)
#define MEJPLBKAFFO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14DDF140)
#define MEJPLBKAFFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDF350)

inline static constexpr unsigned int MEJPLBKAFFO_TypeDefinitionIndex = 53234;

class MEJPLBKAFFO : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* PFNAFELKHHP; // 0x18
	::MoleMole::MonoGamepadNestedListDelegate* GJHJKCCOMAC; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::MoleMole::UIGeneralButtonController* LDONPFEBMAO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJPLBKAFFO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEJPLBKAFFO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEJPLBKAFFO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJPLBKAFFO_KGEBDLGBGNM_OFFSET))(this);
	}
};
