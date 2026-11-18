#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MGCPJNAGCHA;
class OAEFGCLEHHO;
class OJLAOJKCHLF;
namespace System { template <typename T> class Action_1; }

#define OJLAOJKCHLF_GJDCAANCIKF_LOKLOPGODDF_OFFSET UNITYSDK_OFFSET(0x13A66AA0)
#define OJLAOJKCHLF_GJDCAANCIKF_MMOMAPMFPEE_OFFSET UNITYSDK_OFFSET(0x13A66C10)
#define OJLAOJKCHLF_GJDCAANCIKF__CTOR_OFFSET UNITYSDK_OFFSET(0x13A66A90)

inline static constexpr unsigned int OJLAOJKCHLF_GJDCAANCIKF_TypeDefinitionIndex = 63856;

class OJLAOJKCHLF_GJDCAANCIKF : public ::System::Object
{
public:
	::OJLAOJKCHLF* KLHPEBKNIFB; // 0x10
	::MGCPJNAGCHA* CMJIMNBNAKD; // 0x18
	::System::Action_1<::System::Boolean>* EJGDHCIBCJH; // 0x20
	::System::Int32 KDAMBCPIFGB; // 0x28
	::System::Int32 EOGLMAEPALE; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_GJDCAANCIKF__CTOR_OFFSET))(this);
	}

	::System::Void LOKLOPGODDF(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_GJDCAANCIKF_LOKLOPGODDF_OFFSET))(this, KGFGOODAFDH);
	}

	::System::Void MMOMAPMFPEE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_GJDCAANCIKF_MMOMAPMFPEE_OFFSET))(this, PIIPCLCCOIG);
	}
};
