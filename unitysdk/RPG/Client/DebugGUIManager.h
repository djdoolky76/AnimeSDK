#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
class LOLEHFDDJKI;
namespace RPG::Client { class DebugGUIManager; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DEBUGGUIMANAGER_ADDGUI_OFFSET UNITYSDK_OFFSET(0xCBEA740)
#define RPG_CLIENT_DEBUGGUIMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xCBEA150)
#define RPG_CLIENT_DEBUGGUIMANAGER_BEGINCHANGECHECK_OFFSET UNITYSDK_OFFSET(0xCBEB8C0)
#define RPG_CLIENT_DEBUGGUIMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xCBEBB20)
#define RPG_CLIENT_DEBUGGUIMANAGER_ENDCHANGECHECK_OFFSET UNITYSDK_OFFSET(0xCBEB9B0)
#define RPG_CLIENT_DEBUGGUIMANAGER_GETCURRENTCONTENTSCALE_OFFSET UNITYSDK_OFFSET(0xCBEB290)
#define RPG_CLIENT_DEBUGGUIMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xCBEBB10)
#define RPG_CLIENT_DEBUGGUIMANAGER_ONGUI_OFFSET UNITYSDK_OFFSET(0xCBEA1A0)
#define RPG_CLIENT_DEBUGGUIMANAGER_POPCOLOR_OFFSET UNITYSDK_OFFSET(0xCBEB740)
#define RPG_CLIENT_DEBUGGUIMANAGER_POPCONTENTSCALE_OFFSET UNITYSDK_OFFSET(0xCBEB0F0)
#define RPG_CLIENT_DEBUGGUIMANAGER_POPGROUP_OFFSET UNITYSDK_OFFSET(0xCBEB420)
#define RPG_CLIENT_DEBUGGUIMANAGER_PUSHCOLOR_OFFSET UNITYSDK_OFFSET(0xCBEB570)
#define RPG_CLIENT_DEBUGGUIMANAGER_PUSHCONTENTSCALE_OFFSET UNITYSDK_OFFSET(0xCBEAC80)
#define RPG_CLIENT_DEBUGGUIMANAGER_PUSHGROUP_OFFSET UNITYSDK_OFFSET(0xCBEB320)
#define RPG_CLIENT_DEBUGGUIMANAGER_REMOVEGUI_OFFSET UNITYSDK_OFFSET(0xCBEA9E0)

namespace RPG::Client
{
	class DebugGUIManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean EnableGUI; // 0x18
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::LOLEHFDDJKI*>* KCBDMCOHJOA; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* IEDMPIEMCCL; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* IEOFPHMAACP; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Color>* OKDNJDECKIN; // 0x38
		::System::Collections::Generic::List_1<::System::Boolean>* EHGLOIHMGFG; // 0x40
		static ::RPG::Client::DebugGUIManager** StaticGet_EMLNOINPICJ()
		{
			return (::RPG::Client::DebugGUIManager**)UnitySDK::FromName("RPG.Client", "DebugGUIManager")->GetStaticField(0x201C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_ONGUI_OFFSET))(this);
		}

		static ::System::Void AddGUI(::LOLEHFDDJKI* a1)
		{
			return ((::System::Void(*)(::LOLEHFDDJKI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_ADDGUI_OFFSET))(a1);
		}

		static ::System::Void RemoveGUI(::LOLEHFDDJKI* a1)
		{
			return ((::System::Void(*)(::LOLEHFDDJKI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_REMOVEGUI_OFFSET))(a1);
		}

		::System::Void PushContentScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_PUSHCONTENTSCALE_OFFSET))(this, a1);
		}

		::System::Void PopContentScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_POPCONTENTSCALE_OFFSET))(this);
		}

		::System::Single GetCurrentContentScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_GETCURRENTCONTENTSCALE_OFFSET))(this);
		}

		::System::Void PushGroup(::System::Boolean a1, ::UnityEngine::Rect a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_PUSHGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void PopGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_POPGROUP_OFFSET))(this);
		}

		::System::Void PushColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_PUSHCOLOR_OFFSET))(this, a1);
		}

		::System::Void PopColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_POPCOLOR_OFFSET))(this);
		}

		::System::Void BeginChangeCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_BEGINCHANGECHECK_OFFSET))(this);
		}

		::System::Boolean EndChangeCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_ENDCHANGECHECK_OFFSET))(this);
		}

		static ::RPG::Client::DebugGUIManager* get_Instance()
		{
			return ((::RPG::Client::DebugGUIManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGGUIMANAGER_GET_INSTANCE_OFFSET))();
		}

	};
}
