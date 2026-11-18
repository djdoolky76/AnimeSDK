#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FAFHFHADDIC.h"

namespace System { class String; }

#define ODLOCAJKGDM_CCPNLDGMFJJ_ADLJEFHJIOJ_OFFSET UNITYSDK_OFFSET(0x184389B0)
#define ODLOCAJKGDM_CCPNLDGMFJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x184389A0)

inline static constexpr unsigned int ODLOCAJKGDM_CCPNLDGMFJJ_TypeDefinitionIndex = 61946;

class ODLOCAJKGDM_CCPNLDGMFJJ : public ::System::Object
{
public:
	::System::String* AELLPLBJELA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLOCAJKGDM_CCPNLDGMFJJ__CTOR_OFFSET))(this);
	}

	::System::Boolean ADLJEFHJIOJ(::FAFHFHADDIC LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::FAFHFHADDIC))((::PBYTE)hIl2Cpp + ODLOCAJKGDM_CCPNLDGMFJJ_ADLJEFHJIOJ_OFFSET))(this, LJBPECKCCEA);
	}
};
