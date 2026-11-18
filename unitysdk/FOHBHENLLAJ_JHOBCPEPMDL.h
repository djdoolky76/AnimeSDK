#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define FOHBHENLLAJ_JHOBCPEPMDL_CFLCNKGGKEB_OFFSET UNITYSDK_OFFSET(0x11D8CB90)
#define FOHBHENLLAJ_JHOBCPEPMDL__CTOR_OFFSET UNITYSDK_OFFSET(0x11D8CB80)

inline static constexpr unsigned int FOHBHENLLAJ_JHOBCPEPMDL_TypeDefinitionIndex = 59694;

class FOHBHENLLAJ_JHOBCPEPMDL : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHBHENLLAJ_JHOBCPEPMDL__CTOR_OFFSET))(this);
	}

	::System::Void CFLCNKGGKEB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOHBHENLLAJ_JHOBCPEPMDL_CFLCNKGGKEB_OFFSET))(this, PIIPCLCCOIG);
	}
};
