#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNJEIKIFEOB.h"
#include "unitysdk/System/Object.h"

class ECICLPACIKH;
class GIBMJLOJLKD;
class ILNJKEHHFNG;
namespace MoleMole { class UITabBtn05RowWidgetController; }
namespace System { class String; }

#define DFBKEIBIDFJ_EBMIPNCBGFI_OFFSET UNITYSDK_OFFSET(0x13E4A5D0)
#define DFBKEIBIDFJ_MBOKONJHOIN_OFFSET UNITYSDK_OFFSET(0x13E4A820)
#define DFBKEIBIDFJ_ONLCFKCNEEP_OFFSET UNITYSDK_OFFSET(0x13E4A800)
#define DFBKEIBIDFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4A5A0)

inline static constexpr unsigned int DFBKEIBIDFJ_TypeDefinitionIndex = 69254;

class DFBKEIBIDFJ : public ::System::Object
{
public:
	::ECICLPACIKH* LKGFJBFOBHI; // 0x10
	::ILNJKEHHFNG* AHMFPFACACD; // 0x18
	::DNJEIKIFEOB PNJCOKBBCOB; // 0x20

	::System::Void _ctor(::ILNJKEHHFNG* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::ILNJKEHHFNG*))((::PBYTE)hIl2Cpp + DFBKEIBIDFJ__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void EBMIPNCBGFI(::MoleMole::UITabBtn05RowWidgetController* FPPPIIFJOBO, ::GIBMJLOJLKD* LBDEEDFAGDF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITabBtn05RowWidgetController*, ::GIBMJLOJLKD*))((::PBYTE)hIl2Cpp + DFBKEIBIDFJ_EBMIPNCBGFI_OFFSET))(this, FPPPIIFJOBO, LBDEEDFAGDF);
	}

	::System::Int32 ONLCFKCNEEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBKEIBIDFJ_ONLCFKCNEEP_OFFSET))(this);
	}

	::System::String* MBOKONJHOIN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFBKEIBIDFJ_MBOKONJHOIN_OFFSET))(this);
	}
};
