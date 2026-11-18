#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ABJMPKENACD;
class GLHNIOLKFEE;
namespace System { class Action; }

#define ABJMPKENACD_FDCNEJFOBEN_NFKKKKBNFDI_OFFSET UNITYSDK_OFFSET(0x154C9FE0)
#define ABJMPKENACD_FDCNEJFOBEN__CTOR_OFFSET UNITYSDK_OFFSET(0x154C9FD0)

inline static constexpr unsigned int ABJMPKENACD_FDCNEJFOBEN_TypeDefinitionIndex = 88641;

class ABJMPKENACD_FDCNEJFOBEN : public ::System::Object
{
public:
	::ABJMPKENACD* KLHPEBKNIFB; // 0x10
	::System::Action* FKHOJLMBILE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_FDCNEJFOBEN__CTOR_OFFSET))(this);
	}

	::System::Void NFKKKKBNFDI(::GLHNIOLKFEE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::GLHNIOLKFEE*))((::PBYTE)hIl2Cpp + ABJMPKENACD_FDCNEJFOBEN_NFKKKKBNFDI_OFFSET))(this, GLAOEHCGCFO);
	}
};
