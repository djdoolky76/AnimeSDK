#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KDKPDGNDJDN;
namespace System { class Action; }

#define KDKPDGNDJDN_FEKKMJPAHIN_DEKACAPGGFG_OFFSET UNITYSDK_OFFSET(0x14FCFED0)
#define KDKPDGNDJDN_FEKKMJPAHIN_IBFGKAELBNP_OFFSET UNITYSDK_OFFSET(0x14FCFEB0)
#define KDKPDGNDJDN_FEKKMJPAHIN__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCFEA0)

inline static constexpr unsigned int KDKPDGNDJDN_FEKKMJPAHIN_TypeDefinitionIndex = 38476;

class KDKPDGNDJDN_FEKKMJPAHIN : public ::System::Object
{
public:
	::KDKPDGNDJDN* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKPDGNDJDN_FEKKMJPAHIN__CTOR_OFFSET))(this);
	}

	::System::Void IBFGKAELBNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKPDGNDJDN_FEKKMJPAHIN_IBFGKAELBNP_OFFSET))(this);
	}

	::System::Void DEKACAPGGFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKPDGNDJDN_FEKKMJPAHIN_DEKACAPGGFG_OFFSET))(this);
	}
};
