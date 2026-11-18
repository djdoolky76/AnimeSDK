#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define MLMKHCDDAAJ__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD0CCE0)
#define MLMKHCDDAAJ__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FD0CCF0)
#define MLMKHCDDAAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0CCD0)

inline static constexpr unsigned int MLMKHCDDAAJ_TypeDefinitionIndex = 28980;

class MLMKHCDDAAJ : public ::System::Attribute
{
public:
	::System::Type* KELBIHIKKGN; // 0x10
	::System::Boolean PEDANHBGIGE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMKHCDDAAJ__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLMKHCDDAAJ__CTOR_1_OFFSET))(this, FBILHHBPEHD);
	}

	::System::Void _ctor_2(::System::Boolean FBILHHBPEHD, ::System::Type* IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + MLMKHCDDAAJ__CTOR_2_OFFSET))(this, FBILHHBPEHD, IMLLDOHDCNC);
	}
};
