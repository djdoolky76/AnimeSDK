#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class GLJLNJOOGID;
namespace MoleMole { class UIActivityCompRowTaskListWidgetController; }
namespace System { class String; }

#define KBBBDMPCBMP_ACCBFJEGPAL_OFFSET UNITYSDK_OFFSET(0x1A493C40)
#define KBBBDMPCBMP_AFMMLJFFMLI_OFFSET UNITYSDK_OFFSET(0x1A493E20)
#define KBBBDMPCBMP_COLMKKHIOAH_OFFSET UNITYSDK_OFFSET(0x1A494560)
#define KBBBDMPCBMP_FHFADMFLFKD_OFFSET UNITYSDK_OFFSET(0x1A4946D0)
#define KBBBDMPCBMP_HEKDOJHHIFC_OFFSET UNITYSDK_OFFSET(0x1A494720)
#define KBBBDMPCBMP_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x1A493B80)
#define KBBBDMPCBMP_JOIOJNGGMNF_OFFSET UNITYSDK_OFFSET(0x1A494220)
#define KBBBDMPCBMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A493B70)

inline static constexpr unsigned int KBBBDMPCBMP_TypeDefinitionIndex = 69531;

class KBBBDMPCBMP : public ::System::Object
{
public:
	::CJIEIHEDMME* LADPIPOMBJM; // 0x10
	::MoleMole::UIActivityCompRowTaskListWidgetController* FPPPIIFJOBO; // 0x18
	::System::String* JBODNNHJGGH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBBDMPCBMP__CTOR_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBBDMPCBMP_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void ACCBFJEGPAL(::GLJLNJOOGID* IMPLPJAHEME)
	{
		return ((::System::Void(*)(::PVOID, ::GLJLNJOOGID*))((::PBYTE)hIl2Cpp + KBBBDMPCBMP_ACCBFJEGPAL_OFFSET))(this, IMPLPJAHEME);
	}

	::System::Void AFMMLJFFMLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBBDMPCBMP_AFMMLJFFMLI_OFFSET))(this);
	}

	::System::Void COLMKKHIOAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBBBDMPCBMP_COLMKKHIOAH_OFFSET))(this);
	}

	::System::Void FHFADMFLFKD(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + KBBBDMPCBMP_FHFADMFLFKD_OFFSET))(this, LADPIPOMBJM);
	}

	::System::Void HEKDOJHHIFC(::MoleMole::UIActivityCompRowTaskListWidgetController* FPPPIIFJOBO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityCompRowTaskListWidgetController*))((::PBYTE)hIl2Cpp + KBBBDMPCBMP_HEKDOJHHIFC_OFFSET))(this, FPPPIIFJOBO);
	}

	::System::Void JOIOJNGGMNF(::GLJLNJOOGID* IMPLPJAHEME)
	{
		return ((::System::Void(*)(::PVOID, ::GLJLNJOOGID*))((::PBYTE)hIl2Cpp + KBBBDMPCBMP_JOIOJNGGMNF_OFFSET))(this, IMPLPJAHEME);
	}
};
