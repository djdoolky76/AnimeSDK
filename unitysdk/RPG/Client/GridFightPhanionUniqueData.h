#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCEDNANGIJJ;

#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF24500)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUEDATA_GET_CANEAT_OFFSET UNITYSDK_OFFSET(0x1DF24460)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUEDATA_GET_ROLENUM_OFFSET UNITYSDK_OFFSET(0x1DF24480)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUEDATA_SET_CANEAT_OFFSET UNITYSDK_OFFSET(0x1DF24470)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUEDATA_SET_ROLENUM_OFFSET UNITYSDK_OFFSET(0x1DF24490)
#define RPG_CLIENT_GRIDFIGHTPHANIONUNIQUEDATA_UPDATEFROM_OFFSET UNITYSDK_OFFSET(0x1DF244A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPhanionUniqueData_TypeDefinitionIndex = 67222;

	class GridFightPhanionUniqueData : public ::System::Object
	{
	public:
		::System::UInt32 _RoleNum_k__BackingField; // 0x10
		::System::Boolean _CanEat_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUEDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanEat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUEDATA_GET_CANEAT_OFFSET))(this);
		}

		::System::Void set_CanEat(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUEDATA_SET_CANEAT_OFFSET))(this, a1);
		}

		::System::UInt32 get_RoleNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUEDATA_GET_ROLENUM_OFFSET))(this);
		}

		::System::Void set_RoleNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUEDATA_SET_ROLENUM_OFFSET))(this, a1);
		}

		::System::Void UpdateFrom(::MCEDNANGIJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCEDNANGIJJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPHANIONUNIQUEDATA_UPDATEFROM_OFFSET))(this, a1);
		}

	};
}
