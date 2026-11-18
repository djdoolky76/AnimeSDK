#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJJMHOGKDNF.h"
#include "unitysdk/HDNPAPNHIIG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/ValueTuple_2.h"

class JPEMIEFFNEN;
class ONDCMMIBPHD;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPEMIEFFNEN_PCBICEMFEAN_LNKJBGKKMCH_OFFSET UNITYSDK_OFFSET(0x18A293D0)
#define JPEMIEFFNEN_PCBICEMFEAN_MPCMJDPHNCF_OFFSET UNITYSDK_OFFSET(0x18A29490)
#define JPEMIEFFNEN_PCBICEMFEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x18A293C0)

inline static constexpr unsigned int JPEMIEFFNEN_PCBICEMFEAN_TypeDefinitionIndex = 68745;

class JPEMIEFFNEN_PCBICEMFEAN : public ::System::Object
{
public:
	::JPEMIEFFNEN* KLHPEBKNIFB; // 0x10
	::HDNPAPNHIIG MCOHLHMKLIP; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::AJJMHOGKDNF>* AALNMBBGNPK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEMIEFFNEN_PCBICEMFEAN__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::HDNPAPNHIIG, ::System::Collections::Generic::List_1<::AJJMHOGKDNF>*> LNKJBGKKMCH(::System::Collections::Generic::KeyValuePair_2<::HDNPAPNHIIG, ::ONDCMMIBPHD*> DLBHJOGKNOC)
	{
		return ((::System::ValueTuple_2<::HDNPAPNHIIG, ::System::Collections::Generic::List_1<::AJJMHOGKDNF>*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::HDNPAPNHIIG, ::ONDCMMIBPHD*>))((::PBYTE)hIl2Cpp + JPEMIEFFNEN_PCBICEMFEAN_LNKJBGKKMCH_OFFSET))(this, DLBHJOGKNOC);
	}

	::System::Void MPCMJDPHNCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEMIEFFNEN_PCBICEMFEAN_MPCMJDPHNCF_OFFSET))(this);
	}
};
