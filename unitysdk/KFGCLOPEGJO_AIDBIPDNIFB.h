#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MNAGAGOHIGH.h"

class KFGCLOPEGJO_HCFHCIBGKBO;
class MonoUITableScrollV2;
namespace System::Collections { class IEnumerable; }

#define KFGCLOPEGJO_AIDBIPDNIFB_MHNIAEPOJPJ_OFFSET UNITYSDK_OFFSET(0x1A2C5320)
#define KFGCLOPEGJO_AIDBIPDNIFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C5310)

inline static constexpr unsigned int KFGCLOPEGJO_AIDBIPDNIFB_TypeDefinitionIndex = 78931;

class KFGCLOPEGJO_AIDBIPDNIFB : public ::System::Object
{
public:
	::System::Collections::IEnumerable* PADJNMGMGHO; // 0x10
	::MonoUITableScrollV2* GBELIHABEDH; // 0x18
	::KFGCLOPEGJO_HCFHCIBGKBO* FGBNBFHOKAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_AIDBIPDNIFB__CTOR_OFFSET))(this);
	}

	::System::Void MHNIAEPOJPJ(::MNAGAGOHIGH& KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_AIDBIPDNIFB_MHNIAEPOJPJ_OFFSET))(this, KOIBHLHLMFC);
	}
};
