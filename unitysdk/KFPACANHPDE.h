#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JENIFGNJEPE.h"
namespace System { class String; }

#define KFPACANHPDE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC59840)
#define KFPACANHPDE_FIAFKJOKGIP_OFFSET UNITYSDK_OFFSET(0xBC59550)
#define KFPACANHPDE_GET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0xBC59900)
#define KFPACANHPDE_GET_DELTASP_X1000_OFFSET UNITYSDK_OFFSET(0xBC59920)
#define KFPACANHPDE_GET_ISSPECIALSP_OFFSET UNITYSDK_OFFSET(0xBC59940)
#define KFPACANHPDE_SET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0xBC59910)
#define KFPACANHPDE_SET_DELTASP_X1000_OFFSET UNITYSDK_OFFSET(0xBC59930)
#define KFPACANHPDE_SET_ISSPECIALSP_OFFSET UNITYSDK_OFFSET(0xBC59950)

inline static constexpr unsigned int KFPACANHPDE_TypeDefinitionIndex = 60273;

	class KFPACANHPDE : public ::JENIFGNJEPE
	{
	public:
		::System::UInt32 _DamageCounter_k__BackingField; // 0x10
		::System::Int32 _DeltaSp_x1000_k__BackingField; // 0x14
		::System::Boolean _IsSpecialSP_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KFPACANHPDE_CTOR_OFFSET))(this, a1);
		}

		static ::System::String* FIAFKJOKGIP(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KFPACANHPDE_FIAFKJOKGIP_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 get_DamageCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPACANHPDE_GET_DAMAGECOUNTER_OFFSET))(this);
		}

		::System::Void set_DamageCounter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFPACANHPDE_SET_DAMAGECOUNTER_OFFSET))(this, a1);
		}

		::System::Int32 get_DeltaSp_x1000()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPACANHPDE_GET_DELTASP_X1000_OFFSET))(this);
		}

		::System::Void set_DeltaSp_x1000(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFPACANHPDE_SET_DELTASP_X1000_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSpecialSP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPACANHPDE_GET_ISSPECIALSP_OFFSET))(this);
		}

		::System::Void set_IsSpecialSP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFPACANHPDE_SET_ISSPECIALSP_OFFSET))(this, a1);
		}

	};
