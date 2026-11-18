#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OJLAOJKCHLF;
class PCEDMECCNJD;

#define OJLAOJKCHLF_JFODFDOEAPF_FGEPHOBOAKA_OFFSET UNITYSDK_OFFSET(0x11B37EE0)
#define OJLAOJKCHLF_JFODFDOEAPF__CTOR_OFFSET UNITYSDK_OFFSET(0x11B37ED0)

inline static constexpr unsigned int OJLAOJKCHLF_JFODFDOEAPF_TypeDefinitionIndex = 63854;

class OJLAOJKCHLF_JFODFDOEAPF : public ::System::Object
{
public:
	::PCEDMECCNJD* OFBDJCHNGOI; // 0x10
	::OJLAOJKCHLF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_JFODFDOEAPF__CTOR_OFFSET))(this);
	}

	::System::Void FGEPHOBOAKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLAOJKCHLF_JFODFDOEAPF_FGEPHOBOAKA_OFFSET))(this);
	}
};
