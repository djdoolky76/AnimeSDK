#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"
class AGELKCPKEPJ;
namespace RPG::AvatarSystem { class AvatarPath; }
namespace RPG::Client { class AvatarOutfitSlot; }
namespace RPG::Client { class AvatarOutfitUnit; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGELKCPKEPJ_AHKMECBPJLH_OFFSET UNITYSDK_OFFSET(0x18DD1420)
#define AGELKCPKEPJ_AKNMPKDGMNC_OFFSET UNITYSDK_OFFSET(0x18DD1470)
#define AGELKCPKEPJ_BNLEOGDNCOH_OFFSET UNITYSDK_OFFSET(0x18DD2550)
#define AGELKCPKEPJ_CGEIJCDMNEP_OFFSET UNITYSDK_OFFSET(0x18DD2070)
#define AGELKCPKEPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x18DD1280)
#define AGELKCPKEPJ_DAGIDDGMLDH_OFFSET UNITYSDK_OFFSET(0x18DD27D0)
#define AGELKCPKEPJ_DHCECDODIJN_OFFSET UNITYSDK_OFFSET(0x18DD14C0)
#define AGELKCPKEPJ_EBLLKCGHCNH_OFFSET UNITYSDK_OFFSET(0x18DD1FE0)
#define AGELKCPKEPJ_GAJMJHBFPMM_OFFSET UNITYSDK_OFFSET(0x18DD1620)
#define AGELKCPKEPJ_GFNNOLEIBPC_1_OFFSET UNITYSDK_OFFSET(0x18DD1B80)
#define AGELKCPKEPJ_GFNNOLEIBPC_OFFSET UNITYSDK_OFFSET(0x18DD16B0)
#define AGELKCPKEPJ_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x18DD1200)
#define AGELKCPKEPJ_JHBDGIOCLNP_OFFSET UNITYSDK_OFFSET(0x18DD23D0)
#define AGELKCPKEPJ_NCNPOOHGBNO_OFFSET UNITYSDK_OFFSET(0x18DD1590)
#define AGELKCPKEPJ_PHOBAIDKKJN_OFFSET UNITYSDK_OFFSET(0x18DD13D0)

inline static constexpr unsigned int AGELKCPKEPJ_TypeDefinitionIndex = 63920;

	class AGELKCPKEPJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitSlot*>* MFGEADHPLHO; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarOutfitUnit*>* EPLDLBFJODK; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarOutfitUnit*>* KHFBEGBEDAN; // 0x20
		static ::AGELKCPKEPJ** StaticGet_FLMODBLFAGD()
		{
			return (::AGELKCPKEPJ**)UnitySDK::FromName("", "AGELKCPKEPJ")->GetStaticField(0x4ECE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGELKCPKEPJ_CTOR_OFFSET))(this);
		}

		static ::AGELKCPKEPJ* GGBLHEHJBDO()
		{
			return ((::AGELKCPKEPJ*(*)())((::PBYTE)hIl2Cpp + AGELKCPKEPJ_GGBLHEHJBDO_OFFSET))();
		}

		::System::Int32 PHOBAIDKKJN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGELKCPKEPJ_PHOBAIDKKJN_OFFSET))(this);
		}

		::System::Int32 AHKMECBPJLH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGELKCPKEPJ_AHKMECBPJLH_OFFSET))(this);
		}

		::RPG::Client::AvatarOutfitSlot* DHCECDODIJN(::RPG::GameCore::PlayerOutfitSlotType a1)
		{
			return ((::RPG::Client::AvatarOutfitSlot*(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + AGELKCPKEPJ_DHCECDODIJN_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarOutfitUnit* NCNPOOHGBNO(::System::UInt32 a1)
		{
			return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGELKCPKEPJ_NCNPOOHGBNO_OFFSET))(this, a1);
		}

		::RPG::Client::AvatarOutfitUnit* GAJMJHBFPMM(::System::UInt32 a1)
		{
			return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGELKCPKEPJ_GAJMJHBFPMM_OFFSET))(this, a1);
		}

		::System::Void GFNNOLEIBPC(::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>* a1, ::RPG::AvatarSystem::AvatarPath* a2, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>*, ::RPG::AvatarSystem::AvatarPath*, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>*))((::PBYTE)hIl2Cpp + AGELKCPKEPJ_GFNNOLEIBPC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GFNNOLEIBPC_1(::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>* a1, ::RPG::GameCore::AvatarBaseType a2, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>*, ::RPG::GameCore::AvatarBaseType, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>*))((::PBYTE)hIl2Cpp + AGELKCPKEPJ_GFNNOLEIBPC_1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::AvatarOutfitSlot* EBLLKCGHCNH(::System::Int32 a1)
		{
			return ((::RPG::Client::AvatarOutfitSlot*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGELKCPKEPJ_EBLLKCGHCNH_OFFSET))(this, a1);
		}

		::System::Void CGEIJCDMNEP(::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>*))((::PBYTE)hIl2Cpp + AGELKCPKEPJ_CGEIJCDMNEP_OFFSET))(this, a1);
		}

		::System::Void JHBDGIOCLNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGELKCPKEPJ_JHBDGIOCLNP_OFFSET))(this);
		}

		::System::Void AKNMPKDGMNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGELKCPKEPJ_AKNMPKDGMNC_OFFSET))(this);
		}

		::System::Void BNLEOGDNCOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGELKCPKEPJ_BNLEOGDNCOH_OFFSET))(this);
		}

		::System::Void DAGIDDGMLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGELKCPKEPJ_DAGIDDGMLDH_OFFSET))(this);
		}

	};
