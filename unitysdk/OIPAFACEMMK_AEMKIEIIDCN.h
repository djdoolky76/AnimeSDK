#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OIPAFACEMMK_AEMKIEIIDCN_ILMJKEAEENL_OFFSET UNITYSDK_OFFSET(0x13A64E10)
#define OIPAFACEMMK_AEMKIEIIDCN__CTOR_OFFSET UNITYSDK_OFFSET(0x13A64E00)

inline static constexpr unsigned int OIPAFACEMMK_AEMKIEIIDCN_TypeDefinitionIndex = 40838;

class OIPAFACEMMK_AEMKIEIIDCN : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_AEMKIEIIDCN__CTOR_OFFSET))(this);
	}

	::System::Void ILMJKEAEENL(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_AEMKIEIIDCN_ILMJKEAEENL_OFFSET))(this, DJCNCELJPOM);
	}
};
