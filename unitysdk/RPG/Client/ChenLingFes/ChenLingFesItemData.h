#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class IBECKBPHMFH;

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCA959A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCABD5F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xCA95D50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xCABD5D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCABD600)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xCABD560)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xCABD5E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0xCABD4D0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesItemData_TypeDefinitionIndex = 81288;

	class ChenLingFesItemData : public ::Sofa::Core::ObservableObject
	{
	public:
		::IBECKBPHMFH* _Config_k__BackingField; // 0x18
		::System::UInt32 _Count; // 0x20
		::System::UInt32 _ItemID_k__BackingField; // 0x24
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_SET_ITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_SET_COUNT_OFFSET))(this, a1);
		}

		::IBECKBPHMFH* get_Config()
		{
			return ((::IBECKBPHMFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::IBECKBPHMFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBECKBPHMFH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESITEMDATA_SET_CONFIG_OFFSET))(this, a1);
		}

	};
}
