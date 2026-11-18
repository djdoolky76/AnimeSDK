#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AANOMDNBAHD_LLDAEBPHBED;
namespace System { class Action; }

#define AANOMDNBAHD_ALNMCPHLAIB_FKEJFEDKCME_OFFSET UNITYSDK_OFFSET(0x17C91F00)
#define AANOMDNBAHD_ALNMCPHLAIB__CTOR_OFFSET UNITYSDK_OFFSET(0x17C91EF0)

inline static constexpr unsigned int AANOMDNBAHD_ALNMCPHLAIB_TypeDefinitionIndex = 67888;

class AANOMDNBAHD_ALNMCPHLAIB : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::AANOMDNBAHD_LLDAEBPHBED* FGBNBFHOKAA; // 0x18
	::System::Int32 PDBIEPEDIEB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANOMDNBAHD_ALNMCPHLAIB__CTOR_OFFSET))(this);
	}

	::System::Void FKEJFEDKCME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANOMDNBAHD_ALNMCPHLAIB_FKEJFEDKCME_OFFSET))(this);
	}
};
