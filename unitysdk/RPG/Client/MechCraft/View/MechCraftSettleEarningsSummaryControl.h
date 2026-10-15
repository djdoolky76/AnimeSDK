#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class FFLFKEHLPBE;
class LMJCAJNDODP;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client::MechCraft::View { class MechCraftSettleEarningsSummaryControlBinder; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD663530)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD662D70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD662DB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROL_NGFGKIFCEMB_OFFSET UNITYSDK_OFFSET(0xD6633A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROL_PACMHPGMNAM_OFFSET UNITYSDK_OFFSET(0xD662F40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROL_PLAYITEMFADEIN_OFFSET UNITYSDK_OFFSET(0xD6610F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD660BA0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftSettleEarningsSummaryControl_TypeDefinitionIndex = 80033;

	class MechCraftSettleEarningsSummaryControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::FFLFKEHLPBE* LFGMLJCCPCH; // 0x18
		::ObservableCollections::ObservableList_1<::LMJCAJNDODP*>* GCIKKMGIPIO; // 0x20
		::System::Boolean PHBCJPCHDHC; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::Client::MechCraft::View::MechCraftSettleEarningsSummaryControlBinder* _Binder; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROL_CTOR_OFFSET))(this);
		}

		::FFLFKEHLPBE* get_Content()
		{
			return ((::FFLFKEHLPBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::FFLFKEHLPBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFLFKEHLPBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::FFLFKEHLPBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFLFKEHLPBE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

		::System::Void PACMHPGMNAM(::ObservableCollections::ObservableList_1<::LMJCAJNDODP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ObservableCollections::ObservableList_1<::LMJCAJNDODP*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROL_PACMHPGMNAM_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* NGFGKIFCEMB(::RPG::Client::StaticListView* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROL_NGFGKIFCEMB_OFFSET))(this, a1, a2);
		}

		::System::Void PlayItemFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTSETTLEEARNINGSSUMMARYCONTROL_PLAYITEMFADEIN_OFFSET))(this);
		}

	};
}
