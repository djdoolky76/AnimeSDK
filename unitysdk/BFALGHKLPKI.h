#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPFPIJOPANM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPKOIBEFPAO.h"

class CLPEHLLCADI;
class EFOMLGDJMBL;
class KLODEKCODDH;
namespace System { class String; }

#define BFALGHKLPKI_CCNCFOBJCHG_OFFSET UNITYSDK_OFFSET(0x10DD1960)
#define BFALGHKLPKI_FCPKPLCAMKP_OFFSET UNITYSDK_OFFSET(0x10DD1B30)
#define BFALGHKLPKI_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x10DD1B80)
#define BFALGHKLPKI_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x10DD1C30)
#define BFALGHKLPKI_JILCNMBFAGN_OFFSET UNITYSDK_OFFSET(0x10DD19A0)
#define BFALGHKLPKI_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x10DD19E0)
#define BFALGHKLPKI_PMJHAFBNOHB_OFFSET UNITYSDK_OFFSET(0x10DD1920)
#define BFALGHKLPKI__CTOR_OFFSET UNITYSDK_OFFSET(0x10DD1910)

inline static constexpr unsigned int BFALGHKLPKI_TypeDefinitionIndex = 43449;

class BFALGHKLPKI : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* ANICHIJBOJD; // 0x10
	::CLPEHLLCADI* FIPPJCICEBJ; // 0x18
	::KLODEKCODDH* JNIDMGEKNCH; // 0x20
	::EFOMLGDJMBL* MDKPHILPOCJ; // 0x28
	::Il2CppArray<::PPFPIJOPANM>* IOJDBGFPNLG; // 0x30

	::System::Void _ctor(::Il2CppArray<::PPFPIJOPANM>* HDKKPOPLHIB, ::Il2CppArray<::System::String*>* NGFLKJKBOBD)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::PPFPIJOPANM>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + BFALGHKLPKI__CTOR_OFFSET))(this, HDKKPOPLHIB, NGFLKJKBOBD);
	}

	::System::Boolean PMJHAFBNOHB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGHKLPKI_PMJHAFBNOHB_OFFSET))(this);
	}

	::System::Void CCNCFOBJCHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGHKLPKI_CCNCFOBJCHG_OFFSET))(this);
	}

	::System::Void JILCNMBFAGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGHKLPKI_JILCNMBFAGN_OFFSET))(this);
	}

	::DPKOIBEFPAO OMPFLKCBFHF(::System::Int32 ABHBKFJKINO)
	{
		return ((::DPKOIBEFPAO(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFALGHKLPKI_OMPFLKCBFHF_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Int32 FCPKPLCAMKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFALGHKLPKI_FCPKPLCAMKP_OFFSET))(this);
	}

	::System::Void GIAOBHOJCDP(::EFOMLGDJMBL* PDEICBOEAJH)
	{
		return ((::System::Void(*)(::PVOID, ::EFOMLGDJMBL*))((::PBYTE)hIl2Cpp + BFALGHKLPKI_GIAOBHOJCDP_OFFSET))(this, PDEICBOEAJH);
	}

	::System::Void IBBLCAOMCKF(::System::Int32 ABHBKFJKINO, ::DPKOIBEFPAO& EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DPKOIBEFPAO&))((::PBYTE)hIl2Cpp + BFALGHKLPKI_IBBLCAOMCKF_OFFSET))(this, ABHBKFJKINO, EGEGIMGMJHN);
	}
};
