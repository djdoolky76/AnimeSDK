#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JILDDEDJNHP;
namespace System { class Action; }

#define JILDDEDJNHP_LHJIJHBOLHB_ACBLEFBJJAC_OFFSET UNITYSDK_OFFSET(0x13AD25B0)
#define JILDDEDJNHP_LHJIJHBOLHB_CCDFAJEHPJM_OFFSET UNITYSDK_OFFSET(0x13AD25D0)
#define JILDDEDJNHP_LHJIJHBOLHB__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD25A0)

inline static constexpr unsigned int JILDDEDJNHP_LHJIJHBOLHB_TypeDefinitionIndex = 43186;

class JILDDEDJNHP_LHJIJHBOLHB : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::JILDDEDJNHP* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILDDEDJNHP_LHJIJHBOLHB__CTOR_OFFSET))(this);
	}

	::System::Void ACBLEFBJJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILDDEDJNHP_LHJIJHBOLHB_ACBLEFBJJAC_OFFSET))(this);
	}

	::System::Void CCDFAJEHPJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILDDEDJNHP_LHJIJHBOLHB_CCDFAJEHPJM_OFFSET))(this);
	}
};
