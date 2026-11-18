#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class OJLAOJKCHLF;

#define OJLAOJKCHLF_ANPLBBMGBHI_JJELKPABCMG_OFFSET UNITYSDK_OFFSET(0x172CF310)
#define OJLAOJKCHLF_ANPLBBMGBHI__CTOR_OFFSET UNITYSDK_OFFSET(0x172CF300)

inline static constexpr unsigned int OJLAOJKCHLF_ANPLBBMGBHI_TypeDefinitionIndex = 63858;

class OJLAOJKCHLF_ANPLBBMGBHI : public ::System::Object
{
public:
	::OJLAOJKCHLF* KLHPEBKNIFB; // 0x10
	::System::Int32 KDAMBCPIFGB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_ANPLBBMGBHI__CTOR_OFFSET))(this);
	}

	::System::Void JJELKPABCMG(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_ANPLBBMGBHI_JJELKPABCMG_OFFSET))(this, KGFGOODAFDH);
	}
};
