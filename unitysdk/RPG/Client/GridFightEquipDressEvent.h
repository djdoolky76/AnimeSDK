#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPDRESSEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D178180)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipDressEvent_TypeDefinitionIndex = 66488;

	class GridFightEquipDressEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* EquipUIDsToTemporary; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* EquipUIDs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* EquipUIDsToRank; // 0x20
		::System::Boolean IsFromTrack; // 0x28
		::System::Boolean IsFromCraft; // 0x29
		::System::Byte _padding0[0x2];
		::System::UInt32 MemberUID; // 0x2C
		::System::UInt32 PlacementIndex; // 0x30
		::RPG::Client::GridFightPlacementType PlacementType; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPDRESSEVENT_CTOR_OFFSET))(this);
		}

	};
}
