#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GKMDOFFILFC;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define FMLGGJAPPPF_FLNAONDPFIG_BGEDGFMDDDD_OFFSET UNITYSDK_OFFSET(0x15E73550)
#define FMLGGJAPPPF_FLNAONDPFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15E73540)

inline static constexpr unsigned int FMLGGJAPPPF_FLNAONDPFIG_TypeDefinitionIndex = 64608;

class FMLGGJAPPPF_FLNAONDPFIG : public ::System::Object
{
public:
	::System::Action_1<::GKMDOFFILFC*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_FLNAONDPFIG__CTOR_OFFSET))(this);
	}

	::System::Void BGEDGFMDDDD(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_FLNAONDPFIG_BGEDGFMDDDD_OFFSET))(this, NAPFALLANDL);
	}
};
