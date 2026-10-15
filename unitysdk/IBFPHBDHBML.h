#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class JBNOMIECJDO;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define IBFPHBDHBML_CEIFNKOLBCF_OFFSET UNITYSDK_OFFSET(0x15E31A70)
#define IBFPHBDHBML_DJBLPHMBHLI_OFFSET UNITYSDK_OFFSET(0x15E31B20)
#define IBFPHBDHBML_EGEJPDNAJIJ_OFFSET UNITYSDK_OFFSET(0x15E31AC0)
#define IBFPHBDHBML_EMICJLHLDPC_OFFSET UNITYSDK_OFFSET(0x15E31970)
#define IBFPHBDHBML_GFMIEGEGAJD_OFFSET UNITYSDK_OFFSET(0x15E31A20)
#define IBFPHBDHBML_JKHOJMIBPFM_OFFSET UNITYSDK_OFFSET(0x15E31BE0)
#define IBFPHBDHBML_JOGKBNLKMBH_OFFSET UNITYSDK_OFFSET(0x15E31CA0)
#define IBFPHBDHBML_KCANKCCMCFK_OFFSET UNITYSDK_OFFSET(0x15E31D00)
#define IBFPHBDHBML_MBJLNFHDNDB_OFFSET UNITYSDK_OFFSET(0x15E31B80)
#define IBFPHBDHBML_MIHOLOADCJL_OFFSET UNITYSDK_OFFSET(0x15E31C40)
#define IBFPHBDHBML_PDIMBFHOJDF_OFFSET UNITYSDK_OFFSET(0x15E31820)
#define IBFPHBDHBML_PDLIIKKGLMD_OFFSET UNITYSDK_OFFSET(0x15E31880)
#define IBFPHBDHBML_PPDPBIBMPBH_OFFSET UNITYSDK_OFFSET(0x15E319C0)

	class IBFPHBDHBML : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FateRinHouguOwnerType PDIMBFHOJDF(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IBFPHBDHBML_PDIMBFHOJDF_OFFSET))(a1);
		}

		static ::RPG::GameCore::FateRinCardCasterSource EMICJLHLDPC(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::GameCore::FateRinCardCasterSource(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IBFPHBDHBML_EMICJLHLDPC_OFFSET))(a1);
		}

		static ::System::UInt32 PPDPBIBMPBH(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::UInt32(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IBFPHBDHBML_PPDPBIBMPBH_OFFSET))(a1);
		}

		static ::System::Boolean GFMIEGEGAJD(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IBFPHBDHBML_GFMIEGEGAJD_OFFSET))(a1);
		}

		static ::System::Boolean CEIFNKOLBCF(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IBFPHBDHBML_CEIFNKOLBCF_OFFSET))(a1);
		}

		static ::System::String* EGEJPDNAJIJ(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::String*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IBFPHBDHBML_EGEJPDNAJIJ_OFFSET))(a1);
		}

		static ::System::String* DJBLPHMBHLI(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::String*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IBFPHBDHBML_DJBLPHMBHLI_OFFSET))(a1);
		}

		static ::System::String* MBJLNFHDNDB(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::String*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IBFPHBDHBML_MBJLNFHDNDB_OFFSET))(a1);
		}

		static ::System::String* JKHOJMIBPFM(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::String*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IBFPHBDHBML_JKHOJMIBPFM_OFFSET))(a1);
		}

		static ::System::String* MIHOLOADCJL(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::String*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IBFPHBDHBML_MIHOLOADCJL_OFFSET))(a1);
		}

		static ::System::String* JOGKBNLKMBH(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::String*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IBFPHBDHBML_JOGKBNLKMBH_OFFSET))(a1);
		}

		static ::System::String* KCANKCCMCFK(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::String*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IBFPHBDHBML_KCANKCCMCFK_OFFSET))(a1);
		}

		static ::JBNOMIECJDO* PDLIIKKGLMD(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::JBNOMIECJDO*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + IBFPHBDHBML_PDLIIKKGLMD_OFFSET))(a1);
		}

	};
