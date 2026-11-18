#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NJJLKOPMEPK;
namespace System { class Action; }

#define NJJLKOPMEPK_PMCBLPPLMBO_CPGONFBDAFJ_OFFSET UNITYSDK_OFFSET(0x12899760)
#define NJJLKOPMEPK_PMCBLPPLMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x12899750)

inline static constexpr unsigned int NJJLKOPMEPK_PMCBLPPLMBO_TypeDefinitionIndex = 51026;

class NJJLKOPMEPK_PMCBLPPLMBO : public ::System::Object
{
public:
	::NJJLKOPMEPK* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJLKOPMEPK_PMCBLPPLMBO__CTOR_OFFSET))(this);
	}

	::System::Void CPGONFBDAFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJLKOPMEPK_PMCBLPPLMBO_CPGONFBDAFJ_OFFSET))(this);
	}
};
