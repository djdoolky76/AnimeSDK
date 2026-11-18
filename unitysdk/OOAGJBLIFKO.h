#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDFPDPBIPCH.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OOAGJBLIFKO_JAPFFPNAJHB_OFFSET UNITYSDK_OFFSET(0x1FFFFD90)
#define OOAGJBLIFKO_KMGFINCKGOK_OFFSET UNITYSDK_OFFSET(0x20000140)
#define OOAGJBLIFKO__CTOR_OFFSET UNITYSDK_OFFSET(0x20000130)

inline static constexpr unsigned int OOAGJBLIFKO_TypeDefinitionIndex = 96574;

class OOAGJBLIFKO : public ::BDFPDPBIPCH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAGJBLIFKO__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* JAPFFPNAJHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAGJBLIFKO_JAPFFPNAJHB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* KMGFINCKGOK()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAGJBLIFKO_KMGFINCKGOK_OFFSET))(this);
	}
};
