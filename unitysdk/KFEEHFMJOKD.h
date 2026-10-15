#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }

#define KFEEHFMJOKD_AMFGAOHDDKK_OFFSET UNITYSDK_OFFSET(0xB396C10)
#define KFEEHFMJOKD_BLCKBEDKCNE_OFFSET UNITYSDK_OFFSET(0xB396D20)
#define KFEEHFMJOKD_CGDNPIJGNNK_OFFSET UNITYSDK_OFFSET(0xB396AC0)
#define KFEEHFMJOKD_CTOR_OFFSET UNITYSDK_OFFSET(0xB397000)
#define KFEEHFMJOKD_EMGAINNCAFB_OFFSET UNITYSDK_OFFSET(0xB396D10)
#define KFEEHFMJOKD_EMLCAKJEFLC_OFFSET UNITYSDK_OFFSET(0xB396E70)
#define KFEEHFMJOKD_HJOOJADPMJO_OFFSET UNITYSDK_OFFSET(0xB396AA0)
#define KFEEHFMJOKD_JLEHJHFBCPC_OFFSET UNITYSDK_OFFSET(0xB396AE0)
#define KFEEHFMJOKD_KJMJIKDLFGD_OFFSET UNITYSDK_OFFSET(0xB396AB0)
#define KFEEHFMJOKD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB3969A0)
#define KFEEHFMJOKD_NMBPGKJJMDP_OFFSET UNITYSDK_OFFSET(0xB396AD0)
#define KFEEHFMJOKD_PLGPIOPKBMA_OFFSET UNITYSDK_OFFSET(0xB396D30)

inline static constexpr unsigned int KFEEHFMJOKD_TypeDefinitionIndex = 56036;

	class KFEEHFMJOKD : public ::System::Object
	{
	public:
		::RPG::GameCore::LineUpCharacter* DLOBMJMELPF; // 0x10
		::RPG::AvatarSystem::IAvatar* BBBMGEAKHEB; // 0x18
		::RPG::GameCore::SpecialAvatarRow* JABJNNPBNMM; // 0x20
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x28
		::RPG::GameCore::IAvatarCommonRowWrap* IBPBJBOKKMF; // 0x30
		::System::Int32 FHNCOBDGIDJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEEHFMJOKD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::LineUpCharacter* a1, ::System::Int32 a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LineUpCharacter*, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KFEEHFMJOKD_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::LineUpCharacter* HJOOJADPMJO()
		{
			return ((::RPG::GameCore::LineUpCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEEHFMJOKD_HJOOJADPMJO_OFFSET))(this);
		}

		::System::Int32 KJMJIKDLFGD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEEHFMJOKD_KJMJIKDLFGD_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CGDNPIJGNNK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEEHFMJOKD_CGDNPIJGNNK_OFFSET))(this);
		}

		::System::Void NMBPGKJJMDP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KFEEHFMJOKD_NMBPGKJJMDP_OFFSET))(this, a1);
		}

		::System::UInt32 JLEHJHFBCPC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEEHFMJOKD_JLEHJHFBCPC_OFFSET))(this);
		}

		::System::UInt32 AMFGAOHDDKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEEHFMJOKD_AMFGAOHDDKK_OFFSET))(this);
		}

		::RPG::GameCore::IAvatarCommonRowWrap* EMGAINNCAFB()
		{
			return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEEHFMJOKD_EMGAINNCAFB_OFFSET))(this);
		}

		::RPG::GameCore::SpecialAvatarRow* BLCKBEDKCNE()
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEEHFMJOKD_BLCKBEDKCNE_OFFSET))(this);
		}

		::System::String* PLGPIOPKBMA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEEHFMJOKD_PLGPIOPKBMA_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* EMLCAKJEFLC()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEEHFMJOKD_EMLCAKJEFLC_OFFSET))(this);
		}

	};
