#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JENIFGNJEPE.h"
namespace System { class String; }

#define CMIPDDBIPKO_CTOR_OFFSET UNITYSDK_OFFSET(0xDA37AE0)
#define CMIPDDBIPKO_FIAFKJOKGIP_OFFSET UNITYSDK_OFFSET(0xDA37A10)
#define CMIPDDBIPKO_GET_BP_OFFSET UNITYSDK_OFFSET(0xDA37BA0)
#define CMIPDDBIPKO_GET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0xDA37B80)
#define CMIPDDBIPKO_SET_BP_OFFSET UNITYSDK_OFFSET(0xDA37BB0)
#define CMIPDDBIPKO_SET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0xDA37B90)

inline static constexpr unsigned int CMIPDDBIPKO_TypeDefinitionIndex = 59002;

	class CMIPDDBIPKO : public ::JENIFGNJEPE
	{
	public:
		::System::Int32 _BP_k__BackingField; // 0x10
		::System::UInt32 _DamageCounter_k__BackingField; // 0x14
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CMIPDDBIPKO_CTOR_OFFSET))(this, a1);
		}

		static ::System::String* FIAFKJOKGIP(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CMIPDDBIPKO_FIAFKJOKGIP_OFFSET))(a1, a2);
		}

		::System::UInt32 get_DamageCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIPDDBIPKO_GET_DAMAGECOUNTER_OFFSET))(this);
		}

		::System::Void set_DamageCounter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMIPDDBIPKO_SET_DAMAGECOUNTER_OFFSET))(this, a1);
		}

		::System::Int32 get_BP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMIPDDBIPKO_GET_BP_OFFSET))(this);
		}

		::System::Void set_BP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CMIPDDBIPKO_SET_BP_OFFSET))(this, a1);
		}

	};
