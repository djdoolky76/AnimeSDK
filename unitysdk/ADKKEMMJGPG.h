#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOAHOOCNDHM.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define ADKKEMMJGPG_FMKEPLKEACL_OFFSET UNITYSDK_OFFSET(0x11B8F100)

inline static constexpr unsigned int ADKKEMMJGPG_TypeDefinitionIndex = 59739;

class ADKKEMMJGPG : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::EOAHOOCNDHM>* FMKEPLKEACL(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::List_1<::EOAHOOCNDHM>*(*)(::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ADKKEMMJGPG_FMKEPLKEACL_OFFSET))(BKBGPKNGNMF);
	}
};
