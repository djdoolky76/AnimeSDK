#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class OJLAOJKCHLF;

#define OJLAOJKCHLF_OEHOLPCGFNJ_KMHMLHFFLCG_OFFSET UNITYSDK_OFFSET(0x15FE4970)
#define OJLAOJKCHLF_OEHOLPCGFNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE4960)

inline static constexpr unsigned int OJLAOJKCHLF_OEHOLPCGFNJ_TypeDefinitionIndex = 63859;

class OJLAOJKCHLF_OEHOLPCGFNJ : public ::System::Object
{
public:
	::OJLAOJKCHLF* KLHPEBKNIFB; // 0x10
	::System::Int32 ACHBBPJIBIE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_OEHOLPCGFNJ__CTOR_OFFSET))(this);
	}

	::System::Void KMHMLHFFLCG(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_OEHOLPCGFNJ_KMHMLHFFLCG_OFFSET))(this, KGFGOODAFDH);
	}
};
