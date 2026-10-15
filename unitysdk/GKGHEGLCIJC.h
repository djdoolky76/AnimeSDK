#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JENIFGNJEPE.h"
namespace System { class String; }

#define GKGHEGLCIJC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A8AF10)
#define GKGHEGLCIJC_FIAFKJOKGIP_OFFSET UNITYSDK_OFFSET(0x15A8AEC0)
#define GKGHEGLCIJC_GET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x15A8AF30)
#define GKGHEGLCIJC_SET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x15A8AF40)

inline static constexpr unsigned int GKGHEGLCIJC_TypeDefinitionIndex = 58996;

	class GKGHEGLCIJC : public ::JENIFGNJEPE
	{
	public:
		::System::UInt32 _DamageCounter_k__BackingField; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GKGHEGLCIJC_CTOR_OFFSET))(this, a1);
		}

		static ::System::String* FIAFKJOKGIP(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GKGHEGLCIJC_FIAFKJOKGIP_OFFSET))(a1);
		}

		::System::UInt32 get_DamageCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGHEGLCIJC_GET_DAMAGECOUNTER_OFFSET))(this);
		}

		::System::Void set_DamageCounter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKGHEGLCIJC_SET_DAMAGECOUNTER_OFFSET))(this, a1);
		}

	};
