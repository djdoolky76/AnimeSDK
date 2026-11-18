#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DENMJPMGFIG_EOGBOICNAND.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DENMJPMGFIG_CMMAAABOHDK_OFFSET UNITYSDK_OFFSET(0x12407080)
#define DENMJPMGFIG_ENABOMMIKBI_OFFSET UNITYSDK_OFFSET(0x12407DA0)
#define DENMJPMGFIG_FHFOLCDCPDG_OFFSET UNITYSDK_OFFSET(0x12407350)
#define DENMJPMGFIG_JGMNIFLALGB_OFFSET UNITYSDK_OFFSET(0x12407580)
#define DENMJPMGFIG_KEOONPKMEOI_OFFSET UNITYSDK_OFFSET(0x12407DF0)
#define DENMJPMGFIG_NFACLIOKBHK_OFFSET UNITYSDK_OFFSET(0x124074D0)
#define DENMJPMGFIG_PPGDNIDNEEO_OFFSET UNITYSDK_OFFSET(0x12406F70)

inline static constexpr unsigned int DENMJPMGFIG_TypeDefinitionIndex = 41767;

class DENMJPMGFIG : public ::System::Object
{
public:
	static ::System::Boolean PPGDNIDNEEO(::UnityEngine::Rect KDEHMPGOCEP, ::UnityEngine::Rect PADJNMGMGHO, ::DENMJPMGFIG_EOGBOICNAND DAAEHEHLLLD)
	{
		return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::DENMJPMGFIG_EOGBOICNAND))((::PBYTE)hIl2Cpp + DENMJPMGFIG_PPGDNIDNEEO_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO, DAAEHEHLLLD);
	}

	static ::System::Single CMMAAABOHDK(::UnityEngine::Rect KDEHMPGOCEP, ::UnityEngine::Rect PADJNMGMGHO, ::System::Boolean MKMOOBNFPPE, ::System::Single FLAKNOJIKAH, ::System::Single HMGEIJGBLJF, ::System::Boolean IFGHGOHOBNB)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DENMJPMGFIG_CMMAAABOHDK_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO, MKMOOBNFPPE, FLAKNOJIKAH, HMGEIJGBLJF, IFGHGOHOBNB);
	}

	static ::System::Int32 JGMNIFLALGB(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Rect>* EBNGDIMHCAP, ::System::Int32 FJHBHALGCKO, ::DENMJPMGFIG_EOGBOICNAND DAAEHEHLLLD, ::System::Single EEPPGMCPECN, ::System::Single FLAKNOJIKAH, ::System::Single HMGEIJGBLJF, ::System::Boolean MKMOOBNFPPE, ::System::Boolean GJIEADBHBIJ, ::System::Boolean LGAIOBLNNBG)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Rect>*, ::System::Int32, ::DENMJPMGFIG_EOGBOICNAND, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DENMJPMGFIG_JGMNIFLALGB_OFFSET))(EBNGDIMHCAP, FJHBHALGCKO, DAAEHEHLLLD, EEPPGMCPECN, FLAKNOJIKAH, HMGEIJGBLJF, MKMOOBNFPPE, GJIEADBHBIJ, LGAIOBLNNBG);
	}

	static ::System::Single NFACLIOKBHK(::UnityEngine::Rect EJCBEJMGFAJ, ::UnityEngine::Rect EBFCACIEKBC, ::System::Boolean JOFGGLNJJFM)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + DENMJPMGFIG_NFACLIOKBHK_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, JOFGGLNJJFM);
	}

	static ::System::Single FHFOLCDCPDG(::UnityEngine::Rect KDEHMPGOCEP, ::UnityEngine::Rect PADJNMGMGHO, ::System::Boolean JOFGGLNJJFM)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + DENMJPMGFIG_FHFOLCDCPDG_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO, JOFGGLNJJFM);
	}

	static ::DENMJPMGFIG_EOGBOICNAND ENABOMMIKBI(::DENMJPMGFIG_EOGBOICNAND DAAEHEHLLLD)
	{
		return ((::DENMJPMGFIG_EOGBOICNAND(*)(::DENMJPMGFIG_EOGBOICNAND))((::PBYTE)hIl2Cpp + DENMJPMGFIG_ENABOMMIKBI_OFFSET))(DAAEHEHLLLD);
	}

	static ::System::Single KEOONPKMEOI(::UnityEngine::Rect KDEHMPGOCEP, ::UnityEngine::Rect PADJNMGMGHO, ::System::Boolean GJIEADBHBIJ, ::System::Single FLAKNOJIKAH, ::System::Single HMGEIJGBLJF, ::System::Boolean IFGHGOHOBNB)
	{
		return ((::System::Single(*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DENMJPMGFIG_KEOONPKMEOI_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO, GJIEADBHBIJ, FLAKNOJIKAH, HMGEIJGBLJF, IFGHGOHOBNB);
	}
};
