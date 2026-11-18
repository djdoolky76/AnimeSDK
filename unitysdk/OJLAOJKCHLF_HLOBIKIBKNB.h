#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MGCPJNAGCHA;
class OAEFGCLEHHO;
class OJLAOJKCHLF;
namespace System { class String; }

#define OJLAOJKCHLF_HLOBIKIBKNB_JGJPIEMNGPJ_OFFSET UNITYSDK_OFFSET(0x18448400)
#define OJLAOJKCHLF_HLOBIKIBKNB__CTOR_OFFSET UNITYSDK_OFFSET(0x184483F0)

inline static constexpr unsigned int OJLAOJKCHLF_HLOBIKIBKNB_TypeDefinitionIndex = 63855;

class OJLAOJKCHLF_HLOBIKIBKNB : public ::System::Object
{
public:
	::MGCPJNAGCHA* CHDBHJDMPNJ; // 0x10
	::OJLAOJKCHLF* KLHPEBKNIFB; // 0x18
	::System::String* ODFGKBEFELF; // 0x20
	::System::Int32 KDAMBCPIFGB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_HLOBIKIBKNB__CTOR_OFFSET))(this);
	}

	::System::Void JGJPIEMNGPJ(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_HLOBIKIBKNB_JGJPIEMNGPJ_OFFSET))(this, KGFGOODAFDH);
	}
};
