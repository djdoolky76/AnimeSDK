#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJGBALGMMNE.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CGPOHPLMPOO_JAPFFPNAJHB_OFFSET UNITYSDK_OFFSET(0x1FDF48F0)
#define CGPOHPLMPOO_KMGFINCKGOK_OFFSET UNITYSDK_OFFSET(0x1FDF4DE0)
#define CGPOHPLMPOO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDF4DD0)

inline static constexpr unsigned int CGPOHPLMPOO_TypeDefinitionIndex = 96449;

class CGPOHPLMPOO : public ::NJGBALGMMNE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPOHPLMPOO__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* JAPFFPNAJHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPOHPLMPOO_JAPFFPNAJHB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* KMGFINCKGOK()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPOHPLMPOO_KMGFINCKGOK_OFFSET))(this);
	}
};
