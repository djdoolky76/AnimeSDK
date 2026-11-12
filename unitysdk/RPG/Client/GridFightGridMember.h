#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_CTOR_OFFSET UNITYSDK_OFFSET(0xDB60AE0)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONBACK_OFFSET UNITYSDK_OFFSET(0xDB56530)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONBENCH_OFFSET UNITYSDK_OFFSET(0xDB60880)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONBOARD_OFFSET UNITYSDK_OFFSET(0xDB50420)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONFRONT_OFFSET UNITYSDK_OFFSET(0xDB59860)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONOVERCROWD_OFFSET UNITYSDK_OFFSET(0xDB608D0)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_PLACEMENTINDEX_OFFSET UNITYSDK_OFFSET(0xDB60920)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_PLACEMENT_OFFSET UNITYSDK_OFFSET(0xDB60790)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xDB60A10)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xDB60770)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xDB60A50)
#define RPG_CLIENT_GRIDFIGHTGRIDMEMBER_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xDB60780)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridMember_TypeDefinitionIndex = 66392;

	class GridFightGridMember : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::UInt32 _UniqueID_k__BackingField; // 0x18
		::System::UInt32 _PosIndex; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_SET_UNIQUEID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPlacementType get_Placement()
		{
			return ((::RPG::Client::GridFightPlacementType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_PLACEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsOnFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONFRONT_OFFSET))(this);
		}

		::System::Boolean get_IsOnBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONBACK_OFFSET))(this);
		}

		::System::Boolean get_IsOnBoard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONBOARD_OFFSET))(this);
		}

		::System::Boolean get_IsOnBench()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONBENCH_OFFSET))(this);
		}

		::System::Boolean get_IsOnOvercrowd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_ISONOVERCROWD_OFFSET))(this);
		}

		::System::UInt32 get_PlacementIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_PLACEMENTINDEX_OFFSET))(this);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDMEMBER_SET_POSINDEX_OFFSET))(this, a1);
		}

	};
}
