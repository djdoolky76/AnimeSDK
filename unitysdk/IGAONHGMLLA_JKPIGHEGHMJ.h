#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IGAONHGMLLA_GHADLBFMNFK.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IGAONHGMLLA_JKPIGHEGHMJ_JHMPFFPFBKH_OFFSET UNITYSDK_OFFSET(0xEBCC6E0)
#define IGAONHGMLLA_JKPIGHEGHMJ_NCAADHOCGEH_OFFSET UNITYSDK_OFFSET(0xEBCC710)
#define IGAONHGMLLA_JKPIGHEGHMJ__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCC6D0)

inline static constexpr unsigned int IGAONHGMLLA_JKPIGHEGHMJ_TypeDefinitionIndex = 49106;

class IGAONHGMLLA_JKPIGHEGHMJ : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* KHBGKFIOIPK; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* OAMAMPDIGJB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGAONHGMLLA_JKPIGHEGHMJ__CTOR_OFFSET))(this);
	}

	::System::Boolean JHMPFFPFBKH(::IGAONHGMLLA_GHADLBFMNFK BKPODJDNEHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IGAONHGMLLA_GHADLBFMNFK))((::PBYTE)hIl2Cpp + IGAONHGMLLA_JKPIGHEGHMJ_JHMPFFPFBKH_OFFSET))(this, BKPODJDNEHN);
	}

	::System::Boolean NCAADHOCGEH(::IGAONHGMLLA_GHADLBFMNFK BKPODJDNEHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IGAONHGMLLA_GHADLBFMNFK))((::PBYTE)hIl2Cpp + IGAONHGMLLA_JKPIGHEGHMJ_NCAADHOCGEH_OFFSET))(this, BKPODJDNEHN);
	}
};
