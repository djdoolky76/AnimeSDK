#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define FOHBHENLLAJ_CHMMCBAKJJA_HAFHFKAPIEP_OFFSET UNITYSDK_OFFSET(0x10ED2FB0)
#define FOHBHENLLAJ_CHMMCBAKJJA__CTOR_OFFSET UNITYSDK_OFFSET(0x10ED2FA0)

inline static constexpr unsigned int FOHBHENLLAJ_CHMMCBAKJJA_TypeDefinitionIndex = 59692;

class FOHBHENLLAJ_CHMMCBAKJJA : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHBHENLLAJ_CHMMCBAKJJA__CTOR_OFFSET))(this);
	}

	::System::Void HAFHFKAPIEP(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOHBHENLLAJ_CHMMCBAKJJA_HAFHFKAPIEP_OFFSET))(this, PIIPCLCCOIG);
	}
};
