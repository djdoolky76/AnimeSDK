#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define FNPGFHGFFGL_JGDMGDOLOJI_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x142B4690)
#define FNPGFHGFFGL_JGDMGDOLOJI_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x142B4730)
#define FNPGFHGFFGL_JGDMGDOLOJI__CTOR_OFFSET UNITYSDK_OFFSET(0x142B43F0)

inline static constexpr unsigned int FNPGFHGFFGL_JGDMGDOLOJI_TypeDefinitionIndex = 56318;

class FNPGFHGFFGL_JGDMGDOLOJI : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPGFHGFFGL_JGDMGDOLOJI__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FNPGFHGFFGL_JGDMGDOLOJI_AAHMACBDCPN_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}

	::System::Void LIDNPLMPHAL(::System::UInt32 GFOPLDDFDIA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNPGFHGFFGL_JGDMGDOLOJI_LIDNPLMPHAL_OFFSET))(this, GFOPLDDFDIA);
	}
};
