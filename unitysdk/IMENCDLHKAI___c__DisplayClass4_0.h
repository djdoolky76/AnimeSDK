#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMENCDLHKAI;
namespace System { class Action; }

#define IMENCDLHKAI___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB802210)
#define IMENCDLHKAI___C__DISPLAYCLASS4_0__APPLYCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xB802480)

inline static constexpr unsigned int IMENCDLHKAI___c__DisplayClass4_0_TypeDefinitionIndex = 59054;

	class IMENCDLHKAI___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::IMENCDLHKAI* __4__this; // 0x10
		::System::Action* onSuccess; // 0x18
		::System::Int32 currentChangeIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENCDLHKAI___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _ApplyChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMENCDLHKAI___C__DISPLAYCLASS4_0__APPLYCHANGE_B__0_OFFSET))(this);
		}

	};
