#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAJGGEMFOMB;
class JNLFJMBAKKA_DAGLEBBMHEF;

#define JNLFJMBAKKA___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB284F80)
#define JNLFJMBAKKA___C__DISPLAYCLASS16_0___ONWAITMOVEPIECEREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0xB285130)

inline static constexpr unsigned int JNLFJMBAKKA___c__DisplayClass16_0_TypeDefinitionIndex = 79536;

	class JNLFJMBAKKA___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::JNLFJMBAKKA_DAGLEBBMHEF* message; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNLFJMBAKKA___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnWaitMovePieceRequest_b__0(::IAJGGEMFOMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + JNLFJMBAKKA___C__DISPLAYCLASS16_0___ONWAITMOVEPIECEREQUEST_B__0_OFFSET))(this, a1);
		}

	};
