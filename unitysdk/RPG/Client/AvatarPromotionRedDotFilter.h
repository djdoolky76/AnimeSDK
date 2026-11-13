#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F26D0)
#define RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B0F2670)
#define RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x1B0F2620)
#define RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0x1B0F1C60)
#define RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER__CANAVATARPROMOTE_OFFSET UNITYSDK_OFFSET(0x1B0F2180)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPromotionRedDotFilter_TypeDefinitionIndex = 68763;

	class AvatarPromotionRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotAvatarIDs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER_CTOR_OFFSET))(this);
		}

		::System::Void UpdateRedDots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER_UPDATEREDDOTS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean _CanAvatarPromote(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPROMOTIONREDDOTFILTER__CANAVATARPROMOTE_OFFSET))(this, a1);
		}

	};
}
