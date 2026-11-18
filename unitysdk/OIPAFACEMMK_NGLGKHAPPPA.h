#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
class OIPAFACEMMK;
namespace System { class Action; }

#define OIPAFACEMMK_NGLGKHAPPPA_FFODMMFIOAO_OFFSET UNITYSDK_OFFSET(0x12934DF0)
#define OIPAFACEMMK_NGLGKHAPPPA__CTOR_OFFSET UNITYSDK_OFFSET(0x12934DE0)

inline static constexpr unsigned int OIPAFACEMMK_NGLGKHAPPPA_TypeDefinitionIndex = 40824;

class OIPAFACEMMK_NGLGKHAPPPA : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::OIPAFACEMMK* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_NGLGKHAPPPA__CTOR_OFFSET))(this);
	}

	::System::Void FFODMMFIOAO(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OIPAFACEMMK_NGLGKHAPPPA_FFODMMFIOAO_OFFSET))(this, DJCNCELJPOM);
	}
};
