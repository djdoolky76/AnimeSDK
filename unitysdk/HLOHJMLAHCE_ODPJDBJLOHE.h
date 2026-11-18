#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HLOHJMLAHCE;
namespace System { class Action; }

#define HLOHJMLAHCE_ODPJDBJLOHE_BCPOBDCOIBC_OFFSET UNITYSDK_OFFSET(0x18196CE0)
#define HLOHJMLAHCE_ODPJDBJLOHE_JBPOGMAAMGD_OFFSET UNITYSDK_OFFSET(0x18196D20)
#define HLOHJMLAHCE_ODPJDBJLOHE_OLBDBGBDPNK_OFFSET UNITYSDK_OFFSET(0x18196C60)
#define HLOHJMLAHCE_ODPJDBJLOHE__CTOR_OFFSET UNITYSDK_OFFSET(0x18196C50)

inline static constexpr unsigned int HLOHJMLAHCE_ODPJDBJLOHE_TypeDefinitionIndex = 82520;

class HLOHJMLAHCE_ODPJDBJLOHE : public ::System::Object
{
public:
	::HLOHJMLAHCE* KLHPEBKNIFB; // 0x10
	::System::Action* FFMGICPLKFB; // 0x18
	::System::Action* EANLNOGKLJL; // 0x20
	::System::Boolean ICFIFPDJIJE; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 FBKGFLADIDE; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHJMLAHCE_ODPJDBJLOHE__CTOR_OFFSET))(this);
	}

	::System::Void OLBDBGBDPNK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHJMLAHCE_ODPJDBJLOHE_OLBDBGBDPNK_OFFSET))(this);
	}

	::System::Void BCPOBDCOIBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHJMLAHCE_ODPJDBJLOHE_BCPOBDCOIBC_OFFSET))(this);
	}

	::System::Void JBPOGMAAMGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOHJMLAHCE_ODPJDBJLOHE_JBPOGMAAMGD_OFFSET))(this);
	}
};
