#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLPBCHDKIAD_MEJFKHACBID;
class JPKHEMNFNLK;

#define GLPBCHDKIAD_ABLBCLIGLNK_AHHAOMMBPEJ_OFFSET UNITYSDK_OFFSET(0x17AD16A0)
#define GLPBCHDKIAD_ABLBCLIGLNK__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD1530)

inline static constexpr unsigned int GLPBCHDKIAD_ABLBCLIGLNK_TypeDefinitionIndex = 91795;

class GLPBCHDKIAD_ABLBCLIGLNK : public ::System::Object
{
public:
	::JPKHEMNFNLK* NNIHJPFJHDL; // 0x10
	::GLPBCHDKIAD_MEJFKHACBID* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_ABLBCLIGLNK__CTOR_OFFSET))(this);
	}

	::System::Void AHHAOMMBPEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLPBCHDKIAD_ABLBCLIGLNK_AHHAOMMBPEJ_OFFSET))(this);
	}
};
