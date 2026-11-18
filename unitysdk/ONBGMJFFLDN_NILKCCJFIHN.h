#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class DMHOLJNNCJA_PJJIMDAOJCJ;
class NJBLKIEPLBK;

#define ONBGMJFFLDN_NILKCCJFIHN_AMKAFBKAMPD_OFFSET UNITYSDK_OFFSET(0x172DC780)
#define ONBGMJFFLDN_NILKCCJFIHN__CTOR_OFFSET UNITYSDK_OFFSET(0x172DC770)

inline static constexpr unsigned int ONBGMJFFLDN_NILKCCJFIHN_TypeDefinitionIndex = 39237;

class ONBGMJFFLDN_NILKCCJFIHN : public ::System::Object
{
public:
	::DMHOLJNNCJA_PJJIMDAOJCJ* OOJDOJIILLJ; // 0x10
	::NJBLKIEPLBK* CFLAJMMODKB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONBGMJFFLDN_NILKCCJFIHN__CTOR_OFFSET))(this);
	}

	::System::Void AMKAFBKAMPD(::MNAGAGOHIGH& NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + ONBGMJFFLDN_NILKCCJFIHN_AMKAFBKAMPD_OFFSET))(this, NFFNEFLKPDG);
	}
};
