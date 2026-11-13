#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMENCDLHKAI;
namespace System { class Action; }

#define IMENCDLHKAI___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D1240)
#define IMENCDLHKAI___C__DISPLAYCLASS5_0__REVERTTODEFAULT_B__0_OFFSET UNITYSDK_OFFSET(0x1A5D1310)

inline static constexpr unsigned int IMENCDLHKAI___c__DisplayClass5_0_TypeDefinitionIndex = 59055;

	class IMENCDLHKAI___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::IMENCDLHKAI* __4__this; // 0x10
		::System::Action* onSuccess; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENCDLHKAI___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _RevertToDefault_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENCDLHKAI___C__DISPLAYCLASS5_0__REVERTTODEFAULT_B__0_OFFSET))(this);
		}

	};
