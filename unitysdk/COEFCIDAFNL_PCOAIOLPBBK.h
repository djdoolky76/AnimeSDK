#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COEFCIDAFNL_PHNAIPBMDDN.h"
#include "unitysdk/System/Object.h"

#define COEFCIDAFNL_PCOAIOLPBBK__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFBD90)

inline static constexpr unsigned int COEFCIDAFNL_PCOAIOLPBBK_TypeDefinitionIndex = 10281;

class COEFCIDAFNL_PCOAIOLPBBK : public ::System::Object
{
public:
	::COEFCIDAFNL_PHNAIPBMDDN LHHIEJFJKJE; // 0x10
	::System::Boolean JCJEADDCEKJ; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single ONGKNJDGBLJ; // 0x1C
	::System::Single FDFEDLFEIIN; // 0x20
	::System::Int32 EJFGMAHJMHK; // 0x24
	::System::Single JOGJHDBEDPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COEFCIDAFNL_PCOAIOLPBBK__CTOR_OFFSET))(this);
	}
};
