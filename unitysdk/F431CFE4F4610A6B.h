#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
namespace System { class String; }

#define F431CFE4F4610A6B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F431CFE4F4610A6B_TypeDefinitionIndex = 1948;

class F431CFE4F4610A6B : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* FB3F25CE1AB09730; // 0x38
	::System::String* F42F62B28BB56BF9; // 0x40
	::UnityEngine::Vector3 BE0F8A921F850B28; // 0x48
	::System::Single ECB0D37DE9686B59; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F431CFE4F4610A6B__CTOR_OFFSET))(this);
	}
};
