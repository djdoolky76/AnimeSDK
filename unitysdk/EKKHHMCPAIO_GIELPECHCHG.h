#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BJCDJILGGLA.h"
#include "unitysdk/BMBMBLDFBID.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EKKHHMCPAIO_GIELPECHCHG_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1235D5A0)
#define EKKHHMCPAIO_GIELPECHCHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1235D6F0)
#define EKKHHMCPAIO_GIELPECHCHG_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x1235D5F0)
#define EKKHHMCPAIO_GIELPECHCHG_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x1235D800)
#define EKKHHMCPAIO_GIELPECHCHG_LNLDPCPNKNM_OFFSET UNITYSDK_OFFSET(0x1235D870)
#define EKKHHMCPAIO_GIELPECHCHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1235D740)

inline static constexpr unsigned int EKKHHMCPAIO_GIELPECHCHG_TypeDefinitionIndex = 45042;

class EKKHHMCPAIO_GIELPECHCHG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::BJCDJILGGLA, ::System::Object*>* FCHCMMDLOEH; // 0x10
	::BMBMBLDFBID GOBJDPGDDMP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKHHMCPAIO_GIELPECHCHG__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKHHMCPAIO_GIELPECHCHG_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKHHMCPAIO_GIELPECHCHG_DISPOSE_OFFSET))(this);
	}

	static ::System::Void JJEJHGOJOII(::EKKHHMCPAIO_GIELPECHCHG* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::EKKHHMCPAIO_GIELPECHCHG*))((::PBYTE)hIl2Cpp + EKKHHMCPAIO_GIELPECHCHG_JJEJHGOJOII_OFFSET))(ECMMKCJLBMD);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKHHMCPAIO_GIELPECHCHG_EMCPPBMEKKK_OFFSET))(this);
	}

	static ::EKKHHMCPAIO_GIELPECHCHG* LNLDPCPNKNM()
	{
		return ((::EKKHHMCPAIO_GIELPECHCHG*(*)())((::PBYTE)hIl2Cpp + EKKHHMCPAIO_GIELPECHCHG_LNLDPCPNKNM_OFFSET))();
	}
};
