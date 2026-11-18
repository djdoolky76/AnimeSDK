#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class PKMBIGJFGJJ;

#define PKMBIGJFGJJ_ADLKAJLNLCE_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x14BACE30)
#define PKMBIGJFGJJ_ADLKAJLNLCE__CTOR_OFFSET UNITYSDK_OFFSET(0x14BACE20)

inline static constexpr unsigned int PKMBIGJFGJJ_ADLKAJLNLCE_TypeDefinitionIndex = 56829;

class PKMBIGJFGJJ_ADLKAJLNLCE : public ::System::Object
{
public:
	::PKMBIGJFGJJ* KLHPEBKNIFB; // 0x10
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x18
	::System::Int32 EGEAFHJPLBC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMBIGJFGJJ_ADLKAJLNLCE__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::UInt32 JCPNDFAEOLI, ::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PKMBIGJFGJJ_ADLKAJLNLCE_LIDNPLMPHAL_OFFSET))(this, JCPNDFAEOLI, EBFCACIEKBC);
	}
};
