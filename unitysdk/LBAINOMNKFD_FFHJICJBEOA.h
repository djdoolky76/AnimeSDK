#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define LBAINOMNKFD_FFHJICJBEOA_HHEDONJKBCC_OFFSET UNITYSDK_OFFSET(0x15DDD250)
#define LBAINOMNKFD_FFHJICJBEOA__CTOR_OFFSET UNITYSDK_OFFSET(0x15DDD240)

inline static constexpr unsigned int LBAINOMNKFD_FFHJICJBEOA_TypeDefinitionIndex = 53383;

class LBAINOMNKFD_FFHJICJBEOA : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAINOMNKFD_FFHJICJBEOA__CTOR_OFFSET))(this);
	}

	::System::Void HHEDONJKBCC(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LBAINOMNKFD_FFHJICJBEOA_HHEDONJKBCC_OFFSET))(this, DJCNCELJPOM);
	}
};
