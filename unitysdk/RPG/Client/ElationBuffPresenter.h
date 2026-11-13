#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class DEKIPIJNJBJ;
class LDJIOJPKFAJ;
namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::Client { class ElationBattleBuffViewData; }
namespace RPG::Client { class ElationBuffPresenter; }
namespace RPG::Client { class ElationBuffPresenterUIParam; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ELATIONBUFFPRESENTER_CREAT_OFFSET UNITYSDK_OFFSET(0x189B6070)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_CTOR_OFFSET UNITYSDK_OFFSET(0x189B6140)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_ONCLOSEOVERVIEWCLICK_OFFSET UNITYSDK_OFFSET(0x189B7060)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_ONOPENOVERVIEWCLICK_OFFSET UNITYSDK_OFFSET(0x189B6FE0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x189B61A0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER__MERGEBUFFDATABYLIFE_OFFSET UNITYSDK_OFFSET(0x189B68C0)
#define RPG_CLIENT_ELATIONBUFFPRESENTER__REFRESHICONPREFAB_OFFSET UNITYSDK_OFFSET(0x189B6750)

namespace RPG::Client
{
	inline static constexpr unsigned int ElationBuffPresenter_TypeDefinitionIndex = 73172;

	class ElationBuffPresenter : public ::System::Object
	{
	public:
		::UnityEngine::UI::Button* _CloseOverviewBtn; // 0x10
		::UnityEngine::Transform* _NodeMaxHint; // 0x18
		::UnityEngine::UI::Text* _TotalDescText; // 0x20
		::UnityEngine::GameObject* _IconRoot; // 0x28
		::UnityEngine::Transform* _LineBottom; // 0x30
		::UnityEngine::Transform* _NodeMax; // 0x38
		::RPG::Client::PrefabLoadMeta* _PrefabLoadMeta; // 0x40
		::UnityEngine::UI::Text* _TotalNihiluxDescText; // 0x48
		::RPG::Client::NodeListViewPanel_1<::LDJIOJPKFAJ*>* _ElationBuffList; // 0x50
		::UnityEngine::UI::Text* _TextTitle; // 0x58
		::UnityEngine::UI::Text* _TotalPointText; // 0x60
		::UnityEngine::UI::Button* _OpenOverviewBtn; // 0x68
		::UnityEngine::Transform* _NodeDesc; // 0x70
		::System::Nullable_1<::System::Int32> _IconPrefabIndex; // 0x78
		::System::Void _ctor(::RPG::Client::ElationBuffPresenterUIParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElationBuffPresenterUIParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ElationBuffPresenter* Creat(::RPG::Client::ElationBuffPresenterUIParam* a1)
		{
			return ((::RPG::Client::ElationBuffPresenter*(*)(::RPG::Client::ElationBuffPresenterUIParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_CREAT_OFFSET))(a1);
		}

		::System::Void SetupView(::RPG::Client::ElationBattleBuffGroupViewData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElationBattleBuffGroupViewData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_SETUPVIEW_OFFSET))(this, a1);
		}

		::System::Void _RefreshIconPrefab(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER__REFRESHICONPREFAB_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::DEKIPIJNJBJ*>* _MergeBuffDataByLife(::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>* a1, ::System::Single a2)
		{
			return ((::System::Collections::Generic::List_1<::DEKIPIJNJBJ*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER__MERGEBUFFDATABYLIFE_OFFSET))(this, a1, a2);
		}

		::System::Void OnOpenOverviewClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_ONOPENOVERVIEWCLICK_OFFSET))(this);
		}

		::System::Void OnCloseOverviewClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER_ONCLOSEOVERVIEWCLICK_OFFSET))(this);
		}

	};
}
