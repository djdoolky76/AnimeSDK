#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CHJIKOHGEGB_GFLPJBEEEGD_OFFSET UNITYSDK_OFFSET(0x1479DCC0)
#define CHJIKOHGEGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1479DC80)

inline static constexpr unsigned int CHJIKOHGEGB_TypeDefinitionIndex = 45376;

class CHJIKOHGEGB : public ::System::Object
{
public:
	::System::Single ADDEJJOABCJ; // 0x10
	::System::Single JJAICPIBDNB; // 0x14
	::System::Int32 EDBOJDHONOG; // 0x18
	::System::Single JFPGBHOMGPM; // 0x1C
	::System::Single BEJCHOKAPDB; // 0x20
	::System::Int32 GPBILAPOLJB; // 0x24
	::System::Int32 ELKMIJGCIGO; // 0x28
	::System::Single GIIAENFEMIE; // 0x2C
	::System::Boolean IFKHJHDBOGJ; // 0x30
	::System::Boolean BKDAPBPBBEJ; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJIKOHGEGB__CTOR_OFFSET))(this);
	}

	::System::Int32 GFLPJBEEEGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJIKOHGEGB_GFLPJBEEEGD_OFFSET))(this);
	}
};
