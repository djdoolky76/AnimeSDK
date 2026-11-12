#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKALAKKAJGE;
class ICCLDNDNHPD;
namespace System { class Action; }

#define FKALAKKAJGE___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16750890)
#define FKALAKKAJGE___C__DISPLAYCLASS4_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x16750C50)

inline static constexpr unsigned int FKALAKKAJGE___c__DisplayClass4_0_TypeDefinitionIndex = 80387;

	class FKALAKKAJGE___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::ICCLDNDNHPD* context; // 0x10
		::FKALAKKAJGE* __4__this; // 0x18
		::System::Action* onComplete; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKALAKKAJGE___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKALAKKAJGE___C__DISPLAYCLASS4_0__EXECUTE_B__0_OFFSET))(this);
		}

	};
