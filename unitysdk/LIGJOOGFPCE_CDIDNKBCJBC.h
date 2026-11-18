#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LIGJOOGFPCE;
namespace System { class Action; }

#define LIGJOOGFPCE_CDIDNKBCJBC_NBGJLEHHFMA_OFFSET UNITYSDK_OFFSET(0x14DAFF60)
#define LIGJOOGFPCE_CDIDNKBCJBC__CTOR_OFFSET UNITYSDK_OFFSET(0x14DAFF50)

inline static constexpr unsigned int LIGJOOGFPCE_CDIDNKBCJBC_TypeDefinitionIndex = 92786;

class LIGJOOGFPCE_CDIDNKBCJBC : public ::System::Object
{
public:
	::System::Action* FFMGICPLKFB; // 0x10
	::LIGJOOGFPCE* KLHPEBKNIFB; // 0x18
	::System::Boolean AOFOJKMOCLA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGJOOGFPCE_CDIDNKBCJBC__CTOR_OFFSET))(this);
	}

	::System::Void NBGJLEHHFMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGJOOGFPCE_CDIDNKBCJBC_NBGJLEHHFMA_OFFSET))(this);
	}
};
