#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OAGPIMJGMBL.h"
#include "unitysdk/OHMNIHKKCMH.h"

class BANABIIEPHO;
class IGLACMPAOLK;
class MJFNABLBEIH;
namespace Code::Logic::Data::ScriptObject::Level { class Member; }

#define PABCFJHDBNK_APACKAEKDMC_OFFSET UNITYSDK_OFFSET(0x1A7D6670)
#define PABCFJHDBNK_BDAKFIOKHDH_OFFSET UNITYSDK_OFFSET(0x1A7D6B00)
#define PABCFJHDBNK_DCMLCLLKMPP_OFFSET UNITYSDK_OFFSET(0x1A7D6600)
#define PABCFJHDBNK_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x1A7D6540)
#define PABCFJHDBNK_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1A7D67E0)
#define PABCFJHDBNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7D6500)

inline static constexpr unsigned int PABCFJHDBNK_TypeDefinitionIndex = 41086;

class PABCFJHDBNK : public ::System::Object
{
public:
	::BANABIIEPHO* ELAKMBGLJLI; // 0x10
	::System::UInt32 LEOKEOFNDLH; // 0x18
	::System::Int32 MLNKCNJEOMI; // 0x1C
	::System::Single GODDABGLKFA; // 0x20
	::System::Int32 BKFJKKHPCPK; // 0x24

	::System::Void _ctor(::Code::Logic::Data::ScriptObject::Level::Member* ODPEJNDHNNA)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Member*))((::PBYTE)hIl2Cpp + PABCFJHDBNK__CTOR_OFFSET))(this, ODPEJNDHNNA);
	}

	::System::Void JMDEKPONKMF(::IGLACMPAOLK* EGGAALCPEPL)
	{
		return ((::System::Void(*)(::PVOID, ::IGLACMPAOLK*))((::PBYTE)hIl2Cpp + PABCFJHDBNK_JMDEKPONKMF_OFFSET))(this, EGGAALCPEPL);
	}

	::OAGPIMJGMBL DCMLCLLKMPP(::System::Int32 CKELOFDFEEM)
	{
		return ((::OAGPIMJGMBL(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PABCFJHDBNK_DCMLCLLKMPP_OFFSET))(this, CKELOFDFEEM);
	}

	::System::Void APACKAEKDMC(::IGLACMPAOLK* EGGAALCPEPL, ::MJFNABLBEIH* EMAOHHKGEBF)
	{
		return ((::System::Void(*)(::PVOID, ::IGLACMPAOLK*, ::MJFNABLBEIH*))((::PBYTE)hIl2Cpp + PABCFJHDBNK_APACKAEKDMC_OFFSET))(this, EGGAALCPEPL, EMAOHHKGEBF);
	}

	::System::Void OKJCHFGIKBH(::OHMNIHKKCMH& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::OHMNIHKKCMH&))((::PBYTE)hIl2Cpp + PABCFJHDBNK_OKJCHFGIKBH_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void BDAKFIOKHDH(::IGLACMPAOLK* EGGAALCPEPL)
	{
		return ((::System::Void(*)(::PVOID, ::IGLACMPAOLK*))((::PBYTE)hIl2Cpp + PABCFJHDBNK_BDAKFIOKHDH_OFFSET))(this, EGGAALCPEPL);
	}
};
