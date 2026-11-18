#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class NOFEDBPBAOG;
class PBNHEHNNCNG;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFPKEAJFBGC_AOCEAPNKBKI_OFFSET UNITYSDK_OFFSET(0x1414C6F0)
#define EFPKEAJFBGC_HKCAKLABPJN_OFFSET UNITYSDK_OFFSET(0x1414CA40)
#define EFPKEAJFBGC_JOICCKIPLKN_OFFSET UNITYSDK_OFFSET(0x1414C5B0)
#define EFPKEAJFBGC_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x1414C350)
#define EFPKEAJFBGC_LNLBJALICDA_OFFSET UNITYSDK_OFFSET(0x1414C3E0)
#define EFPKEAJFBGC_ONSTART_OFFSET UNITYSDK_OFFSET(0x1414C390)
#define EFPKEAJFBGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1414C3D0)

inline static constexpr unsigned int EFPKEAJFBGC_TypeDefinitionIndex = 92771;

class EFPKEAJFBGC : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPKEAJFBGC__CTOR_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPKEAJFBGC_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPKEAJFBGC_ONSTART_OFFSET))(this);
	}

	::System::Void LNLBJALICDA(::System::Int32 DBNJDDHKGJC, ::System::Action* CAAFEGLOALC, ::System::Action* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + EFPKEAJFBGC_LNLBJALICDA_OFFSET))(this, DBNJDDHKGJC, CAAFEGLOALC, BLLNHDIDKPA);
	}

	::System::Void JOICCKIPLKN(::NOFEDBPBAOG* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::NOFEDBPBAOG*))((::PBYTE)hIl2Cpp + EFPKEAJFBGC_JOICCKIPLKN_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void AOCEAPNKBKI(::System::Int32 BCIGBPGPIPM, ::System::Int32 MBCLEKLCOJN, ::System::Boolean LDNKDODOPKC, ::System::Int32 KHHNPABHKGO, ::System::Boolean KOMHMKCPNEN, ::System::Int32 JNIANLBFJCI, ::System::Int32 PIOCHDLPAEH, ::System::Int32 PKGODCFJDDL, ::System::Collections::Generic::List_1<::System::Int32>* CJCNKFOLMLH, ::System::Action* CAAFEGLOALC, ::System::Action* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + EFPKEAJFBGC_AOCEAPNKBKI_OFFSET))(this, BCIGBPGPIPM, MBCLEKLCOJN, LDNKDODOPKC, KHHNPABHKGO, KOMHMKCPNEN, JNIANLBFJCI, PIOCHDLPAEH, PKGODCFJDDL, CJCNKFOLMLH, CAAFEGLOALC, BLLNHDIDKPA);
	}

	::System::Void HKCAKLABPJN(::System::Action_1<::PBNHEHNNCNG*>* CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::PBNHEHNNCNG*>*))((::PBYTE)hIl2Cpp + EFPKEAJFBGC_HKCAKLABPJN_OFFSET))(this, CAAFEGLOALC);
	}
};
