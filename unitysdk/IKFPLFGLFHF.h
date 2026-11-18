#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMCBEAJMEFF.h"
#include "unitysdk/IKFPLFGLFHF_ILONILHBNPG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IKFPLFGLFHF_LOKCIAEOBOL.h"

class AHLMMFMPHEO;
class EDCJOIGKICD;
namespace Nap::NapECS { template <typename T1, typename T2> class DictionaryList_2; }

#define IKFPLFGLFHF_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x13C8E000)
#define IKFPLFGLFHF_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x13C8E380)
#define IKFPLFGLFHF_LOJJMJOJLFO_OFFSET UNITYSDK_OFFSET(0x13C8E250)
#define IKFPLFGLFHF_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x13C8DA20)
#define IKFPLFGLFHF__CTOR_OFFSET UNITYSDK_OFFSET(0x13C8D9D0)

inline static constexpr unsigned int IKFPLFGLFHF_TypeDefinitionIndex = 53404;

class IKFPLFGLFHF : public ::System::Object
{
public:
	::Nap::NapECS::DictionaryList_2<::HMCBEAJMEFF, ::EDCJOIGKICD*>* GOHNHBKJPLH; // 0x10
	::IKFPLFGLFHF_ILONILHBNPG DAAAEJDBNFI; // 0x18
	::System::Boolean FHLEGNBBFHF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFPLFGLFHF__CTOR_OFFSET))(this);
	}

	::System::Void PKOGNPKCHHE(::IKFPLFGLFHF_LOKCIAEOBOL& HGDMBHDKFPK)
	{
		return ((::System::Void(*)(::PVOID, ::IKFPLFGLFHF_LOKCIAEOBOL&))((::PBYTE)hIl2Cpp + IKFPLFGLFHF_PKOGNPKCHHE_OFFSET))(this, HGDMBHDKFPK);
	}

	::System::Void FLHNGDLANDC(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKFPLFGLFHF_FLHNGDLANDC_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void LOJJMJOJLFO(::EDCJOIGKICD* CDBMHJGCCEB)
	{
		return ((::System::Void(*)(::PVOID, ::EDCJOIGKICD*))((::PBYTE)hIl2Cpp + IKFPLFGLFHF_LOJJMJOJLFO_OFFSET))(this, CDBMHJGCCEB);
	}

	::System::Void JLIMOLHLFAK(::AHLMMFMPHEO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::AHLMMFMPHEO*))((::PBYTE)hIl2Cpp + IKFPLFGLFHF_JLIMOLHLFAK_OFFSET))(this, LJBPECKCCEA);
	}
};
