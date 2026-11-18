#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMONNCFEDAO_BDDNOKEEJNL.h"
#include "unitysdk/KOIDMLPJGML.h"

class BHBOJCCMJBE;
class BPHGNMNLLHF;

#define EMONNCFEDAO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x142781F0)
#define EMONNCFEDAO__CTOR_OFFSET UNITYSDK_OFFSET(0x142781A0)

inline static constexpr unsigned int EMONNCFEDAO_TypeDefinitionIndex = 74949;

class EMONNCFEDAO : public ::KOIDMLPJGML
{
public:
	::BPHGNMNLLHF* NIFPKCAIMHF; // 0xF8
	::EMONNCFEDAO_BDDNOKEEJNL NLKHDCDFFFD; // 0x100
	::System::Boolean JMIFJPODIMF; // 0x104

	::System::Void _ctor(::BHBOJCCMJBE* ELIMJMLGECL)
	{
		return ((::System::Void(*)(::PVOID, ::BHBOJCCMJBE*))((::PBYTE)hIl2Cpp + EMONNCFEDAO__CTOR_OFFSET))(this, ELIMJMLGECL);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMONNCFEDAO__CTOR_1_OFFSET))(this);
	}
};
