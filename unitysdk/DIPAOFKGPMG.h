#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/APCGKBOPGJL.h"
class AJHEFPNNKKC;
class BDICLAJIEKA;
class EOCFEBFDGOH;
class GIDHOABFFFP;
class NNOALJAEMCG;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DIPAOFKGPMG_CTOR_OFFSET UNITYSDK_OFFSET(0xF226230)
#define DIPAOFKGPMG_FFCBBLFHINK_OFFSET UNITYSDK_OFFSET(0xF225840)
#define DIPAOFKGPMG_GET_PREVIEWAVATARREPOSITORY_OFFSET UNITYSDK_OFFSET(0xF225660)
#define DIPAOFKGPMG_GET_PROFILEBUILDER_OFFSET UNITYSDK_OFFSET(0xF225640)
#define DIPAOFKGPMG_GET_QUERYAVATARSKINSERVICE_OFFSET UNITYSDK_OFFSET(0xF225680)
#define DIPAOFKGPMG_GET_QUERYMULTIPLEPATHCONFIGSERVICE_OFFSET UNITYSDK_OFFSET(0xF2256A0)
#define DIPAOFKGPMG_IEPGILBINCO_OFFSET UNITYSDK_OFFSET(0xF225E10)
#define DIPAOFKGPMG_KIHJCLHPDLG_OFFSET UNITYSDK_OFFSET(0xF226070)
#define DIPAOFKGPMG_NNIFHKHKKHN_OFFSET UNITYSDK_OFFSET(0xF225B00)
#define DIPAOFKGPMG_PFDPNMJJCBP_OFFSET UNITYSDK_OFFSET(0xF2256C0)
#define DIPAOFKGPMG_PJAEOCCPEIG_OFFSET UNITYSDK_OFFSET(0xF225790)
#define DIPAOFKGPMG_SET_PREVIEWAVATARREPOSITORY_OFFSET UNITYSDK_OFFSET(0xF225670)
#define DIPAOFKGPMG_SET_PROFILEBUILDER_OFFSET UNITYSDK_OFFSET(0xF225650)
#define DIPAOFKGPMG_SET_QUERYAVATARSKINSERVICE_OFFSET UNITYSDK_OFFSET(0xF225690)
#define DIPAOFKGPMG_SET_QUERYMULTIPLEPATHCONFIGSERVICE_OFFSET UNITYSDK_OFFSET(0xF2256B0)

inline static constexpr unsigned int DIPAOFKGPMG_TypeDefinitionIndex = 62698;

	class DIPAOFKGPMG : public ::System::Object
	{
	public:
		::EOCFEBFDGOH* _QueryAvatarSkinService_k__BackingField; // 0x10
		::AJHEFPNNKKC* _QueryMultiplePathConfigService_k__BackingField; // 0x18
		::BDICLAJIEKA* _PreviewAvatarRepository_k__BackingField; // 0x20
		::GIDHOABFFFP* _ProfileBuilder_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_CTOR_OFFSET))(this);
		}

		::GIDHOABFFFP* get_ProfileBuilder()
		{
			return ((::GIDHOABFFFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_GET_PROFILEBUILDER_OFFSET))(this);
		}

		::System::Void set_ProfileBuilder(::GIDHOABFFFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_SET_PROFILEBUILDER_OFFSET))(this, a1);
		}

		::BDICLAJIEKA* get_PreviewAvatarRepository()
		{
			return ((::BDICLAJIEKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_GET_PREVIEWAVATARREPOSITORY_OFFSET))(this);
		}

		::System::Void set_PreviewAvatarRepository(::BDICLAJIEKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDICLAJIEKA*))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_SET_PREVIEWAVATARREPOSITORY_OFFSET))(this, a1);
		}

		::EOCFEBFDGOH* get_QueryAvatarSkinService()
		{
			return ((::EOCFEBFDGOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_GET_QUERYAVATARSKINSERVICE_OFFSET))(this);
		}

		::System::Void set_QueryAvatarSkinService(::EOCFEBFDGOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOCFEBFDGOH*))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_SET_QUERYAVATARSKINSERVICE_OFFSET))(this, a1);
		}

		::AJHEFPNNKKC* get_QueryMultiplePathConfigService()
		{
			return ((::AJHEFPNNKKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_GET_QUERYMULTIPLEPATHCONFIGSERVICE_OFFSET))(this);
		}

		::System::Void set_QueryMultiplePathConfigService(::AJHEFPNNKKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJHEFPNNKKC*))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_SET_QUERYMULTIPLEPATHCONFIGSERVICE_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* PFDPNMJJCBP(::APCGKBOPGJL a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_PFDPNMJJCBP_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* PJAEOCCPEIG(::APCGKBOPGJL a1, ::NNOALJAEMCG* a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::APCGKBOPGJL, ::NNOALJAEMCG*))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_PJAEOCCPEIG_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* FFCBBLFHINK(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_FFCBBLFHINK_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::AvatarSystem::IAvatar* NNIFHKHKKHN(::RPG::AvatarSystem::IAvatar* a1, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_NNIFHKHKKHN_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* IEPGILBINCO(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::RelicItemData* a2)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_IEPGILBINCO_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::IAvatar* KIHJCLHPDLG(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIPAOFKGPMG_KIHJCLHPDLG_OFFSET))(this, a1);
		}

	};
