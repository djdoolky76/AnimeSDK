#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JENIFGNJEPE.h"
namespace System { class String; }

#define FAIIBOICCCO_CTOR_OFFSET UNITYSDK_OFFSET(0x15670A40)
#define FAIIBOICCCO_FIAFKJOKGIP_OFFSET UNITYSDK_OFFSET(0x15670970)
#define FAIIBOICCCO_GET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x15670AE0)
#define FAIIBOICCCO_GET_INTVAL_OFFSET UNITYSDK_OFFSET(0x15670B00)
#define FAIIBOICCCO_SET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x15670AF0)
#define FAIIBOICCCO_SET_INTVAL_OFFSET UNITYSDK_OFFSET(0x15670B10)

inline static constexpr unsigned int FAIIBOICCCO_TypeDefinitionIndex = 58998;

	class FAIIBOICCCO : public ::JENIFGNJEPE
	{
	public:
		::System::UInt32 _DamageCounter_k__BackingField; // 0x10
		::System::Int32 _IntVal_k__BackingField; // 0x14
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FAIIBOICCCO_CTOR_OFFSET))(this, a1);
		}

		static ::System::String* FIAFKJOKGIP(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + FAIIBOICCCO_FIAFKJOKGIP_OFFSET))(a1, a2);
		}

		::System::UInt32 get_DamageCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIIBOICCCO_GET_DAMAGECOUNTER_OFFSET))(this);
		}

		::System::Void set_DamageCounter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAIIBOICCCO_SET_DAMAGECOUNTER_OFFSET))(this, a1);
		}

		::System::Int32 get_IntVal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIIBOICCCO_GET_INTVAL_OFFSET))(this);
		}

		::System::Void set_IntVal(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAIIBOICCCO_SET_INTVAL_OFFSET))(this, a1);
		}

	};
