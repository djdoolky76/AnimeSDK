#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class OJLAOJKCHLF;
namespace System { class Action; }

#define OJLAOJKCHLF_MJEAFFNBKEH_HCFLIDFECMK_OFFSET UNITYSDK_OFFSET(0xE1597E0)
#define OJLAOJKCHLF_MJEAFFNBKEH_MCCCEJHMNHA_OFFSET UNITYSDK_OFFSET(0xE159610)
#define OJLAOJKCHLF_MJEAFFNBKEH__CTOR_OFFSET UNITYSDK_OFFSET(0xE159600)

inline static constexpr unsigned int OJLAOJKCHLF_MJEAFFNBKEH_TypeDefinitionIndex = 63861;

class OJLAOJKCHLF_MJEAFFNBKEH : public ::System::Object
{
public:
	::OJLAOJKCHLF* KLHPEBKNIFB; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_MJEAFFNBKEH__CTOR_OFFSET))(this);
	}

	::System::Void MCCCEJHMNHA(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_MJEAFFNBKEH_MCCCEJHMNHA_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void HCFLIDFECMK(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_MJEAFFNBKEH_HCFLIDFECMK_OFFSET))(this, NAPFALLANDL);
	}
};
