#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
class CMNOPNKOJPP;
class HPOCHBIJIHH;
namespace RPG::Client::FateRin::Avatar { class IFateRinAvatarViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_ASYNCINITIALIZE_OFFSET UNITYSDK_OFFSET(0xD921B10)
#define RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD921A50)
#define RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_GET_PLAYERFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xD921C50)
#define RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0xD921C30)
#define RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0xD921C40)

namespace RPG::Client::FateRin::Contract
{
	inline static constexpr unsigned int FateRinContractViewModel_TypeDefinitionIndex = 83419;

	class FateRinContractViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* _Player_k__BackingField; // 0x20
		::CMNOPNKOJPP* _AvatarViewModelFactory; // 0x28
		::HPOCHBIJIHH* _DeckRepository; // 0x30
		::System::Void _ctor(::HPOCHBIJIHH* a1, ::CMNOPNKOJPP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HPOCHBIJIHH*, ::CMNOPNKOJPP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* AsyncInitialize(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_ASYNCINITIALIZE_OFFSET))(this, a1);
		}

		::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* get_Player()
		{
			return ((::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_GET_PLAYER_OFFSET))(this);
		}

		::System::Void set_Player(::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_SET_PLAYER_OFFSET))(this, a1);
		}

		::System::String* get_PlayerFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CONTRACT_FATERINCONTRACTVIEWMODEL_GET_PLAYERFIGUREPATH_OFFSET))(this);
		}

	};
}
