#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHAIBHJAFEP.h"

namespace System { class String; }

#define BEBBDFMIALG__CTOR_OFFSET UNITYSDK_OFFSET(0x12680780)

inline static constexpr unsigned int BEBBDFMIALG_TypeDefinitionIndex = 84558;

class BEBBDFMIALG : public ::KHAIBHJAFEP
{
public:
	::System::String* LDIFILICDFK; // 0x38
	::System::Int32 DGMKOFAFCCO; // 0x40

	::System::Void _ctor(::System::Double CIIPCCLOHLH, ::System::Double AJPAFKAPNNM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + BEBBDFMIALG__CTOR_OFFSET))(this, CIIPCCLOHLH, AJPAFKAPNNM);
	}
};
