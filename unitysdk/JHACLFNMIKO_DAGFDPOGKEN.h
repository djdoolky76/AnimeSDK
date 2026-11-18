#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JHACLFNMIKO;
class OAEFGCLEHHO;
namespace System { class Action; }

#define JHACLFNMIKO_DAGFDPOGKEN_HMMHBACOCAO_OFFSET UNITYSDK_OFFSET(0x1A477890)
#define JHACLFNMIKO_DAGFDPOGKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A477880)

inline static constexpr unsigned int JHACLFNMIKO_DAGFDPOGKEN_TypeDefinitionIndex = 54599;

class JHACLFNMIKO_DAGFDPOGKEN : public ::System::Object
{
public:
	::JHACLFNMIKO* KLHPEBKNIFB; // 0x10
	::System::Action* CAAFEGLOALC; // 0x18
	::System::Int32 LJMPPBEMEPP; // 0x20
	::System::Int32 ABHBKFJKINO; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHACLFNMIKO_DAGFDPOGKEN__CTOR_OFFSET))(this);
	}

	::System::Void HMMHBACOCAO(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + JHACLFNMIKO_DAGFDPOGKEN_HMMHBACOCAO_OFFSET))(this, BHDNBGLCNOM);
	}
};
