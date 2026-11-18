#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIPAFAGLLGH;
namespace System { class Action; }

#define AIPAFAGLLGH_HLFDEDKBOJF_OCKILCHNFGD_OFFSET UNITYSDK_OFFSET(0x14214F30)
#define AIPAFAGLLGH_HLFDEDKBOJF__CTOR_OFFSET UNITYSDK_OFFSET(0x14214F20)

inline static constexpr unsigned int AIPAFAGLLGH_HLFDEDKBOJF_TypeDefinitionIndex = 70107;

class AIPAFAGLLGH_HLFDEDKBOJF : public ::System::Object
{
public:
	::AIPAFAGLLGH* KLHPEBKNIFB; // 0x10
	::System::Action* PABLEDCGDGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_HLFDEDKBOJF__CTOR_OFFSET))(this);
	}

	::System::Void OCKILCHNFGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPAFAGLLGH_HLFDEDKBOJF_OCKILCHNFGD_OFFSET))(this);
	}
};
