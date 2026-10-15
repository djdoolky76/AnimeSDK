#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILOOAAOHIIG;
class JNLFJMBAKKA_KACOKHHHDMB;

#define JNLFJMBAKKA___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB284BF0)
#define JNLFJMBAKKA___C__DISPLAYCLASS14_0___ONWAITINSTANTIATEPIECEREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0xB2850A0)

inline static constexpr unsigned int JNLFJMBAKKA___c__DisplayClass14_0_TypeDefinitionIndex = 79535;

	class JNLFJMBAKKA___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::JNLFJMBAKKA_KACOKHHHDMB* message; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLFJMBAKKA___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnWaitInstantiatePieceRequest_b__0(::ILOOAAOHIIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILOOAAOHIIG*))((::PBYTE)hIl2Cpp + JNLFJMBAKKA___C__DISPLAYCLASS14_0___ONWAITINSTANTIATEPIECEREQUEST_B__0_OFFSET))(this, a1);
		}

	};
