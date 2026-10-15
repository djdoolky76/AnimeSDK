#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/AvatarOutfit_PlayerOutfitSlotTypeFlags.h"
class CJLCPMDGIBO;
class FJEOAPBLMKG;
namespace RPG::Client { class AvatarOutfit; }
namespace RPG::Client { class AvatarOutfitUnit; }
namespace RPG::Client { class AvatarOutfit_IServerAgent; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATAROUTFIT_CHECKISDRESSED_OFFSET UNITYSDK_OFFSET(0xC700970)
#define RPG_CLIENT_AVATAROUTFIT_CREATE_OFFSET UNITYSDK_OFFSET(0xC7008F0)
#define RPG_CLIENT_AVATAROUTFIT_CTOR_OFFSET UNITYSDK_OFFSET(0xC700960)
#define RPG_CLIENT_AVATAROUTFIT_FILLDRESSEDIDSTO_OFFSET UNITYSDK_OFFSET(0xC700A10)
#define RPG_CLIENT_AVATAROUTFIT_GETMODELSBYTARGETSLOTS_OFFSET UNITYSDK_OFFSET(0xC701570)
#define RPG_CLIENT_AVATAROUTFIT_GETMODELS_1_OFFSET UNITYSDK_OFFSET(0xC700B30)
#define RPG_CLIENT_AVATAROUTFIT_GETMODELS_OFFSET UNITYSDK_OFFSET(0xC700AD0)
#define RPG_CLIENT_AVATAROUTFIT_GETSERVERDATA_OFFSET UNITYSDK_OFFSET(0xC702220)
#define RPG_CLIENT_AVATAROUTFIT_ISSAME_OFFSET UNITYSDK_OFFSET(0xC702270)
#define RPG_CLIENT_AVATAROUTFIT_SETDRESSEDIDS_OFFSET UNITYSDK_OFFSET(0xC700A70)
#define RPG_CLIENT_AVATAROUTFIT__FILLUNITSTO_OFFSET UNITYSDK_OFFSET(0xC701B60)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarOutfit_TypeDefinitionIndex = 62495;

	class AvatarOutfit : public ::System::Object
	{
	public:
		::RPG::Client::AvatarOutfit_IServerAgent* _ServerAgent; // 0x10
		::System::Void _ctor(::RPG::Client::AvatarOutfit_IServerAgent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfit_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::AvatarOutfit* Create(::RPG::Client::AvatarOutfit_IServerAgent* a1)
		{
			return ((::RPG::Client::AvatarOutfit*(*)(::RPG::Client::AvatarOutfit_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_CREATE_OFFSET))(a1);
		}

		::System::Boolean CheckIsDressed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_CHECKISDRESSED_OFFSET))(this, a1);
		}

		::System::Void FillDressedIDsTo(::System::Collections::Generic::ICollection_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_FILLDRESSEDIDSTO_OFFSET))(this, a1);
		}

		::System::Void SetDressedIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_SETDRESSEDIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::FJEOAPBLMKG*>* GetModels(::RPG::GameCore::GenderType a1, ::RPG::GameCore::AvatarBaseType a2)
		{
			return ((::System::Collections::Generic::List_1<::FJEOAPBLMKG*>*(*)(::PVOID, ::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_GETMODELS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::FJEOAPBLMKG*>* GetModels_1(::RPG::GameCore::GenderType a1, ::RPG::GameCore::AvatarBaseType a2, ::RPG::Client::AvatarOutfitUnit* a3)
		{
			return ((::System::Collections::Generic::List_1<::FJEOAPBLMKG*>*(*)(::PVOID, ::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_GETMODELS_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::FJEOAPBLMKG*>* GetModelsByTargetSlots(::RPG::GameCore::GenderType a1, ::RPG::GameCore::AvatarBaseType a2, ::RPG::Client::AvatarOutfit_PlayerOutfitSlotTypeFlags a3)
		{
			return ((::System::Collections::Generic::List_1<::FJEOAPBLMKG*>*(*)(::PVOID, ::RPG::GameCore::GenderType, ::RPG::GameCore::AvatarBaseType, ::RPG::Client::AvatarOutfit_PlayerOutfitSlotTypeFlags))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_GETMODELSBYTARGETSLOTS_OFFSET))(this, a1, a2, a3);
		}

		::CJLCPMDGIBO* GetServerData()
		{
			return ((::CJLCPMDGIBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_GETSERVERDATA_OFFSET))(this);
		}

		::System::Boolean IsSame(::RPG::Client::AvatarOutfit* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT_ISSAME_OFFSET))(this, a1);
		}

		::System::Void _FillUnitsTo(::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>* a1, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>*, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAROUTFIT__FILLUNITSTO_OFFSET))(this, a1, a2);
		}

	};
}
