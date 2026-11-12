#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace RPG::Client::LimaoNews { class LimaoNewsPopWindow; }
namespace Sofa { class BaseSofaWindow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW_CREATELUAWINDOW_OFFSET UNITYSDK_OFFSET(0xDE09FB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW_CREATE_1_OFFSET UNITYSDK_OFFSET(0xDE09F20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW_CREATE_OFFSET UNITYSDK_OFFSET(0xDE09E80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xDE09F10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW_SHOWSEQUENTIALLY_OFFSET UNITYSDK_OFFSET(0xDDF8020)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW_SHOW_OFFSET UNITYSDK_OFFSET(0xDE0A3C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW__CREATELUACONTROLLER_OFFSET UNITYSDK_OFFSET(0xDE0A580)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW__SHOWFROM_OFFSET UNITYSDK_OFFSET(0xDE0A050)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsPopWindow_TypeDefinitionIndex = 83128;

	class LimaoNewsPopWindow : public ::System::Object
	{
	public:
		::Sofa::BaseSofaWindow* _SofaWindow; // 0x10
		::System::String* _LuaPath; // 0x18
		::Il2CppArray<::System::Object*>* _LuaArgs; // 0x20
		::RPG::Client::UIController* _LuaController; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsPopWindow* Create(::Sofa::BaseSofaWindow* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPopWindow*(*)(::Sofa::BaseSofaWindow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsPopWindow* Create_1(::RPG::Client::UIController* a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPopWindow*(*)(::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsPopWindow* CreateLuaWindow(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsPopWindow*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW_CREATELUAWINDOW_OFFSET))(a1, a2);
		}

		static ::System::Void ShowSequentially(::System::Collections::Generic::IList_1<::RPG::Client::LimaoNews::LimaoNewsPopWindow*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::RPG::Client::LimaoNews::LimaoNewsPopWindow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW_SHOWSEQUENTIALLY_OFFSET))(a1);
		}

		::System::Boolean Show(::System::Action* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW_SHOW_OFFSET))(this, a1);
		}

		static ::System::Void _ShowFrom(::System::Collections::Generic::IList_1<::RPG::Client::LimaoNews::LimaoNewsPopWindow*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::RPG::Client::LimaoNews::LimaoNewsPopWindow*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW__SHOWFROM_OFFSET))(a1, a2);
		}

		::RPG::Client::UIController* _CreateLuaController()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSPOPWINDOW__CREATELUACONTROLLER_OFFSET))(this);
		}

	};
}
