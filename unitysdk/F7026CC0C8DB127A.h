#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EC05B6FF03DB975D.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F7026CC0C8DB127A_E20890E1EF76F409_OFFSET UNITYSDK_OFFSET(0x3F6E250)
#define F7026CC0C8DB127A_E2108D7CE84D4997_OFFSET UNITYSDK_OFFSET(0x3F6E3D0)
#define F7026CC0C8DB127A_F06B3D0025298C49_OFFSET UNITYSDK_OFFSET(0x3F6E440)

inline static constexpr unsigned int F7026CC0C8DB127A_TypeDefinitionIndex = 14286;

struct alignas(8) F7026CC0C8DB127A
{
	::System::Collections::Generic::Dictionary_2<::EC05B6FF03DB975D, ::System::Type*>* A8A61CB1A31A75E4; // 0x10

	::System::Void E2108D7CE84D4997()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7026CC0C8DB127A_E2108D7CE84D4997_OFFSET))(this);
	}

	::System::Void E20890E1EF76F409(::System::String* F79B4D487F303AB2, ::System::Type* A288CB28FC2A6DA3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + F7026CC0C8DB127A_E20890E1EF76F409_OFFSET))(this, F79B4D487F303AB2, A288CB28FC2A6DA3);
	}

	::System::Type* F06B3D0025298C49(::System::String* F79B4D487F303AB2)
	{
		return ((::System::Type*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F7026CC0C8DB127A_F06B3D0025298C49_OFFSET))(this, F79B4D487F303AB2);
	}
};
