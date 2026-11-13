#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class AGDPEHNHDMI;
class DMDPOFBLBIE;
class GABKNKLLMNP;
class GFNICBDGGFI;
class LAIJLALGDLB;
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore::Booklet { class ElementConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BOOKLETVIEW_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1C57E090)
#define RPG_CLIENT_BOOKLETVIEW_ADJUSTUIADAPTATION_OFFSET UNITYSDK_OFFSET(0x1C57D3F0)
#define RPG_CLIENT_BOOKLETVIEW_ATTACHPLUGIN_OFFSET UNITYSDK_OFFSET(0x1C57E2C0)
#define RPG_CLIENT_BOOKLETVIEW_CHECKCANSKIP_OFFSET UNITYSDK_OFFSET(0x1C57D430)
#define RPG_CLIENT_BOOKLETVIEW_CHECKISPLAYING_OFFSET UNITYSDK_OFFSET(0x1C57D8B0)
#define RPG_CLIENT_BOOKLETVIEW_CHECKISREPLAYING_OFFSET UNITYSDK_OFFSET(0x1C57DAF0)
#define RPG_CLIENT_BOOKLETVIEW_CREATEPANEL_OFFSET UNITYSDK_OFFSET(0x1C57E480)
#define RPG_CLIENT_BOOKLETVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C57C200)
#define RPG_CLIENT_BOOKLETVIEW_DESTROYELEMENT_OFFSET UNITYSDK_OFFSET(0x1C57A190)
#define RPG_CLIENT_BOOKLETVIEW_DESTROYPANEL_OFFSET UNITYSDK_OFFSET(0x1C57E4F0)
#define RPG_CLIENT_BOOKLETVIEW_DESTROY_OFFSET UNITYSDK_OFFSET(0x1C57B730)
#define RPG_CLIENT_BOOKLETVIEW_FINDELEMENT_OFFSET UNITYSDK_OFFSET(0x1C57DFC0)
#define RPG_CLIENT_BOOKLETVIEW_FIREEVENT_OFFSET UNITYSDK_OFFSET(0x1C57BC20)
#define RPG_CLIENT_BOOKLETVIEW_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1C57BA00)
#define RPG_CLIENT_BOOKLETVIEW_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1C57D270)
#define RPG_CLIENT_BOOKLETVIEW_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1C57D250)
#define RPG_CLIENT_BOOKLETVIEW_GOTOSECTION_OFFSET UNITYSDK_OFFSET(0x1C57D290)
#define RPG_CLIENT_BOOKLETVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x1C57AF30)
#define RPG_CLIENT_BOOKLETVIEW_INSTANTIATEELEMENT_OFFSET UNITYSDK_OFFSET(0x1C579D30)
#define RPG_CLIENT_BOOKLETVIEW_PLAY_OFFSET UNITYSDK_OFFSET(0x1C57D370)
#define RPG_CLIENT_BOOKLETVIEW_REPLAY_OFFSET UNITYSDK_OFFSET(0x1C57DD30)
#define RPG_CLIENT_BOOKLETVIEW_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1C57D280)
#define RPG_CLIENT_BOOKLETVIEW_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x1C57D260)
#define RPG_CLIENT_BOOKLETVIEW_TRYSKIP_OFFSET UNITYSDK_OFFSET(0x1C57D670)
#define RPG_CLIENT_BOOKLETVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C57E560)
#define RPG_CLIENT_BOOKLETVIEW__CLEARUPDATABLELIST_OFFSET UNITYSDK_OFFSET(0x1C57DEC0)
#define RPG_CLIENT_BOOKLETVIEW__DETACHALLPLUGINS_OFFSET UNITYSDK_OFFSET(0x1C57DDC0)
#define RPG_CLIENT_BOOKLETVIEW__GETPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1C57DF60)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletView_TypeDefinitionIndex = 74473;

	class BookletView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::GABKNKLLMNP*>* _Plugins; // 0x18
		::System::Collections::Generic::List_1<::LAIJLALGDLB*>* _UpdatableList; // 0x20
		::System::Action_1<::RPG::Client::BookletLuaPanelParam*>* _PanelCreator; // 0x28
		::System::Action_1<::System::UInt32>* _PanelDestroyer; // 0x30
		::RPG::Client::UIController* _Owner_k__BackingField; // 0x38
		::RPG::Client::Booklet* _Context_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_CTOR_OFFSET))(this);
		}

		::RPG::Client::UIController* get_Owner()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_SET_OWNER_OFFSET))(this, a1);
		}

		::RPG::Client::Booklet* get_Context()
		{
			return ((::RPG::Client::Booklet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::RPG::Client::Booklet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Booklet*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_SET_CONTEXT_OFFSET))(this, a1);
		}

		::System::Void GotoSection(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_GOTOSECTION_OFFSET))(this, a1, a2);
		}

		::System::Void AdjustUIAdaptation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_ADJUSTUIADAPTATION_OFFSET))(this);
		}

		::System::Boolean CheckCanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_CHECKCANSKIP_OFFSET))(this);
		}

		::System::Boolean TrySkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_TRYSKIP_OFFSET))(this);
		}

		::System::Void ForceSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_FORCESKIP_OFFSET))(this);
		}

		::System::Boolean CheckIsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_CHECKISPLAYING_OFFSET))(this);
		}

		::System::Boolean CheckIsReplaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_CHECKISREPLAYING_OFFSET))(this);
		}

		::System::Void Replay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_REPLAY_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::UIController* a1, ::RPG::Client::Booklet* a2, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>* a3, ::System::Action_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::Booklet*, ::System::Action_1<::RPG::Client::BookletLuaPanelParam*>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_DESTROY_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_PLAY_OFFSET))(this);
		}

		::DMDPOFBLBIE* InstantiateElement(::UnityEngine::Transform* a1, ::DMDPOFBLBIE* a2, ::RPG::GameCore::Booklet::ElementConfig* a3)
		{
			return ((::DMDPOFBLBIE*(*)(::PVOID, ::UnityEngine::Transform*, ::DMDPOFBLBIE*, ::RPG::GameCore::Booklet::ElementConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_INSTANTIATEELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DestroyElement(::DMDPOFBLBIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMDPOFBLBIE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_DESTROYELEMENT_OFFSET))(this, a1);
		}

		::DMDPOFBLBIE* FindElement(::System::UInt32 a1)
		{
			return ((::DMDPOFBLBIE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_FINDELEMENT_OFFSET))(this, a1);
		}

		::System::Void FireEvent(::GFNICBDGGFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFNICBDGGFI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_FIREEVENT_OFFSET))(this, a1);
		}

		::System::Void AttachPlugin(::GABKNKLLMNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GABKNKLLMNP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_ATTACHPLUGIN_OFFSET))(this, a1);
		}

		::System::Void Accept(::AGDPEHNHDMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGDPEHNHDMI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_ACCEPT_OFFSET))(this, a1);
		}

		::System::Void CreatePanel(::RPG::Client::BookletLuaPanelParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookletLuaPanelParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_CREATEPANEL_OFFSET))(this, a1);
		}

		::System::Void DestroyPanel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_DESTROYPANEL_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW_UPDATE_OFFSET))(this);
		}

		::System::String* _GetPrefabPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW__GETPREFABPATH_OFFSET))(this, a1);
		}

		::System::Void _DetachAllPlugins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW__DETACHALLPLUGINS_OFFSET))(this);
		}

		::System::Void _ClearUpdatableList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETVIEW__CLEARUPDATABLELIST_OFFSET))(this);
		}

	};
}
