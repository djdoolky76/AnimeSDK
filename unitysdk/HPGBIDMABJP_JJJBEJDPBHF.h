#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class HCKMEEDBEAP;

#define HPGBIDMABJP_JJJBEJDPBHF_FIPHCKJHHII_OFFSET UNITYSDK_OFFSET(0xF831E00)
#define HPGBIDMABJP_JJJBEJDPBHF__CTOR_OFFSET UNITYSDK_OFFSET(0xF831DF0)

inline static constexpr unsigned int HPGBIDMABJP_JJJBEJDPBHF_TypeDefinitionIndex = 48809;

class HPGBIDMABJP_JJJBEJDPBHF : public ::System::Object
{
public:
	::HCKMEEDBEAP* NMHECGCIPLE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGBIDMABJP_JJJBEJDPBHF__CTOR_OFFSET))(this);
	}

	::System::Boolean FIPHCKJHHII(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean> HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>))((::PBYTE)hIl2Cpp + HPGBIDMABJP_JJJBEJDPBHF_FIPHCKJHHII_OFFSET))(this, HAAEBCOBKFF);
	}
};
