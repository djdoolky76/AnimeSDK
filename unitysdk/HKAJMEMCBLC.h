#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class BIDHGAANLAL;
class GHMOOMMNDDN;
class KMGFDBOANJO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HKAJMEMCBLC_BLLOOGGOHMJ_OFFSET UNITYSDK_OFFSET(0x15D2ED20)
#define HKAJMEMCBLC_BPAMJGFFJGJ_OFFSET UNITYSDK_OFFSET(0x15D2E660)
#define HKAJMEMCBLC_CTOR_OFFSET UNITYSDK_OFFSET(0x15D2E340)
#define HKAJMEMCBLC_FOCPINICNJF_OFFSET UNITYSDK_OFFSET(0x15D2EF60)
#define HKAJMEMCBLC_FOKFEKAENDI_OFFSET UNITYSDK_OFFSET(0x15D2EAE0)
#define HKAJMEMCBLC_GET_BRIEFNAME_OFFSET UNITYSDK_OFFSET(0x15D2E400)
#define HKAJMEMCBLC_GET_COLLECTICONPATH_OFFSET UNITYSDK_OFFSET(0x15D2E4E0)
#define HKAJMEMCBLC_GET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0x15D2E440)
#define HKAJMEMCBLC_GET_DESC_OFFSET UNITYSDK_OFFSET(0x15D2E420)
#define HKAJMEMCBLC_GET_ICONPATHF_OFFSET UNITYSDK_OFFSET(0x15D2E480)
#define HKAJMEMCBLC_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15D2E460)
#define HKAJMEMCBLC_GET_ID_OFFSET UNITYSDK_OFFSET(0x15D2E3D0)
#define HKAJMEMCBLC_GET_ISACQUIRED_OFFSET UNITYSDK_OFFSET(0x15D2E5A0)
#define HKAJMEMCBLC_GET_ISCOLLECTABLE_OFFSET UNITYSDK_OFFSET(0x15D2E5C0)
#define HKAJMEMCBLC_GET_ISINHANDBOOK_OFFSET UNITYSDK_OFFSET(0x15D2E620)
#define HKAJMEMCBLC_GET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x15D2E540)
#define HKAJMEMCBLC_GET_LOWERREPLACEIDLIST_OFFSET UNITYSDK_OFFSET(0x15D2E600)
#define HKAJMEMCBLC_GET_MANACOST_OFFSET UNITYSDK_OFFSET(0x15D2E560)
#define HKAJMEMCBLC_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15D2E3E0)
#define HKAJMEMCBLC_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x15D2E580)
#define HKAJMEMCBLC_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x15D2E640)
#define HKAJMEMCBLC_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x15D2E500)
#define HKAJMEMCBLC_GET_SMALLICONPATHF_OFFSET UNITYSDK_OFFSET(0x15D2E4C0)
#define HKAJMEMCBLC_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x15D2E4A0)
#define HKAJMEMCBLC_GET_STORYDESC_OFFSET UNITYSDK_OFFSET(0x15D2E5E0)
#define HKAJMEMCBLC_GET_TAG_OFFSET UNITYSDK_OFFSET(0x15D2E520)
#define HKAJMEMCBLC_KILGDPBHGAI_OFFSET UNITYSDK_OFFSET(0x15D2E8A0)
#define HKAJMEMCBLC_OOINLBOOAPJ_OFFSET UNITYSDK_OFFSET(0x15D2F220)
#define HKAJMEMCBLC_PLOLOEBPKKN_OFFSET UNITYSDK_OFFSET(0x15D2F1A0)
#define HKAJMEMCBLC_SET_BRIEFNAME_OFFSET UNITYSDK_OFFSET(0x15D2E410)
#define HKAJMEMCBLC_SET_COLLECTICONPATH_OFFSET UNITYSDK_OFFSET(0x15D2E4F0)
#define HKAJMEMCBLC_SET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0x15D2E450)
#define HKAJMEMCBLC_SET_DESC_OFFSET UNITYSDK_OFFSET(0x15D2E430)
#define HKAJMEMCBLC_SET_ICONPATHF_OFFSET UNITYSDK_OFFSET(0x15D2E490)
#define HKAJMEMCBLC_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15D2E470)
#define HKAJMEMCBLC_SET_ISACQUIRED_OFFSET UNITYSDK_OFFSET(0x15D2E5B0)
#define HKAJMEMCBLC_SET_ISCOLLECTABLE_OFFSET UNITYSDK_OFFSET(0x15D2E5D0)
#define HKAJMEMCBLC_SET_ISINHANDBOOK_OFFSET UNITYSDK_OFFSET(0x15D2E630)
#define HKAJMEMCBLC_SET_KEYWORDS_OFFSET UNITYSDK_OFFSET(0x15D2E550)
#define HKAJMEMCBLC_SET_LOWERREPLACEIDLIST_OFFSET UNITYSDK_OFFSET(0x15D2E610)
#define HKAJMEMCBLC_SET_MANACOST_OFFSET UNITYSDK_OFFSET(0x15D2E570)
#define HKAJMEMCBLC_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15D2E3F0)
#define HKAJMEMCBLC_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x15D2E590)
#define HKAJMEMCBLC_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x15D2E650)
#define HKAJMEMCBLC_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x15D2E510)
#define HKAJMEMCBLC_SET_SMALLICONPATHF_OFFSET UNITYSDK_OFFSET(0x15D2E4D0)
#define HKAJMEMCBLC_SET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x15D2E4B0)
#define HKAJMEMCBLC_SET_STORYDESC_OFFSET UNITYSDK_OFFSET(0x15D2E5F0)
#define HKAJMEMCBLC_SET_TAG_OFFSET UNITYSDK_OFFSET(0x15D2E530)

