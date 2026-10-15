#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_CTOR_OFFSET UNITYSDK_OFFSET(0xD2CDD10)
#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_UNLOCKROLEIDS_OFFSET UNITYSDK_OFFSET(0xD2CDE10)
#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_UNLOCKTRAITID_OFFSET UNITYSDK_OFFSET(0xD2CDD70)
#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD2CDD20)

namespace RPG::Client
{
	class GridFightUnlockTraitMember : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockTraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_UNLOCKTRAITID_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* get_UnlockRoleIDs()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_UNLOCKROLEIDS_OFFSET))(this);
		}

	};
}
