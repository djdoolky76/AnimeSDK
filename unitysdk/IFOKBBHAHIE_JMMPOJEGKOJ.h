#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IFOKBBHAHIE_JMMPOJEGKOJ_HCOJJFJBGME_OFFSET UNITYSDK_OFFSET(0xF86C760)
#define IFOKBBHAHIE_JMMPOJEGKOJ_HKPCLHDIGAC_OFFSET UNITYSDK_OFFSET(0xF86C740)
#define IFOKBBHAHIE_JMMPOJEGKOJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF863700)

inline static constexpr unsigned int IFOKBBHAHIE_JMMPOJEGKOJ_TypeDefinitionIndex = 67429;

class IFOKBBHAHIE_JMMPOJEGKOJ : public ::System::Object
{
public:
	::System::Action* GOOPOJIJKKJ; // 0x10
	::System::Action* MBNOJBFDGHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_JMMPOJEGKOJ__CTOR_OFFSET))(this);
	}

	::System::Void HKPCLHDIGAC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_JMMPOJEGKOJ_HKPCLHDIGAC_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void HCOJJFJBGME(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_JMMPOJEGKOJ_HCOJJFJBGME_OFFSET))(this, PIIPCLCCOIG);
	}
};