inline static constexpr unsigned int HKAJMEMCBLC_TypeDefinitionIndex = 81078;

	class HKAJMEMCBLC : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _LowerReplaceIDList_k__BackingField; // 0x10
		::GHMOOMMNDDN* _Rarity_k__BackingField; // 0x18
		::System::String* _SmallIconPath_k__BackingField; // 0x20
		::BIDHGAANLAL* _Tag_k__BackingField; // 0x28
		::System::String* _IconPathF_k__BackingField; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* _DescParams_k__BackingField; // 0x38
		::System::Collections::Generic::IReadOnlyList_1<::KMGFDBOANJO*>* _Keywords_k__BackingField; // 0x40
		::System::String* _SmallIconPathF_k__BackingField; // 0x48
		::System::String* _IconPath_k__BackingField; // 0x50
		::System::String* _CollectIconPath_k__BackingField; // 0x58
		::RPG::Client::TextID _Desc_k__BackingField; // 0x60
		::System::UInt32 _Priority_k__BackingField; // 0x70
		::System::UInt32 _ID_k__BackingField; // 0x74
		::RPG::Client::TextID _BriefName_k__BackingField; // 0x78
		::RPG::Client::TextID _StoryDesc_k__BackingField; // 0x88
		::RPG::GameCore::FateRinHouguOwnerType _Owner_k__BackingField; // 0x98
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0xA0
		::System::Int32 _ManaCost_k__BackingField; // 0xB0
		::System::Boolean _IsAcquired_k__BackingField; // 0xB4
		::System::Boolean _IsInHandbook_k__BackingField; // 0xB5
		::System::Boolean _IsCollectable_k__BackingField; // 0xB6
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_NAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_BriefName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_BRIEFNAME_OFFSET))(this);
		}

		::System::Void set_BriefName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_BRIEFNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_DESC_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_DESCPARAMS_OFFSET))(this);
		}

		::System::Void set_DescParams(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_DESCPARAMS_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_IconPathF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_ICONPATHF_OFFSET))(this);
		}

		::System::Void set_IconPathF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_ICONPATHF_OFFSET))(this, a1);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::Void set_SmallIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_SMALLICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_SmallIconPathF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_SMALLICONPATHF_OFFSET))(this);
		}

		::System::Void set_SmallIconPathF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_SMALLICONPATHF_OFFSET))(this, a1);
		}

		::System::String* get_CollectIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_COLLECTICONPATH_OFFSET))(this);
		}

		::System::Void set_CollectIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_COLLECTICONPATH_OFFSET))(this, a1);
		}

		::GHMOOMMNDDN* get_Rarity()
		{
			return ((::GHMOOMMNDDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::GHMOOMMNDDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMOOMMNDDN*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_RARITY_OFFSET))(this, a1);
		}

		::BIDHGAANLAL* get_Tag()
		{
			return ((::BIDHGAANLAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_TAG_OFFSET))(this);
		}

		::System::Void set_Tag(::BIDHGAANLAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIDHGAANLAL*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_TAG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KMGFDBOANJO*>* get_Keywords()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KMGFDBOANJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_KEYWORDS_OFFSET))(this);
		}

		::System::Void set_Keywords(::System::Collections::Generic::IReadOnlyList_1<::KMGFDBOANJO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::KMGFDBOANJO*>*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_KEYWORDS_OFFSET))(this, a1);
		}

		::System::Int32 get_ManaCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_MANACOST_OFFSET))(this);
		}

		::System::Void set_ManaCost(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_MANACOST_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateRinHouguOwnerType get_Owner()
		{
			return ((::RPG::GameCore::FateRinHouguOwnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_OWNER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAcquired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_ISACQUIRED_OFFSET))(this);
		}

		::System::Void set_IsAcquired(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_ISACQUIRED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCollectable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_ISCOLLECTABLE_OFFSET))(this);
		}

		::System::Void set_IsCollectable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_ISCOLLECTABLE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_StoryDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_STORYDESC_OFFSET))(this);
		}

		::System::Void set_StoryDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_STORYDESC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_LowerReplaceIDList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_LOWERREPLACEIDLIST_OFFSET))(this);
		}

		::System::Void set_LowerReplaceIDList(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_LOWERREPLACEIDLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInHandbook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_ISINHANDBOOK_OFFSET))(this);
		}

		::System::Void set_IsInHandbook(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_ISINHANDBOOK_OFFSET))(this, a1);
		}

		::System::UInt32 get_Priority()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_SET_PRIORITY_OFFSET))(this, a1);
		}

		::System::Boolean BPAMJGFFJGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_BPAMJGFFJGJ_OFFSET))(this);
		}

		::System::Boolean KILGDPBHGAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_KILGDPBHGAI_OFFSET))(this);
		}

		::System::Boolean FOKFEKAENDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_FOKFEKAENDI_OFFSET))(this);
		}

		::System::Boolean BLLOOGGOHMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_BLLOOGGOHMJ_OFFSET))(this);
		}

		::System::Boolean FOCPINICNJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_FOCPINICNJF_OFFSET))(this);
		}

		::System::Boolean PLOLOEBPKKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_PLOLOEBPKKN_OFFSET))(this);
		}

		::System::Boolean OOINLBOOAPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAJMEMCBLC_OOINLBOOAPJ_OFFSET))(this);
		}

	};
