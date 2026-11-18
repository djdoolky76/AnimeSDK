#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALHNDPMOFNF;
namespace System { class Action; }

#define ALHNDPMOFNF_NILOCKGAAOK_IFBAJCCIHGH_OFFSET UNITYSDK_OFFSET(0x17CDFB20)
#define ALHNDPMOFNF_NILOCKGAAOK_JIBNDBODIME_OFFSET UNITYSDK_OFFSET(0x17CDFE30)
#define ALHNDPMOFNF_NILOCKGAAOK__CTOR_OFFSET UNITYSDK_OFFSET(0x17CDFB10)

inline static constexpr unsigned int ALHNDPMOFNF_NILOCKGAAOK_TypeDefinitionIndex = 86719;

class ALHNDPMOFNF_NILOCKGAAOK : public ::System::Object
{
public:
	::ALHNDPMOFNF* KLHPEBKNIFB; // 0x10
	::System::Action* FFMGICPLKFB; // 0x18
	::System::UInt32 ICJENDBNEFD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_NILOCKGAAOK__CTOR_OFFSET))(this);
	}

	::System::Void IFBAJCCIHGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_NILOCKGAAOK_IFBAJCCIHGH_OFFSET))(this);
	}

	::System::Void JIBNDBODIME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_NILOCKGAAOK_JIBNDBODIME_OFFSET))(this);
	}
};
