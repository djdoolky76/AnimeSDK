#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CKPAOOFMPKC;
namespace System { class String; }

#define CKPAOOFMPKC_GMKMGENAELM_BOPCCGJLONE_OFFSET UNITYSDK_OFFSET(0x1533CDE0)
#define CKPAOOFMPKC_GMKMGENAELM__CTOR_OFFSET UNITYSDK_OFFSET(0x1533CDD0)

inline static constexpr unsigned int CKPAOOFMPKC_GMKMGENAELM_TypeDefinitionIndex = 90496;

class CKPAOOFMPKC_GMKMGENAELM : public ::System::Object
{
public:
	::System::String* HDINMDLGLIP; // 0x10
	::CKPAOOFMPKC* KLHPEBKNIFB; // 0x18
	::System::Boolean KILCIOEKKFH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GMKMGENAELM__CTOR_OFFSET))(this);
	}

	::System::Void BOPCCGJLONE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPAOOFMPKC_GMKMGENAELM_BOPCCGJLONE_OFFSET))(this);
	}
};
