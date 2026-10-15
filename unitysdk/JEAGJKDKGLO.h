#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JENIFGNJEPE.h"
namespace System { class String; }

#define JEAGJKDKGLO_CTOR_OFFSET UNITYSDK_OFFSET(0x166044B0)
#define JEAGJKDKGLO_FIAFKJOKGIP_OFFSET UNITYSDK_OFFSET(0x166041B0)
#define JEAGJKDKGLO_GET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x16604560)
#define JEAGJKDKGLO_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x16604580)
#define JEAGJKDKGLO_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x166045A0)
#define JEAGJKDKGLO_SET_DAMAGECOUNTER_OFFSET UNITYSDK_OFFSET(0x16604570)
#define JEAGJKDKGLO_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x16604590)
#define JEAGJKDKGLO_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x166045B0)

inline static constexpr unsigned int JEAGJKDKGLO_TypeDefinitionIndex = 58995;

	class JEAGJKDKGLO : public ::JENIFGNJEPE
	{
	public:
		::System::UInt32 _DamageCounter_k__BackingField; // 0x10
		::System::Boolean _IsActive_k__BackingField; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single _Ratio_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JEAGJKDKGLO_CTOR_OFFSET))(this, a1);
		}

		static ::System::String* FIAFKJOKGIP(::System::UInt32 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + JEAGJKDKGLO_FIAFKJOKGIP_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 get_DamageCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAGJKDKGLO_GET_DAMAGECOUNTER_OFFSET))(this);
		}

		::System::Void set_DamageCounter(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEAGJKDKGLO_SET_DAMAGECOUNTER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAGJKDKGLO_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JEAGJKDKGLO_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::System::Single get_Ratio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAGJKDKGLO_GET_RATIO_OFFSET))(this);
		}

		::System::Void set_Ratio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JEAGJKDKGLO_SET_RATIO_OFFSET))(this, a1);
		}

	};
