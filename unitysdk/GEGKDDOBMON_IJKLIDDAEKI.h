#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GEGKDDOBMON_IJKLIDDAEKI_CJLICDOEGOI_OFFSET UNITYSDK_OFFSET(0x13251A80)
#define GEGKDDOBMON_IJKLIDDAEKI__CTOR_OFFSET UNITYSDK_OFFSET(0x13251A70)

inline static constexpr unsigned int GEGKDDOBMON_IJKLIDDAEKI_TypeDefinitionIndex = 58056;

class GEGKDDOBMON_IJKLIDDAEKI : public ::System::Object
{
public:
	::System::Int32 AOFOCMJOEDL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGKDDOBMON_IJKLIDDAEKI__CTOR_OFFSET))(this);
	}

	::System::Void CJLICDOEGOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGKDDOBMON_IJKLIDDAEKI_CJLICDOEGOI_OFFSET))(this);
	}
};
