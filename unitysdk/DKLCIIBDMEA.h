#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHOEALGPJGB;
class MDKJNMJFNAD;
class OCGNLGGKMID;

#define DKLCIIBDMEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC68D10)
#define DKLCIIBDMEA_GET_BLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1EC68EC0)
#define DKLCIIBDMEA_GET_FENCESCOPE_OFFSET UNITYSDK_OFFSET(0x1EC68ED0)

	class DKLCIIBDMEA : public ::System::Object
	{
	public:
		::OCGNLGGKMID* _Blackboard_k__BackingField; // 0x10
		::JHOEALGPJGB* _FenceScope_k__BackingField; // 0x18
		::System::Void _ctor(::OCGNLGGKMID* a1, ::MDKJNMJFNAD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OCGNLGGKMID*, ::MDKJNMJFNAD*))((::PBYTE)hIl2Cpp + DKLCIIBDMEA_CTOR_OFFSET))(this, a1, a2);
		}

		::OCGNLGGKMID* get_Blackboard()
		{
			return ((::OCGNLGGKMID*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLCIIBDMEA_GET_BLACKBOARD_OFFSET))(this);
		}

		::JHOEALGPJGB* get_FenceScope()
		{
			return ((::JHOEALGPJGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKLCIIBDMEA_GET_FENCESCOPE_OFFSET))(this);
		}

	};
