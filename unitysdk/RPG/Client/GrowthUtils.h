#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GROWTHUTILS_GETAVATARWORLD_OFFSET UNITYSDK_OFFSET(0x1CA19CC0)
#define RPG_CLIENT_GROWTHUTILS_GETOWNEDAVATAREXPITEMSTOTALEXP_OFFSET UNITYSDK_OFFSET(0x1CA1D690)
#define RPG_CLIENT_GROWTHUTILS_GETOWNEDLIGHTCONEEXPITEMSTOTALEXP_OFFSET UNITYSDK_OFFSET(0x1CA1DA20)
#define RPG_CLIENT_GROWTHUTILS_GETWORLDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1CA1A6E0)
#define RPG_CLIENT_GROWTHUTILS_HASUPGRADABLETRACENODE_OFFSET UNITYSDK_OFFSET(0x1CA23A20)
#define RPG_CLIENT_GROWTHUTILS_TRYGETAVATARCAPS_OFFSET UNITYSDK_OFFSET(0x1CA1DC90)
#define RPG_CLIENT_GROWTHUTILS__ISTRACENODEUPGRADABLE_OFFSET UNITYSDK_OFFSET(0x1CA23B80)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthUtils_TypeDefinitionIndex = 67534;

	class GrowthUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>* GetWorldMaterials(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHUTILS_GETWORLDMATERIALS_OFFSET))(a1);
		}

		static ::System::UInt32 GetAvatarWorld(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHUTILS_GETAVATARWORLD_OFFSET))(a1);
		}

		static ::System::Boolean HasUpgradableTraceNode(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHUTILS_HASUPGRADABLETRACENODE_OFFSET))(a1);
		}

		static ::System::Boolean TryGetAvatarCaps(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::IAvatar*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHUTILS_TRYGETAVATARCAPS_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetOwnedAvatarExpItemsTotalExp()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHUTILS_GETOWNEDAVATAREXPITEMSTOTALEXP_OFFSET))();
		}

		static ::System::UInt32 GetOwnedLightConeExpItemsTotalExp()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHUTILS_GETOWNEDLIGHTCONEEXPITEMSTOTALEXP_OFFSET))();
		}

		static ::System::Boolean _IsTraceNodeUpgradable(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::IAvatar*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHUTILS__ISTRACENODEUPGRADABLE_OFFSET))(a1, a2, a3, a4);
		}

	};
}
