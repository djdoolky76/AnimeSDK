#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JILDDEDJNHP;
namespace System { class Action; }

#define JILDDEDJNHP_JGBLHFILCFJ_DEKACAPGGFG_OFFSET UNITYSDK_OFFSET(0x130887E0)
#define JILDDEDJNHP_JGBLHFILCFJ_IBFGKAELBNP_OFFSET UNITYSDK_OFFSET(0x130887C0)
#define JILDDEDJNHP_JGBLHFILCFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x130887B0)

inline static constexpr unsigned int JILDDEDJNHP_JGBLHFILCFJ_TypeDefinitionIndex = 43187;

class JILDDEDJNHP_JGBLHFILCFJ : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::JILDDEDJNHP* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILDDEDJNHP_JGBLHFILCFJ__CTOR_OFFSET))(this);
	}

	::System::Void IBFGKAELBNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILDDEDJNHP_JGBLHFILCFJ_IBFGKAELBNP_OFFSET))(this);
	}

	::System::Void DEKACAPGGFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILDDEDJNHP_JGBLHFILCFJ_DEKACAPGGFG_OFFSET))(this);
	}
};
