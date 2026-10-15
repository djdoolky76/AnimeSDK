#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKIIPGMBEIP;
class LBKMCGDMNJO;
class LOJIKMHLCBL;
class OINNEGOFKAA;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGETEAMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xC9B6950)
#define RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATABYAVATARID_OFFSET UNITYSDK_OFFSET(0xC9B6FA0)
#define RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATABYINDEX_OFFSET UNITYSDK_OFFSET(0xC9B6EE0)
#define RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xC9B7100)
#define RPG_CLIENT_CHALLENGETEAMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xC9B6990)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeTeamInfo_TypeDefinitionIndex = 63136;

	class ChallengeTeamInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GKIIPGMBEIP*>* AvatarList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>* a1, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::OINNEGOFKAA*>* a2, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::LOJIKMHLCBL*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::OINNEGOFKAA*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::LOJIKMHLCBL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_SYNC_OFFSET))(this, a1, a2, a3);
		}

		::RPG::AvatarSystem::IAvatar* GetAvatarDataByIndex(::System::Int32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATABYINDEX_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* GetAvatarDataByAvatarID(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATABYAVATARID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATALIST_OFFSET))(this);
		}

	};
}
