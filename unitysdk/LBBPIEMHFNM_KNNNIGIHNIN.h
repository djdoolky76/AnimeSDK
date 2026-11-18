#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class LBBPIEMHFNM;
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }
template <typename T> class BFMLEHMAGAK_1;

#define LBBPIEMHFNM_KNNNIGIHNIN_NOLBPIGMPHD_OFFSET UNITYSDK_OFFSET(0xD415280)
#define LBBPIEMHFNM_KNNNIGIHNIN_OLCJCFMPKJO_OFFSET UNITYSDK_OFFSET(0xD415230)
#define LBBPIEMHFNM_KNNNIGIHNIN__CTOR_OFFSET UNITYSDK_OFFSET(0xD415220)

inline static constexpr unsigned int LBBPIEMHFNM_KNNNIGIHNIN_TypeDefinitionIndex = 83800;

class LBBPIEMHFNM_KNNNIGIHNIN : public ::System::Object
{
public:
	::System::String* MCOHLHMKLIP; // 0x10
	::BFMLEHMAGAK_1<::System::Boolean>* BGJOPBCCMOC; // 0x18
	::LBBPIEMHFNM* KLHPEBKNIFB; // 0x20
	::UnityEngine::MonoBehaviour* EGEGIMGMJHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBPIEMHFNM_KNNNIGIHNIN__CTOR_OFFSET))(this);
	}

	::System::Void OLCJCFMPKJO(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + LBBPIEMHFNM_KNNNIGIHNIN_OLCJCFMPKJO_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Boolean NOLBPIGMPHD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBPIEMHFNM_KNNNIGIHNIN_NOLBPIGMPHD_OFFSET))(this);
	}
};
