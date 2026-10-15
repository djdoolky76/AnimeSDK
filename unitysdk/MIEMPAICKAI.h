#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJHPHMDACGG;

#define MIEMPAICKAI_CTOR_OFFSET UNITYSDK_OFFSET(0xB952B20)
#define MIEMPAICKAI_GET_BATTLEEVENTSPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0xB952B00)
#define MIEMPAICKAI_GET_ID_OFFSET UNITYSDK_OFFSET(0xB952AC0)
#define MIEMPAICKAI_GET_SPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0xB952AE0)
#define MIEMPAICKAI_SET_BATTLEEVENTSPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0xB952B10)
#define MIEMPAICKAI_SET_ID_OFFSET UNITYSDK_OFFSET(0xB952AD0)
#define MIEMPAICKAI_SET_SPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0xB952AF0)

	class MIEMPAICKAI : public ::System::Object
	{
	public:
		::AJHPHMDACGG* _BattleEventSpecialMarkState_k__BackingField; // 0x10
		::AJHPHMDACGG* _SpecialMarkState_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEMPAICKAI_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEMPAICKAI_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIEMPAICKAI_SET_ID_OFFSET))(this, a1);
		}

		::AJHPHMDACGG* get_SpecialMarkState()
		{
			return ((::AJHPHMDACGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEMPAICKAI_GET_SPECIALMARKSTATE_OFFSET))(this);
		}

		::System::Void set_SpecialMarkState(::AJHPHMDACGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJHPHMDACGG*))((::PBYTE)hIl2Cpp + MIEMPAICKAI_SET_SPECIALMARKSTATE_OFFSET))(this, a1);
		}

		::AJHPHMDACGG* get_BattleEventSpecialMarkState()
		{
			return ((::AJHPHMDACGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEMPAICKAI_GET_BATTLEEVENTSPECIALMARKSTATE_OFFSET))(this);
		}

		::System::Void set_BattleEventSpecialMarkState(::AJHPHMDACGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJHPHMDACGG*))((::PBYTE)hIl2Cpp + MIEMPAICKAI_SET_BATTLEEVENTSPECIALMARKSTATE_OFFSET))(this, a1);
		}

	};
