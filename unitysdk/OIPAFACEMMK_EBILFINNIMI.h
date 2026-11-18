#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OIPAFACEMMK_EBILFINNIMI_JKHHINJIIHI_OFFSET UNITYSDK_OFFSET(0x15F78400)
#define OIPAFACEMMK_EBILFINNIMI__CTOR_OFFSET UNITYSDK_OFFSET(0x15F74E40)

inline static constexpr unsigned int OIPAFACEMMK_EBILFINNIMI_TypeDefinitionIndex = 40835;

class OIPAFACEMMK_EBILFINNIMI : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_EBILFINNIMI__CTOR_OFFSET))(this);
	}

	::System::Void JKHHINJIIHI(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_EBILFINNIMI_JKHHINJIIHI_OFFSET))(this, DJCNCELJPOM);
	}
};
