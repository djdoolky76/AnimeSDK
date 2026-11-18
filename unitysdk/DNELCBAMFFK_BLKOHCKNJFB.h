#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DNELCBAMFFK;

#define DNELCBAMFFK_BLKOHCKNJFB_NBPDICHLFIL_OFFSET UNITYSDK_OFFSET(0x124278D0)
#define DNELCBAMFFK_BLKOHCKNJFB__CTOR_OFFSET UNITYSDK_OFFSET(0x12427810)

inline static constexpr unsigned int DNELCBAMFFK_BLKOHCKNJFB_TypeDefinitionIndex = 68850;

class DNELCBAMFFK_BLKOHCKNJFB : public ::System::Object
{
public:
	::DNELCBAMFFK* KLHPEBKNIFB; // 0x10
	::System::Int32 OFBIMIABNEP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNELCBAMFFK_BLKOHCKNJFB__CTOR_OFFSET))(this);
	}

	::System::Void NBPDICHLFIL(::System::Boolean PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNELCBAMFFK_BLKOHCKNJFB_NBPDICHLFIL_OFFSET))(this, PIIPCLCCOIG);
	}
};
