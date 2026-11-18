#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGLMNBCBJGJ;
class NHNINMBKJBB;
namespace System { class Action; }

#define NHNINMBKJBB_BPEIMMJAGEB_ECPHHFGBCND_OFFSET UNITYSDK_OFFSET(0x11590CB0)
#define NHNINMBKJBB_BPEIMMJAGEB__CTOR_OFFSET UNITYSDK_OFFSET(0x11590CA0)

inline static constexpr unsigned int NHNINMBKJBB_BPEIMMJAGEB_TypeDefinitionIndex = 90316;

class NHNINMBKJBB_BPEIMMJAGEB : public ::System::Object
{
public:
	::NHNINMBKJBB* KLHPEBKNIFB; // 0x10
	::GGLMNBCBJGJ* DFMKILICPFB; // 0x18
	::System::Action* OFHFHAIPDJM; // 0x20
	::System::Action* EJGDHCIBCJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNINMBKJBB_BPEIMMJAGEB__CTOR_OFFSET))(this);
	}

	::System::Void ECPHHFGBCND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHNINMBKJBB_BPEIMMJAGEB_ECPHHFGBCND_OFFSET))(this);
	}
};
