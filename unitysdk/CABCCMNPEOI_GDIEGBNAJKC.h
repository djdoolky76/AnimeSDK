#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define CABCCMNPEOI_GDIEGBNAJKC_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x14C60F70)
#define CABCCMNPEOI_GDIEGBNAJKC_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x14C60ED0)
#define CABCCMNPEOI_GDIEGBNAJKC__CTOR_OFFSET UNITYSDK_OFFSET(0x14C60EC0)

inline static constexpr unsigned int CABCCMNPEOI_GDIEGBNAJKC_TypeDefinitionIndex = 45161;

class CABCCMNPEOI_GDIEGBNAJKC : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABCCMNPEOI_GDIEGBNAJKC__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::UInt32 GFOPLDDFDIA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CABCCMNPEOI_GDIEGBNAJKC_LIDNPLMPHAL_OFFSET))(this, GFOPLDDFDIA);
	}

	::System::Void AAHMACBDCPN(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CABCCMNPEOI_GDIEGBNAJKC_AAHMACBDCPN_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}
};
