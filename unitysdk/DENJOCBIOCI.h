#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DENJOCBIOCI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15A3A640)
#define DENJOCBIOCI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15A3A490)
#define DENJOCBIOCI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15A3AB40)
#define DENJOCBIOCI__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3A9E0)

inline static constexpr unsigned int DENJOCBIOCI_TypeDefinitionIndex = 48580;

class DENJOCBIOCI : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OOPLCPKCDJA; // 0x18
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* EILABBKCLPD; // 0x20
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* FDJLAOFOKEB; // 0x28
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OBHADCGHPBE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENJOCBIOCI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENJOCBIOCI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DENJOCBIOCI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENJOCBIOCI_GDEOPIBNOIN_OFFSET))(this);
	}
};
