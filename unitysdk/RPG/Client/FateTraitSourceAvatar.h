#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class FateBuffTraitInfo; }
namespace System { class String; }

#define RPG_CLIENT_FATETRAITSOURCEAVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5084E0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETDESC_OFFSET UNITYSDK_OFFSET(0x1C509860)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETIMGICON_OFFSET UNITYSDK_OFFSET(0x1C509560)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETNAME_OFFSET UNITYSDK_OFFSET(0x1C509700)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GETRARITYBG_OFFSET UNITYSDK_OFFSET(0x1C509690)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x1C509620)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1C5099D0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C509910)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C5083F0)
#define RPG_CLIENT_FATETRAITSOURCEAVATAR_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1C5099E0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitSourceAvatar_TypeDefinitionIndex = 65457;

	class FateTraitSourceAvatar : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParamList; // 0x10
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x18
		::RPG::Client::FateBuffTraitInfo* _BelongTraitInfo; // 0x20
		::RPG::Client::TextID _AvatarTipDesc; // 0x28
		::System::UInt32 _AvatarID_k__BackingField; // 0x38
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::TextID a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3, ::RPG::Client::FateBuffTraitInfo* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TextID, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* GetImgIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GETIMGICON_OFFSET))(this);
		}

		::System::String* GetRarityBg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GETRARITYBG_OFFSET))(this);
		}

		::RPG::Client::TextID GetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GETNAME_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GETDESC_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_ISACTIVE_OFFSET))(this);
		}

		static ::System::Boolean IsUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_ISUNLOCK_OFFSET))(a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_SET_AVATARID_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* get_AvatarData()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITSOURCEAVATAR_GET_AVATARDATA_OFFSET))(this);
		}

	};
}
