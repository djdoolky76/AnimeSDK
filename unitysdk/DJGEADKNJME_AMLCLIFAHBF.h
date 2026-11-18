#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class AimController; }
namespace System { class String; }

#define DJGEADKNJME_AMLCLIFAHBF_EJHFOPLFGMA_OFFSET UNITYSDK_OFFSET(0x12BB39A0)
#define DJGEADKNJME_AMLCLIFAHBF__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB3990)

inline static constexpr unsigned int DJGEADKNJME_AMLCLIFAHBF_TypeDefinitionIndex = 48486;

class DJGEADKNJME_AMLCLIFAHBF : public ::System::Object
{
public:
	::System::String* AELLPLBJELA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJGEADKNJME_AMLCLIFAHBF__CTOR_OFFSET))(this);
	}

	::System::Boolean EJHFOPLFGMA(::RootMotion::FinalIK::AimController* JOLDOMEIKEF)
	{
		return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::AimController*))((::PBYTE)hIl2Cpp + DJGEADKNJME_AMLCLIFAHBF_EJHFOPLFGMA_OFFSET))(this, JOLDOMEIKEF);
	}
};
