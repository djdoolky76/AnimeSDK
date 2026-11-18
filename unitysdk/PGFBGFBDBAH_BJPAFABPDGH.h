#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PGFBGFBDBAH_NBICHNOEJGN.h"
#include "unitysdk/System/Object.h"

class PGFBGFBDBAH_GMCIAMDGJOA;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define PGFBGFBDBAH_BJPAFABPDGH_KCGEGKKKILA_OFFSET UNITYSDK_OFFSET(0xFDB7760)
#define PGFBGFBDBAH_BJPAFABPDGH__CTOR_OFFSET UNITYSDK_OFFSET(0xFDB7750)

inline static constexpr unsigned int PGFBGFBDBAH_BJPAFABPDGH_TypeDefinitionIndex = 46103;

class PGFBGFBDBAH_BJPAFABPDGH : public ::System::Object
{
public:
	::PGFBGFBDBAH_NBICHNOEJGN KPNIHKEKDOC; // 0x10
	::PGFBGFBDBAH_GMCIAMDGJOA* FGBNBFHOKAA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_BJPAFABPDGH__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::System::Object*>* KCGEGKKKILA()
	{
		return ((::System::Collections::Generic::IList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_BJPAFABPDGH_KCGEGKKKILA_OFFSET))(this);
	}
};
