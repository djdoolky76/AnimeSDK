#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PKLAICEMAHO;

#define PKLAICEMAHO_KFBBHDIMGAO_JFGFJAPCCFN_OFFSET UNITYSDK_OFFSET(0x1B9EAC60)
#define PKLAICEMAHO_KFBBHDIMGAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9EAC50)

inline static constexpr unsigned int PKLAICEMAHO_KFBBHDIMGAO_TypeDefinitionIndex = 89080;

class PKLAICEMAHO_KFBBHDIMGAO : public ::System::Object
{
public:
	::PKLAICEMAHO* KLHPEBKNIFB; // 0x10
	::System::UInt32 NACGJJKHEJE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLAICEMAHO_KFBBHDIMGAO__CTOR_OFFSET))(this);
	}

	::System::Void JFGFJAPCCFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLAICEMAHO_KFBBHDIMGAO_JFGFJAPCCFN_OFFSET))(this);
	}
};
