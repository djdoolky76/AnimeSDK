#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELDKEKGOENH.h"
#include "unitysdk/RPG/GameCore/TimelineType.h"
#include "unitysdk/RPGTools/Timeline/BindInfo.h"
namespace RPGTools::Timeline { class ArchiveAsset; }
namespace RPGTools::Timeline { class ArchiveCamera; }
namespace RPGTools::Timeline { class ArchiveCharacter; }
namespace RPGTools::Timeline { class ArchiveLevelBlock; }
namespace RPGTools::Timeline { class ArchiveStoryArea; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define BEGFNBKEBPK_CGGPGFMCDLC_OFFSET UNITYSDK_OFFSET(0x1631B570)
#define BEGFNBKEBPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1631B8E0)
#define BEGFNBKEBPK_DPADCJPDADK_OFFSET UNITYSDK_OFFSET(0x1631AFE0)
#define BEGFNBKEBPK_FOKMDJHNDIM_OFFSET UNITYSDK_OFFSET(0x1631B7D0)
#define BEGFNBKEBPK_GBLLFFCFJED_OFFSET UNITYSDK_OFFSET(0x1631AEF0)
#define BEGFNBKEBPK_HCFKFPGIJAK_OFFSET UNITYSDK_OFFSET(0x1631AF50)
#define BEGFNBKEBPK_IPMFEOJKEGA_OFFSET UNITYSDK_OFFSET(0x1631A960)
#define BEGFNBKEBPK_KGOICHFICLG_OFFSET UNITYSDK_OFFSET(0x1631B280)
#define BEGFNBKEBPK_MAKLFEOPNMC_OFFSET UNITYSDK_OFFSET(0x1631ADD0)
#define BEGFNBKEBPK_NMGBFGFIMPG_OFFSET UNITYSDK_OFFSET(0x1631B170)
#define BEGFNBKEBPK_PJKGPFLHDMF_OFFSET UNITYSDK_OFFSET(0x1631AD60)

	class BEGFNBKEBPK : public ::ELDKEKGOENH
	{
	public:
		::System::String* DLELGHBNNMG; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* JKNJMAOECBA; // 0x20
		::RPG::GameCore::TimelineType MAFFDHHFKEM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGFNBKEBPK_CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* IPMFEOJKEGA(::RPGTools::Timeline::ArchiveAsset* a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + BEGFNBKEBPK_IPMFEOJKEGA_OFFSET))(this, a1);
		}

		::System::Void DPADCJPDADK(::RPGTools::Timeline::ArchiveAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveAsset*))((::PBYTE)hIl2Cpp + BEGFNBKEBPK_DPADCJPDADK_OFFSET))(this, a1);
		}

		::UnityEngine::Object* KGOICHFICLG(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + BEGFNBKEBPK_KGOICHFICLG_OFFSET))(this, a1, a2);
		}

		::System::Void CGGPGFMCDLC(::RPGTools::Timeline::BindInfo a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::BindInfo, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BEGFNBKEBPK_CGGPGFMCDLC_OFFSET))(this, a1, a2);
		}

		::System::Void FOKMDJHNDIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGFNBKEBPK_FOKMDJHNDIM_OFFSET))(this);
		}

		::UnityEngine::Object* PJKGPFLHDMF(::RPGTools::Timeline::ArchiveCharacter* a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::RPGTools::Timeline::ArchiveCharacter*))((::PBYTE)hIl2Cpp + BEGFNBKEBPK_PJKGPFLHDMF_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* MAKLFEOPNMC(::RPGTools::Timeline::ArchiveLevelBlock* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPGTools::Timeline::ArchiveLevelBlock*))((::PBYTE)hIl2Cpp + BEGFNBKEBPK_MAKLFEOPNMC_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GBLLFFCFJED(::RPGTools::Timeline::ArchiveStoryArea* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPGTools::Timeline::ArchiveStoryArea*))((::PBYTE)hIl2Cpp + BEGFNBKEBPK_GBLLFFCFJED_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* HCFKFPGIJAK(::RPGTools::Timeline::ArchiveCamera* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPGTools::Timeline::ArchiveCamera*))((::PBYTE)hIl2Cpp + BEGFNBKEBPK_HCFKFPGIJAK_OFFSET))(this, a1);
		}

		::System::Void NMGBFGFIMPG(::RPGTools::Timeline::ArchiveCharacter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::ArchiveCharacter*))((::PBYTE)hIl2Cpp + BEGFNBKEBPK_NMGBFGFIMPG_OFFSET))(this, a1);
		}

	};
