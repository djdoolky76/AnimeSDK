#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CPFEBIAPPCM_LJPOLEEDDEO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1497AC00)
#define CPFEBIAPPCM_LJPOLEEDDEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1497ABF0)

inline static constexpr unsigned int CPFEBIAPPCM_LJPOLEEDDEO_TypeDefinitionIndex = 76950;

class CPFEBIAPPCM_LJPOLEEDDEO : public ::System::Object
{
public:
	::System::String* HFEIPMCNCNI; // 0x10

	::System::Void _ctor(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CPFEBIAPPCM_LJPOLEEDDEO__CTOR_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFEBIAPPCM_LJPOLEEDDEO_DISPOSE_OFFSET))(this);
	}
};
