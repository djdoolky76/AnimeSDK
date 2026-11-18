#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ROBOTPARTNERAVATARPRELOADREFCOUNTSUBSYSTEM_HASOTHERAVATARENTITYWITHTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x10D58DC0)
#define MOLEMOLE_ROBOTPARTNERAVATARPRELOADREFCOUNTSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D589F0)
#define MOLEMOLE_ROBOTPARTNERAVATARPRELOADREFCOUNTSUBSYSTEM_RELEASEPARTNERAVATARPRELOAD_OFFSET UNITYSDK_OFFSET(0x10D58C80)
#define MOLEMOLE_ROBOTPARTNERAVATARPRELOADREFCOUNTSUBSYSTEM_RETAINPARTNERAVATARPRELOAD_OFFSET UNITYSDK_OFFSET(0x10D58B50)
#define MOLEMOLE_ROBOTPARTNERAVATARPRELOADREFCOUNTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10D59180)
#define MOLEMOLE_ROBOTPARTNERAVATARPRELOADREFCOUNTSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10D59240)

namespace MoleMole
{
	inline static constexpr unsigned int RobotPartnerAvatarPreloadRefCountSubSystem_TypeDefinitionIndex = 73452;

	class RobotPartnerAvatarPreloadRefCountSubSystem
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _avatarPreloadRefCountByTemplateID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ROBOTPARTNERAVATARPRELOADREFCOUNTSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ROBOTPARTNERAVATARPRELOADREFCOUNTSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RetainPartnerAvatarPreload(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ROBOTPARTNERAVATARPRELOADREFCOUNTSUBSYSTEM_RETAINPARTNERAVATARPRELOAD_OFFSET))(this, entityHandle);
		}

		::System::Void ReleasePartnerAvatarPreload(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ROBOTPARTNERAVATARPRELOADREFCOUNTSUBSYSTEM_RELEASEPARTNERAVATARPRELOAD_OFFSET))(this, entityHandle);
		}

		static ::System::Boolean HasOtherAvatarEntityWithTemplateID(::MoleMole::EntityHandle entityHandle, ::System::Int32 avatarTemplateID)
		{
			return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ROBOTPARTNERAVATARPRELOADREFCOUNTSUBSYSTEM_HASOTHERAVATARENTITYWITHTEMPLATEID_OFFSET))(entityHandle, avatarTemplateID);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ROBOTPARTNERAVATARPRELOADREFCOUNTSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
