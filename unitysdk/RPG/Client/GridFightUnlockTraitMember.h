#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_CTOR_OFFSET UNITYSDK_OFFSET(0xDCF9A60)
#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_NEEDHIDETRAITDISPLAY_OFFSET UNITYSDK_OFFSET(0xDCF9C00)
#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_SPOTLIGHTID_OFFSET UNITYSDK_OFFSET(0xDCF9CA0)
#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_UNLOCKROLEIDS_OFFSET UNITYSDK_OFFSET(0xDCF9B60)
#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_UNLOCKTRAITID_OFFSET UNITYSDK_OFFSET(0xDCF9AC0)
#define RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDCF9A70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUnlockTraitMember_TypeDefinitionIndex = 66636;

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

		::System::Boolean get_NeedHideTraitDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_NEEDHIDETRAITDISPLAY_OFFSET))(this);
		}

		::System::UInt32 get_SpotLightID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUNLOCKTRAITMEMBER_GET_SPOTLIGHTID_OFFSET))(this);
		}

	};
}
