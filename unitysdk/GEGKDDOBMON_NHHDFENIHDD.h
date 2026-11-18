#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJMFECAAPHD;

#define GEGKDDOBMON_NHHDFENIHDD_FEFCLBKLKMF_OFFSET UNITYSDK_OFFSET(0x13DC9C90)
#define GEGKDDOBMON_NHHDFENIHDD__CTOR_OFFSET UNITYSDK_OFFSET(0x13DC9C80)

inline static constexpr unsigned int GEGKDDOBMON_NHHDFENIHDD_TypeDefinitionIndex = 58072;

class GEGKDDOBMON_NHHDFENIHDD : public ::System::Object
{
public:
	::FJMFECAAPHD* PLBEAIIJADM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGKDDOBMON_NHHDFENIHDD__CTOR_OFFSET))(this);
	}

	::System::Void FEFCLBKLKMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGKDDOBMON_NHHDFENIHDD_FEFCLBKLKMF_OFFSET))(this);
	}
};
