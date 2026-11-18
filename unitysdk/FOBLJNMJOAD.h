#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JOCCCDLFOPJ;

#define FOBLJNMJOAD_EHOPCGKNOJN_OFFSET UNITYSDK_OFFSET(0x15CB2950)
#define FOBLJNMJOAD_OCAGHENHOPL_OFFSET UNITYSDK_OFFSET(0x15CB29E0)
#define FOBLJNMJOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x15CB2AA0)

inline static constexpr unsigned int FOBLJNMJOAD_TypeDefinitionIndex = 57156;

class FOBLJNMJOAD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBLJNMJOAD__CTOR_OFFSET))(this);
	}

	::JOCCCDLFOPJ* EHOPCGKNOJN()
	{
		return ((::JOCCCDLFOPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBLJNMJOAD_EHOPCGKNOJN_OFFSET))(this);
	}

	::System::Void OCAGHENHOPL(::JOCCCDLFOPJ* BOBIKBDKFCK)
	{
		return ((::System::Void(*)(::PVOID, ::JOCCCDLFOPJ*))((::PBYTE)hIl2Cpp + FOBLJNMJOAD_OCAGHENHOPL_OFFSET))(this, BOBIKBDKFCK);
	}
};
