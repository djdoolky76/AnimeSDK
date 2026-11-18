#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AILCFJPLDMG;

#define HGLFCMANNEE_HGKBIBIPNEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8780A0)

inline static constexpr unsigned int HGLFCMANNEE_HGKBIBIPNEE_TypeDefinitionIndex = 94470;

class HGLFCMANNEE_HGKBIBIPNEE : public ::System::Object
{
public:
	::HGLFCMANNEE_HGKBIBIPNEE* KFNEPEPBOFA; // 0x10
	::AILCFJPLDMG* LDABGCMGELG; // 0x18
	::HGLFCMANNEE_HGKBIBIPNEE* GDHLGCLCADE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGLFCMANNEE_HGKBIBIPNEE__CTOR_OFFSET))(this);
	}
};
