#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODDOBGDFBDA_OAJPNLFOBCC__CTOR_OFFSET UNITYSDK_OFFSET(0xE0EE890)

inline static constexpr unsigned int ODDOBGDFBDA_OAJPNLFOBCC_TypeDefinitionIndex = 70572;

class ODDOBGDFBDA_OAJPNLFOBCC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DPKOIBEFPAO>* DLAGCMHPJHC; // 0x10
	::System::Int32 FIGJJHBHCLB; // 0x18
	::System::Boolean KDPCAIHIFKO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDOBGDFBDA_OAJPNLFOBCC__CTOR_OFFSET))(this);
	}
};
