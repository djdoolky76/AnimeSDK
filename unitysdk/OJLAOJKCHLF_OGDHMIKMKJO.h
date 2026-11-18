#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NELOEGNJPBA;
class OAEFGCLEHHO;
class OJLAOJKCHLF_HLOBIKIBKNB;

#define OJLAOJKCHLF_OGDHMIKMKJO_OMJDBPAKKPM_OFFSET UNITYSDK_OFFSET(0x15F78E70)
#define OJLAOJKCHLF_OGDHMIKMKJO__CTOR_OFFSET UNITYSDK_OFFSET(0x15F78E60)

inline static constexpr unsigned int OJLAOJKCHLF_OGDHMIKMKJO_TypeDefinitionIndex = 63860;

class OJLAOJKCHLF_OGDHMIKMKJO : public ::System::Object
{
public:
	::NELOEGNJPBA* PEOJENEMDIG; // 0x10
	::OJLAOJKCHLF_HLOBIKIBKNB* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_OGDHMIKMKJO__CTOR_OFFSET))(this);
	}

	::System::Void OMJDBPAKKPM(::OAEFGCLEHHO* KGFGOODAFDH)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_OGDHMIKMKJO_OMJDBPAKKPM_OFFSET))(this, KGFGOODAFDH);
	}
};
