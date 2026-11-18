#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AODCNDCIDKF;
namespace System { class Action; }

#define AODCNDCIDKF_OGALACCNCKD_AIPAECNELPO_OFFSET UNITYSDK_OFFSET(0x1700CA80)
#define AODCNDCIDKF_OGALACCNCKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1700CA70)

inline static constexpr unsigned int AODCNDCIDKF_OGALACCNCKD_TypeDefinitionIndex = 79589;

class AODCNDCIDKF_OGALACCNCKD : public ::System::Object
{
public:
	::System::Action* CAAFEGLOALC; // 0x10
	::AODCNDCIDKF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_OGALACCNCKD__CTOR_OFFSET))(this);
	}

	::System::Void AIPAECNELPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AODCNDCIDKF_OGALACCNCKD_AIPAECNELPO_OFFSET))(this);
	}
};
