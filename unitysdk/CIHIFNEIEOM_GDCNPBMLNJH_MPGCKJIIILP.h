#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/System/Nullable_1.h"

class KOGPMKOGCLC;
template <typename T> class LJHFMILANJA_1;

#define CIHIFNEIEOM_GDCNPBMLNJH_MPGCKJIIILP_CCDPHCFNFAE_OFFSET UNITYSDK_OFFSET(0x132613D0)
#define CIHIFNEIEOM_GDCNPBMLNJH_MPGCKJIIILP_OIMOGJNBCLM_OFFSET UNITYSDK_OFFSET(0x132613E0)
#define CIHIFNEIEOM_GDCNPBMLNJH_MPGCKJIIILP_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x13261350)
#define CIHIFNEIEOM_GDCNPBMLNJH_MPGCKJIIILP__CTOR_OFFSET UNITYSDK_OFFSET(0x13261340)

inline static constexpr unsigned int CIHIFNEIEOM_GDCNPBMLNJH_MPGCKJIIILP_TypeDefinitionIndex = 81928;

class CIHIFNEIEOM_GDCNPBMLNJH_MPGCKJIIILP : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Nullable_1<::System::Boolean>>* _LKNNCGHBBAI_k__BackingField; // 0x88

	::System::Void _ctor(::KOGPMKOGCLC* GAOLLJICJEA)
	{
		return ((::System::Void(*)(::PVOID, ::KOGPMKOGCLC*))((::PBYTE)hIl2Cpp + CIHIFNEIEOM_GDCNPBMLNJH_MPGCKJIIILP__CTOR_OFFSET))(this, GAOLLJICJEA);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHIFNEIEOM_GDCNPBMLNJH_MPGCKJIIILP_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void CCDPHCFNFAE(::LJHFMILANJA_1<::System::Nullable_1<::System::Boolean>>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Nullable_1<::System::Boolean>>*))((::PBYTE)hIl2Cpp + CIHIFNEIEOM_GDCNPBMLNJH_MPGCKJIIILP_CCDPHCFNFAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::LJHFMILANJA_1<::System::Nullable_1<::System::Boolean>>* OIMOGJNBCLM()
	{
		return ((::LJHFMILANJA_1<::System::Nullable_1<::System::Boolean>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHIFNEIEOM_GDCNPBMLNJH_MPGCKJIIILP_OIMOGJNBCLM_OFFSET))(this);
	}
};
