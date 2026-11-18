#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define MJDCEGKHJEG_IMBPDPEHKLF_PMAGDGFPLEG_OFFSET UNITYSDK_OFFSET(0x16C8FD70)
#define MJDCEGKHJEG_IMBPDPEHKLF__CTOR_OFFSET UNITYSDK_OFFSET(0x16C8FD60)

inline static constexpr unsigned int MJDCEGKHJEG_IMBPDPEHKLF_TypeDefinitionIndex = 56422;

class MJDCEGKHJEG_IMBPDPEHKLF : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_IMBPDPEHKLF__CTOR_OFFSET))(this);
	}

	::System::Void PMAGDGFPLEG(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_IMBPDPEHKLF_PMAGDGFPLEG_OFFSET))(this, DJCNCELJPOM);
	}
};
