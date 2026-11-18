#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FEDMBJFJGNF;
namespace System { class Action; }

#define FEDMBJFJGNF_INOAFMOLADP_AFBCJACLDLP_OFFSET UNITYSDK_OFFSET(0x1428D680)
#define FEDMBJFJGNF_INOAFMOLADP__CTOR_OFFSET UNITYSDK_OFFSET(0x1428D670)

inline static constexpr unsigned int FEDMBJFJGNF_INOAFMOLADP_TypeDefinitionIndex = 91830;

class FEDMBJFJGNF_INOAFMOLADP : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::FEDMBJFJGNF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDMBJFJGNF_INOAFMOLADP__CTOR_OFFSET))(this);
	}

	::System::Void AFBCJACLDLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDMBJFJGNF_INOAFMOLADP_AFBCJACLDLP_OFFSET))(this);
	}
};
