#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace RPG::Client::UI::UIStateCtrl { class MaterialSwitchTarget; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define CDCOFOOIDCB_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC7626A0)
#define CDCOFOOIDCB_CTOR_OFFSET UNITYSDK_OFFSET(0xC7625A0)
#define CDCOFOOIDCB_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC7626D0)
#define CDCOFOOIDCB_INVOKE_OFFSET UNITYSDK_OFFSET(0xC762690)

	class CDCOFOOIDCB : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CDCOFOOIDCB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>* Invoke(::UnityEngine::Component* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CDCOFOOIDCB_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Component* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Component*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CDCOFOOIDCB_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::UI::UIStateCtrl::MaterialSwitchTarget*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CDCOFOOIDCB_ENDINVOKE_OFFSET))(this, a1);
		}

	};
