#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DONGCBIGJJL;
class IFOHGNLIAKH;
namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define DONGCBIGJJL_MMGMPNEKNKJ_FHFKLMOMGHA_OFFSET UNITYSDK_OFFSET(0x1697E080)
#define DONGCBIGJJL_MMGMPNEKNKJ_JHEFFAJLHJP_OFFSET UNITYSDK_OFFSET(0x1697D7C0)
#define DONGCBIGJJL_MMGMPNEKNKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1697D7B0)

inline static constexpr unsigned int DONGCBIGJJL_MMGMPNEKNKJ_TypeDefinitionIndex = 70476;

class DONGCBIGJJL_MMGMPNEKNKJ : public ::System::Object
{
public:
	::IFOHGNLIAKH* KBIPKADLPFK; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::DONGCBIGJJL* KLHPEBKNIFB; // 0x20
	::UnityEngine::RectTransform* JHOEOCKDODG; // 0x28
	::System::Int32 CJAENJGONJH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_MMGMPNEKNKJ__CTOR_OFFSET))(this);
	}

	::System::Void JHEFFAJLHJP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_MMGMPNEKNKJ_JHEFFAJLHJP_OFFSET))(this);
	}

	::System::Void FHFKLMOMGHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_MMGMPNEKNKJ_FHFKLMOMGHA_OFFSET))(this);
	}
};
