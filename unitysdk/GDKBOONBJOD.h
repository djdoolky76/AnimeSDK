#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HFALNBMNFCA.h"

class BPDDEPLBABF;
class DJKHNKJFMJO;
class DKJPGJACALC;
class IFBGJJPIDLA;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GDKBOONBJOD_BAPMLOGMHHD_OFFSET UNITYSDK_OFFSET(0x189F53F0)
#define GDKBOONBJOD_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x189F53A0)
#define GDKBOONBJOD_BOPBHEDPLIP_OFFSET UNITYSDK_OFFSET(0x189F4F30)
#define GDKBOONBJOD_PMIACEINMOA_OFFSET UNITYSDK_OFFSET(0x189F4F20)
#define GDKBOONBJOD_POIIDMGCHBP_OFFSET UNITYSDK_OFFSET(0x189F5C30)
#define GDKBOONBJOD__CTOR_OFFSET UNITYSDK_OFFSET(0x189F4EE0)

inline static constexpr unsigned int GDKBOONBJOD_TypeDefinitionIndex = 55378;

class GDKBOONBJOD : public ::System::Object
{
public:
	::IFBGJJPIDLA* HFHCEFHDMBJ; // 0x10
	::DJKHNKJFMJO* PCEPNFJOKBI; // 0x18
	::System::String* DBKHIPLOKMJ; // 0x20
	::BPDDEPLBABF* JCAENPOOFIE; // 0x28
	::System::Boolean _ANEFEHNAIPM_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD__CTOR_OFFSET))(this);
	}

	::System::Boolean PMIACEINMOA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD_PMIACEINMOA_OFFSET))(this);
	}

	::System::Void BOPBHEDPLIP(::DKJPGJACALC* HNOPAJLDCFB, ::System::Action* CAAFEGLOALC, ::System::Action_1<::HFALNBMNFCA>* HGBOMLCCBEE)
	{
		return ((::System::Void(*)(::PVOID, ::DKJPGJACALC*, ::System::Action*, ::System::Action_1<::HFALNBMNFCA>*))((::PBYTE)hIl2Cpp + GDKBOONBJOD_BOPBHEDPLIP_OFFSET))(this, HNOPAJLDCFB, CAAFEGLOALC, HGBOMLCCBEE);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDKBOONBJOD_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void BAPMLOGMHHD(::DKJPGJACALC* HNOPAJLDCFB, ::System::Action* CAAFEGLOALC, ::System::Action_1<::HFALNBMNFCA>* HGBOMLCCBEE)
	{
		return ((::System::Void(*)(::PVOID, ::DKJPGJACALC*, ::System::Action*, ::System::Action_1<::HFALNBMNFCA>*))((::PBYTE)hIl2Cpp + GDKBOONBJOD_BAPMLOGMHHD_OFFSET))(this, HNOPAJLDCFB, CAAFEGLOALC, HGBOMLCCBEE);
	}

	::System::Void POIIDMGCHBP(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDKBOONBJOD_POIIDMGCHBP_OFFSET))(this, EGEGIMGMJHN);
	}
};
