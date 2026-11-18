#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGLMNBCBJGJ;
class NHNINMBKJBB;
namespace System { class Action; }

#define NHNINMBKJBB_HHJONBDKDKF_PLANGNFMHPC_OFFSET UNITYSDK_OFFSET(0x1314F490)
#define NHNINMBKJBB_HHJONBDKDKF__CTOR_OFFSET UNITYSDK_OFFSET(0x1314EA00)

inline static constexpr unsigned int NHNINMBKJBB_HHJONBDKDKF_TypeDefinitionIndex = 90315;

class NHNINMBKJBB_HHJONBDKDKF : public ::System::Object
{
public:
	::NHNINMBKJBB* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18
	::GGLMNBCBJGJ* DFMKILICPFB; // 0x20
	::System::Action* OFHFHAIPDJM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNINMBKJBB_HHJONBDKDKF__CTOR_OFFSET))(this);
	}

	::System::Void PLANGNFMHPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNINMBKJBB_HHJONBDKDKF_PLANGNFMHPC_OFFSET))(this);
	}
};
