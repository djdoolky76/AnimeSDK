#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOHHEMAADPG.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define JJKEGEMHDGD_OPMIKOHOPFL_OFFSET UNITYSDK_OFFSET(0x1A479BA0)
#define JJKEGEMHDGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A479B90)

inline static constexpr unsigned int JJKEGEMHDGD_TypeDefinitionIndex = 75228;

class JJKEGEMHDGD : public ::System::Object
{
public:
	::MOHHEMAADPG LEHKLMOHDOD; // 0x10
	::System::Collections::Generic::List_1<::MOHHEMAADPG>* ENAMKANBKBM; // 0x30
	::System::Int32 JKKJFNNLJPG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJKEGEMHDGD__CTOR_OFFSET))(this);
	}

	::System::Void OPMIKOHOPFL(::MOHHEMAADPG JFGMHJOCHGB)
	{
		return ((::System::Void(*)(::PVOID, ::MOHHEMAADPG))((::PBYTE)hIl2Cpp + JJKEGEMHDGD_OPMIKOHOPFL_OFFSET))(this, JFGMHJOCHGB);
	}
};
