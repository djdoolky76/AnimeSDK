#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MEDHLPGEEEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A638730)

inline static constexpr unsigned int MEDHLPGEEEG_TypeDefinitionIndex = 50252;

class MEDHLPGEEEG : public ::System::Object
{
public:
	::System::UInt32 DBOOIOLEPOJ; // 0x10
	::System::Boolean EHLMLCBGNKE; // 0x14
	::System::Boolean IIKJCPNEHFL; // 0x15
	::System::Byte _padding0[0x2];
	::System::UInt32 CKELOFDFEEM; // 0x18
	::System::UInt32 GBLJDPMOCDJ; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDHLPGEEEG__CTOR_OFFSET))(this);
	}
};
