#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALDOKCCIFNB;
class OIOIGAPDOHM;
class OJLAOJKCHLF;

#define OIOIGAPDOHM_JJALIGHBIDI_ICEDPHIBANH_OFFSET UNITYSDK_OFFSET(0x13A64B40)
#define OIOIGAPDOHM_JJALIGHBIDI__CTOR_OFFSET UNITYSDK_OFFSET(0x13A64B30)

inline static constexpr unsigned int OIOIGAPDOHM_JJALIGHBIDI_TypeDefinitionIndex = 69479;

class OIOIGAPDOHM_JJALIGHBIDI : public ::System::Object
{
public:
	::OIOIGAPDOHM* KLHPEBKNIFB; // 0x10
	::OJLAOJKCHLF* KDPLLADEEFJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOIGAPDOHM_JJALIGHBIDI__CTOR_OFFSET))(this);
	}

	::System::Void ICEDPHIBANH(::ALDOKCCIFNB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + OIOIGAPDOHM_JJALIGHBIDI_ICEDPHIBANH_OFFSET))(this, LJBPECKCCEA);
	}
};
