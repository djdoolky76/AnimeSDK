#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define NONALKMEHFH_JFPOCEPCHGP_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x137758E0)
#define NONALKMEHFH_JFPOCEPCHGP_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x137758A0)
#define NONALKMEHFH_JFPOCEPCHGP_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x137758B0)
#define NONALKMEHFH_JFPOCEPCHGP__CTOR_OFFSET UNITYSDK_OFFSET(0x137756E0)

inline static constexpr unsigned int NONALKMEHFH_JFPOCEPCHGP_TypeDefinitionIndex = 63133;

class NONALKMEHFH_JFPOCEPCHGP : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONALKMEHFH_JFPOCEPCHGP__CTOR_OFFSET))(this);
	}

	::System::Void HOFIFAEOLBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONALKMEHFH_JFPOCEPCHGP_HOFIFAEOLBM_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Action* NNCFPPKALND)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NONALKMEHFH_JFPOCEPCHGP_LIDNPLMPHAL_OFFSET))(this, NNCFPPKALND);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONALKMEHFH_JFPOCEPCHGP_AAHMACBDCPN_OFFSET))(this);
	}
};
