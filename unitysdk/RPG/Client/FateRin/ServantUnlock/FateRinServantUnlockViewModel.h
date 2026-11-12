#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/FateRinServantType.h"
class CMNOPNKOJPP;
class HPOCHBIJIHH;
namespace RPG::Client::FateRin::Avatar { class IFateRinAvatarViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_SERVANTUNLOCK_FATERINSERVANTUNLOCKVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD933060)
#define RPG_CLIENT_FATERIN_SERVANTUNLOCK_FATERINSERVANTUNLOCKVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD932FA0)
#define RPG_CLIENT_FATERIN_SERVANTUNLOCK_FATERINSERVANTUNLOCKVIEWMODEL_GET_CARDDECKDESC_OFFSET UNITYSDK_OFFSET(0xD932F80)
#define RPG_CLIENT_FATERIN_SERVANTUNLOCK_FATERINSERVANTUNLOCKVIEWMODEL_GET_SERVANT_OFFSET UNITYSDK_OFFSET(0xD932F60)
#define RPG_CLIENT_FATERIN_SERVANTUNLOCK_FATERINSERVANTUNLOCKVIEWMODEL_SET_CARDDECKDESC_OFFSET UNITYSDK_OFFSET(0xD932F90)
#define RPG_CLIENT_FATERIN_SERVANTUNLOCK_FATERINSERVANTUNLOCKVIEWMODEL_SET_SERVANT_OFFSET UNITYSDK_OFFSET(0xD932F70)
#define RPG_CLIENT_FATERIN_SERVANTUNLOCK_FATERINSERVANTUNLOCKVIEWMODEL__GETHOUGUOWNERTYPE_OFFSET UNITYSDK_OFFSET(0xD933340)

namespace RPG::Client::FateRin::ServantUnlock
{
	inline static constexpr unsigned int FateRinServantUnlockViewModel_TypeDefinitionIndex = 83414;

	class FateRinServantUnlockViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::CMNOPNKOJPP* _AvatarViewModelFactory; // 0x20
		::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* _Servant_k__BackingField; // 0x28
		::HPOCHBIJIHH* _CardDeckRepository; // 0x30
		::RPG::GameCore::FateRinServantType _ServantType; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _CardDeckDesc_k__BackingField; // 0x40
		::System::Void _ctor(::CMNOPNKOJPP* a1, ::HPOCHBIJIHH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CMNOPNKOJPP*, ::HPOCHBIJIHH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_SERVANTUNLOCK_FATERINSERVANTUNLOCKVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* get_Servant()
		{
			return ((::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_SERVANTUNLOCK_FATERINSERVANTUNLOCKVIEWMODEL_GET_SERVANT_OFFSET))(this);
		}

		::System::Void set_Servant(::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_SERVANTUNLOCK_FATERINSERVANTUNLOCKVIEWMODEL_SET_SERVANT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_CardDeckDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_SERVANTUNLOCK_FATERINSERVANTUNLOCKVIEWMODEL_GET_CARDDECKDESC_OFFSET))(this);
		}

		::System::Void set_CardDeckDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_SERVANTUNLOCK_FATERINSERVANTUNLOCKVIEWMODEL_SET_CARDDECKDESC_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_SERVANTUNLOCK_FATERINSERVANTUNLOCKVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateRinHouguOwnerType _GetHouguOwnerType(::RPG::GameCore::FateRinServantType a1)
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID, ::RPG::GameCore::FateRinServantType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_SERVANTUNLOCK_FATERINSERVANTUNLOCKVIEWMODEL__GETHOUGUOWNERTYPE_OFFSET))(this, a1);
		}

	};
}
