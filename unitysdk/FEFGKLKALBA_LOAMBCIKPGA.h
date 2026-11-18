#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FEFGKLKALBA;
namespace System { class Action; }

#define FEFGKLKALBA_LOAMBCIKPGA_AALLBDKDFNN_OFFSET UNITYSDK_OFFSET(0xBB39A50)
#define FEFGKLKALBA_LOAMBCIKPGA_MIDCPKBONBN_OFFSET UNITYSDK_OFFSET(0xBB39A80)
#define FEFGKLKALBA_LOAMBCIKPGA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB39A40)

inline static constexpr unsigned int FEFGKLKALBA_LOAMBCIKPGA_TypeDefinitionIndex = 63702;

class FEFGKLKALBA_LOAMBCIKPGA : public ::System::Object
{
public:
	::System::Action* MGAKJHJAGJI; // 0x10
	::FEFGKLKALBA* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFGKLKALBA_LOAMBCIKPGA__CTOR_OFFSET))(this);
	}

	::System::Void AALLBDKDFNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFGKLKALBA_LOAMBCIKPGA_AALLBDKDFNN_OFFSET))(this);
	}

	::System::Void MIDCPKBONBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEFGKLKALBA_LOAMBCIKPGA_MIDCPKBONBN_OFFSET))(this);
	}
};
