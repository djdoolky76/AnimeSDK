#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INOEOEPKMJL.h"
#include "unitysdk/KFGCLOPEGJO_FOMGNNADOLF.h"
#include "unitysdk/System/Object.h"

class HHMKCBFMIGN;
class LPCJLIDIOHL;
class MonoUITableScrollV2;
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }

#define KFGCLOPEGJO_HCFHCIBGKBO_DDBLJKKBLMJ_OFFSET UNITYSDK_OFFSET(0x1994D2C0)
#define KFGCLOPEGJO_HCFHCIBGKBO_EMKPKJDOPIM_OFFSET UNITYSDK_OFFSET(0x1994CCB0)
#define KFGCLOPEGJO_HCFHCIBGKBO_HBGAGFFCOGO_OFFSET UNITYSDK_OFFSET(0x1994C9C0)
#define KFGCLOPEGJO_HCFHCIBGKBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1994C9B0)

inline static constexpr unsigned int KFGCLOPEGJO_HCFHCIBGKBO_TypeDefinitionIndex = 78924;

class KFGCLOPEGJO_HCFHCIBGKBO : public ::System::Object
{
public:
	::LPCJLIDIOHL* JFDEHHMKLFP; // 0x10
	::System::Func_1<::System::Object*>* JFIGIOCNCOO; // 0x18
	::HHMKCBFMIGN* OFEEHGMJOFK; // 0x20
	::INOEOEPKMJL OFKIPAGDPNN; // 0x28
	::MonoUITableScrollV2* FKHHCCDNPHF; // 0x38
	::KFGCLOPEGJO_FOMGNNADOLF IKGBPGINAEN; // 0x40
	::System::Boolean DLKDGEGMBAB; // 0x44
	::System::Boolean PGBEJPPCCEH; // 0x45

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HCFHCIBGKBO__CTOR_OFFSET))(this);
	}

	::System::Void HBGAGFFCOGO(::System::Collections::IEnumerable* KGGJCGPMAIH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HCFHCIBGKBO_HBGAGFFCOGO_OFFSET))(this, KGGJCGPMAIH);
	}

	::System::Void EMKPKJDOPIM(::MonoUITableScrollV2* GBELIHABEDH, ::System::Collections::IEnumerable* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HCFHCIBGKBO_EMKPKJDOPIM_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}

	::System::Void DDBLJKKBLMJ(::MonoUITableScrollV2* GBELIHABEDH, ::System::Collections::IEnumerable* KDEHMPGOCEP, ::System::Collections::IEnumerable* PADJNMGMGHO)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Collections::IEnumerable*, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_HCFHCIBGKBO_DDBLJKKBLMJ_OFFSET))(this, GBELIHABEDH, KDEHMPGOCEP, PADJNMGMGHO);
	}
};
