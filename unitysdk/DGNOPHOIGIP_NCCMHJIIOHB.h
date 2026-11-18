#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGNOPHOIGIP;
namespace System { class String; }

#define DGNOPHOIGIP_NCCMHJIIOHB_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x19410CF0)
#define DGNOPHOIGIP_NCCMHJIIOHB__CTOR_OFFSET UNITYSDK_OFFSET(0x19410CE0)

inline static constexpr unsigned int DGNOPHOIGIP_NCCMHJIIOHB_TypeDefinitionIndex = 67797;

class DGNOPHOIGIP_NCCMHJIIOHB : public ::System::Object
{
public:
	::DGNOPHOIGIP* KLHPEBKNIFB; // 0x10
	::System::String* MCOHLHMKLIP; // 0x18
	::System::UInt32 OBNIAHNMHPF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNOPHOIGIP_NCCMHJIIOHB__CTOR_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNOPHOIGIP_NCCMHJIIOHB_MJMKFFANPBL_OFFSET))(this);
	}
};
