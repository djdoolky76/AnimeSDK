#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKILHKMHNGH;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define OIPAFACEMMK_IEEFHCFNGOP_MPAFMLFEEEA_OFFSET UNITYSDK_OFFSET(0x12934CE0)
#define OIPAFACEMMK_IEEFHCFNGOP__CTOR_OFFSET UNITYSDK_OFFSET(0x12934CD0)

inline static constexpr unsigned int OIPAFACEMMK_IEEFHCFNGOP_TypeDefinitionIndex = 40841;

class OIPAFACEMMK_IEEFHCFNGOP : public ::System::Object
{
public:
	::System::Action_1<::EKILHKMHNGH*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_IEEFHCFNGOP__CTOR_OFFSET))(this);
	}

	::System::Void MPAFMLFEEEA(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_IEEFHCFNGOP_MPAFMLFEEEA_OFFSET))(this, DJCNCELJPOM);
	}
};
