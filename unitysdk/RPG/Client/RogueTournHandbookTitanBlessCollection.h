#pragma once
#include "unitysdk/unitysdk.h"
class KPPBBOJOMDB;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDFED430)
#define RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_ISTITANBLESSHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0xDFED350)
#define RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_SYNCUNLOCKEDIDS_OFFSET UNITYSDK_OFFSET(0xDFECE10)
#define RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_SYNCUNLOCKEDID_OFFSET UNITYSDK_OFFSET(0xDFED2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookTitanBlessCollection_TypeDefinitionIndex = 67659;

	class RogueTournHandbookTitanBlessCollection
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_CTOR_OFFSET))(this);
		}

		::System::Void SyncUnlockedIDs(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_SYNCUNLOCKEDIDS_OFFSET))(this, a1);
		}

		::System::Void SyncUnlockedID(::KPPBBOJOMDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPPBBOJOMDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_SYNCUNLOCKEDID_OFFSET))(this, a1);
		}

		::System::Boolean IsTitanBlessHandbookLocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_ISTITANBLESSHANDBOOKLOCKED_OFFSET))(this, a1);
		}

	};
}
