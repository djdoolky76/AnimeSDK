#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AOKFPNKJOON_HGHEPJOIKJL_ONACEMLHJFE_OFFSET UNITYSDK_OFFSET(0x14379F00)
#define AOKFPNKJOON_HGHEPJOIKJL__CTOR_OFFSET UNITYSDK_OFFSET(0x14379EF0)

inline static constexpr unsigned int AOKFPNKJOON_HGHEPJOIKJL_TypeDefinitionIndex = 51471;

class AOKFPNKJOON_HGHEPJOIKJL : public ::System::Object
{
public:
	::System::Boolean CAAFEGLOALC; // 0x10
	::System::Boolean PLCJLHLIMGG; // 0x11
	::System::Boolean CCFIKJAILPN; // 0x12
	::System::Byte _padding0[0x1];
	::System::Single HHMMKIAFHOC; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_HGHEPJOIKJL__CTOR_OFFSET))(this);
	}

	::System::Void ONACEMLHJFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_HGHEPJOIKJL_ONACEMLHJFE_OFFSET))(this);
	}
};
