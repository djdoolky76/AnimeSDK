#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class PIIOAKOEACN;
namespace System { class Nullable; }

#define EIEOFOGDINH_CTOR_OFFSET UNITYSDK_OFFSET(0x154C14A0)
#define EIEOFOGDINH_GET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x154C13E0)
#define EIEOFOGDINH_GET_CHIPCONFIG_OFFSET UNITYSDK_OFFSET(0x154C13C0)
#define EIEOFOGDINH_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x154C1400)
#define EIEOFOGDINH_NFINIHKKLPK_OFFSET UNITYSDK_OFFSET(0x154C1420)
#define EIEOFOGDINH_SET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x154C13F0)
#define EIEOFOGDINH_SET_CHIPCONFIG_OFFSET UNITYSDK_OFFSET(0x154C13D0)
#define EIEOFOGDINH_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x154C1410)

	class EIEOFOGDINH : public ::System::Object
	{
	public:
		::PIIOAKOEACN* _ChipConfig_k__BackingField; // 0x10
		::System::UInt32 _Count_k__BackingField; // 0x18
		::System::Nullable* _AttributeType_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEOFOGDINH_CTOR_OFFSET))(this);
		}

		::PIIOAKOEACN* get_ChipConfig()
		{
			return ((::PIIOAKOEACN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEOFOGDINH_GET_CHIPCONFIG_OFFSET))(this);
		}

		::System::Void set_ChipConfig(::PIIOAKOEACN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + EIEOFOGDINH_SET_CHIPCONFIG_OFFSET))(this, a1);
		}

		::System::Nullable* get_AttributeType()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEOFOGDINH_GET_ATTRIBUTETYPE_OFFSET))(this);
		}

		::System::Void set_AttributeType(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + EIEOFOGDINH_SET_ATTRIBUTETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEOFOGDINH_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EIEOFOGDINH_SET_COUNT_OFFSET))(this, a1);
		}

		::System::Int32 NFINIHKKLPK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEOFOGDINH_NFINIHKKLPK_OFFSET))(this);
		}

	};
