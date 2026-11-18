#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MKFNBHDICNJ_LENFOLIJOAA_IIHFFJLPBCA_OFFSET UNITYSDK_OFFSET(0x16C93A30)
#define MKFNBHDICNJ_LENFOLIJOAA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C93A20)

inline static constexpr unsigned int MKFNBHDICNJ_LENFOLIJOAA_TypeDefinitionIndex = 61336;

class MKFNBHDICNJ_LENFOLIJOAA : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::String* PKNPDPPPIOG; // 0x18
	::System::Action_1<::System::Boolean>* EDNJGMKPFHG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_LENFOLIJOAA__CTOR_OFFSET))(this);
	}

	::System::Void IIHFFJLPBCA(::System::Boolean CDNMJGCLGCI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_LENFOLIJOAA_IIHFFJLPBCA_OFFSET))(this, CDNMJGCLGCI);
	}
};
