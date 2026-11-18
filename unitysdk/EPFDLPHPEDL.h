#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHAIBHJAFEP.h"

namespace System { class String; }

#define EPFDLPHPEDL__CTOR_OFFSET UNITYSDK_OFFSET(0x1616A090)

inline static constexpr unsigned int EPFDLPHPEDL_TypeDefinitionIndex = 76564;

class EPFDLPHPEDL : public ::KHAIBHJAFEP
{
public:
	::System::String* CJIBHMJHJNM; // 0x38
	::System::String* LDIFILICDFK; // 0x40

	::System::Void _ctor(::System::Double CIIPCCLOHLH, ::System::Double AJPAFKAPNNM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + EPFDLPHPEDL__CTOR_OFFSET))(this, CIIPCCLOHLH, AJPAFKAPNNM);
	}
};
