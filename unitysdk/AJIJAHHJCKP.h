#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JENIFGNJEPE.h"
namespace System { class String; }

#define AJIJAHHJCKP_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBE830)
#define AJIJAHHJCKP_FIAFKJOKGIP_OFFSET UNITYSDK_OFFSET(0x12CBE770)
#define AJIJAHHJCKP_GET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x12CBE8D0)
#define AJIJAHHJCKP_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x12CBE8F0)
#define AJIJAHHJCKP_SET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x12CBE8E0)
#define AJIJAHHJCKP_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x12CBE900)

	class AJIJAHHJCKP : public ::JENIFGNJEPE
	{
	public:
		::System::UInt32 _DamageCounter_k__BackingField; // 0x10
		::System::Boolean _IsActive_k__BackingField; // 0x14
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AJIJAHHJCKP_CTOR_OFFSET))(this, a1);
		}

		static ::System::String* FIAFKJOKGIP(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + AJIJAHHJCKP_FIAFKJOKGIP_OFFSET))(a1, a2);
		}

		::System::UInt32 get_DamageCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIJAHHJCKP_GET_DAMAGECOUNTER_OFFSET))(this);
		}

		::System::Void set_DamageCounter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJIJAHHJCKP_SET_DAMAGECOUNTER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIJAHHJCKP_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJIJAHHJCKP_SET_ISACTIVE_OFFSET))(this, a1);
		}

	};
