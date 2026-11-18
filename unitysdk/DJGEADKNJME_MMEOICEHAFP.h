#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class AimController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJGEADKNJME_MMEOICEHAFP_DPHLIAJCPPO_OFFSET UNITYSDK_OFFSET(0x12BB3CA0)
#define DJGEADKNJME_MMEOICEHAFP_OEOLMDHBPLL_OFFSET UNITYSDK_OFFSET(0x12BB3A00)
#define DJGEADKNJME_MMEOICEHAFP__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB39F0)

inline static constexpr unsigned int DJGEADKNJME_MMEOICEHAFP_TypeDefinitionIndex = 48487;

class DJGEADKNJME_MMEOICEHAFP : public ::System::Object
{
public:
	::System::String* HLEOFFAOGBA; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* HMKPPANMAEL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJGEADKNJME_MMEOICEHAFP__CTOR_OFFSET))(this);
	}

	::System::Boolean OEOLMDHBPLL(::RootMotion::FinalIK::AimController* CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::AimController*))((::PBYTE)hIl2Cpp + DJGEADKNJME_MMEOICEHAFP_OEOLMDHBPLL_OFFSET))(this, CBLGCIFLMKL);
	}

	::System::Boolean DPHLIAJCPPO(::RootMotion::FinalIK::AimController* CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::AimController*))((::PBYTE)hIl2Cpp + DJGEADKNJME_MMEOICEHAFP_DPHLIAJCPPO_OFFSET))(this, CBLGCIFLMKL);
	}
};
