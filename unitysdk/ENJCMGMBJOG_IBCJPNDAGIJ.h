#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENJCMGMBJOG_CCNGMPLHMMD;
namespace System { class String; }

#define ENJCMGMBJOG_IBCJPNDAGIJ_DGLLICGIELP_OFFSET UNITYSDK_OFFSET(0x11AA99A0)
#define ENJCMGMBJOG_IBCJPNDAGIJ_MJOAHDGBJOP_OFFSET UNITYSDK_OFFSET(0x11AA9740)
#define ENJCMGMBJOG_IBCJPNDAGIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11AA9730)

inline static constexpr unsigned int ENJCMGMBJOG_IBCJPNDAGIJ_TypeDefinitionIndex = 89645;

class ENJCMGMBJOG_IBCJPNDAGIJ : public ::System::Object
{
public:
	::ENJCMGMBJOG_CCNGMPLHMMD* FGBNBFHOKAA; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJCMGMBJOG_IBCJPNDAGIJ__CTOR_OFFSET))(this);
	}

	::System::String* MJOAHDGBJOP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJCMGMBJOG_IBCJPNDAGIJ_MJOAHDGBJOP_OFFSET))(this);
	}

	::System::String* DGLLICGIELP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJCMGMBJOG_IBCJPNDAGIJ_DGLLICGIELP_OFFSET))(this);
	}
};
