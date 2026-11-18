#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define LAJCBEJLKIH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1793C070)
#define LAJCBEJLKIH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1793BE60)
#define LAJCBEJLKIH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1793CB60)
#define LAJCBEJLKIH_JOFGIJDODCD_OFFSET UNITYSDK_OFFSET(0x1793C970)
#define LAJCBEJLKIH_NILNMCIIBLO_OFFSET UNITYSDK_OFFSET(0x1793C8D0)
#define LAJCBEJLKIH_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x1793C0E0)
#define LAJCBEJLKIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1793C730)

inline static constexpr unsigned int LAJCBEJLKIH_TypeDefinitionIndex = 79462;

class LAJCBEJLKIH : public ::MHMFINLCNFN
{
public:
	// static const ::System::String* FPIEBDKEJAH; // 0x0
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* ONDOABKFMKG; // 0x28
	::AAMKEDEDHPD_1<::System::Boolean>* GAEMLIAEDOD; // 0x30
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* MAMPHOBNANN; // 0x38
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* JFAFNCAJEEF; // 0x40
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* NDJKJFFLABC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCBEJLKIH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCBEJLKIH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LAJCBEJLKIH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::UnityEngine::Vector3 NILNMCIIBLO(::UnityEngine::Vector3 CFJFMMGPGKE)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LAJCBEJLKIH_NILNMCIIBLO_OFFSET))(CFJFMMGPGKE);
	}

	::System::Void JOFGIJDODCD(::LGCNEDCMPKM& BKBGPKNGNMF, ::System::Boolean LMBFGLMIEND, ::UnityEngine::Vector3 PEFJHHBKFDB, ::UnityEngine::Vector3 MEKJOACFPFL, ::UnityEngine::Vector3 LHKCIOOAGGF, ::UnityEngine::Vector3 NCMPNBNOBOA)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LAJCBEJLKIH_JOFGIJDODCD_OFFSET))(this, BKBGPKNGNMF, LMBFGLMIEND, PEFJHHBKFDB, MEKJOACFPFL, LHKCIOOAGGF, NCMPNBNOBOA);
	}

	::System::Void PKAFJHDJEDO(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LAJCBEJLKIH_PKAFJHDJEDO_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAJCBEJLKIH_GDEOPIBNOIN_OFFSET))(this);
	}
};
