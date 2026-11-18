#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

#define POODDBJFAPA_CDKAILELBGC_AAMJEKFGACJ_OFFSET UNITYSDK_OFFSET(0x1A8070E0)
#define POODDBJFAPA_CDKAILELBGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8070D0)

inline static constexpr unsigned int POODDBJFAPA_CDKAILELBGC_TypeDefinitionIndex = 90266;

class POODDBJFAPA_CDKAILELBGC : public ::System::Object
{
public:
	::System::Int32 KFHFCODJGHN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_CDKAILELBGC__CTOR_OFFSET))(this);
	}

	::System::Boolean AAMJEKFGACJ(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + POODDBJFAPA_CDKAILELBGC_AAMJEKFGACJ_OFFSET))(this, HAAEBCOBKFF);
	}
};
