#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IDGDIFDMIDP;

#define CADMJOPHMJL_KHJCAKCPBBE_NNJHDFOABFP_OFFSET UNITYSDK_OFFSET(0x14C6CDA0)
#define CADMJOPHMJL_KHJCAKCPBBE__CTOR_OFFSET UNITYSDK_OFFSET(0x14C6CD90)

inline static constexpr unsigned int CADMJOPHMJL_KHJCAKCPBBE_TypeDefinitionIndex = 41229;

class CADMJOPHMJL_KHJCAKCPBBE : public ::System::Object
{
public:
	::IDGDIFDMIDP* GGODNFDLEGE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMJOPHMJL_KHJCAKCPBBE__CTOR_OFFSET))(this);
	}

	::System::Void NNJHDFOABFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADMJOPHMJL_KHJCAKCPBBE_NNJHDFOABFP_OFFSET))(this);
	}
};
