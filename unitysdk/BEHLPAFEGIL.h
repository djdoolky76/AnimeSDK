#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/LDDHJLCEFOJ.h"
#include "unitysdk/MoleMole/AICompareType.h"

class EIMHGJELHGN;
class NLNIIPDCABP;
namespace System { class String; }

#define BEHLPAFEGIL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x169EA390)
#define BEHLPAFEGIL_JCOKOLNFCOP_OFFSET UNITYSDK_OFFSET(0x169EA300)
#define BEHLPAFEGIL_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x169E9C90)
#define BEHLPAFEGIL__CTOR_OFFSET UNITYSDK_OFFSET(0x169EA380)

inline static constexpr unsigned int BEHLPAFEGIL_TypeDefinitionIndex = 78422;

class BEHLPAFEGIL : public ::LDDHJLCEFOJ
{
public:
	::System::String* LIPIPGHBHFH; // 0x28
	::NLNIIPDCABP* MOJPJEKJKNE; // 0x30
	::System::Single NNDFBNFJFGD; // 0x38
	::MoleMole::AICompareType LEDEBEOFDOI; // 0x3C
	::System::Int32 HLAOEJFDPFD; // 0x40
	::System::Boolean AFHOKKHANOK; // 0x44
	::System::Byte _padding0[0x3];
	::System::Int32 OMEHHEBBMJJ; // 0x48
	::System::Int32 FODAFPMFEJA; // 0x4C
	::System::Int32 GBMGLBJHCPL; // 0x50
	::System::Single HPIFCIFILLA; // 0x54
	::System::Single JKJEKMJEHAE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHLPAFEGIL__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHLPAFEGIL_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::NLNIIPDCABP* OPLGDAMMLHM, ::EIMHGJELHGN* IABJLFDJBOC, ::System::Int32 ABOLAPGOFMP)
	{
		return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*, ::EIMHGJELHGN*, ::System::Int32))((::PBYTE)hIl2Cpp + BEHLPAFEGIL_BBOMJDBNHIC_OFFSET))(this, OPLGDAMMLHM, IABJLFDJBOC, ABOLAPGOFMP);
	}

	::System::Void JCOKOLNFCOP(::BehaviorDesigner::Runtime::Tasks::TaskStatus KKMENMCMMBN)
	{
		return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHLPAFEGIL_JCOKOLNFCOP_OFFSET))(this, KKMENMCMMBN);
	}
};
