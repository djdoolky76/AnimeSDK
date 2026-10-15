#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkGameObj;
class AkGameObjManager;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKGAMEOBJMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F598030)
#define AKGAMEOBJMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F597B50)
#define AKGAMEOBJMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1F597A50)
#define AKGAMEOBJMANAGER_REGISTERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x1F5952B0)
#define AKGAMEOBJMANAGER_REGISTERLISTENERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x1F576910)
#define AKGAMEOBJMANAGER_SETMAXPROCESSCOUNTPERFRAME_OFFSET UNITYSDK_OFFSET(0x1F597C50)
#define AKGAMEOBJMANAGER_TERMINATE_OFFSET UNITYSDK_OFFSET(0x1F597BB0)
#define AKGAMEOBJMANAGER_UNREGISTERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x1F595760)
#define AKGAMEOBJMANAGER_UNREGISTERLISTENERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x1F576C40)
#define AKGAMEOBJMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F597CB0)

	class AkGameObjManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AkGameObj*>* m_GameObjs; // 0x10
		::System::Collections::Generic::List_1<::AkGameObj*>* m_ListenerGameObjs; // 0x18
		::System::Int32 index; // 0x20
		static ::AkGameObjManager** StaticGet_m_Instance()
		{
			return (::AkGameObjManager**)UnitySDK::FromName("", "AkGameObjManager")->GetStaticField(0xB820);
		}

		static ::System::Int32* StaticGet__MaxProcessCountPerFrame()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AkGameObjManager")->GetStaticField(0x2840);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_CCTOR_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_INIT_OFFSET))();
		}

		static ::System::Void Terminate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_TERMINATE_OFFSET))();
		}

		static ::System::Void RegisterGameObj(::AkGameObj* a1)
		{
			return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_REGISTERGAMEOBJ_OFFSET))(a1);
		}

		static ::System::Void UnregisterGameObj(::AkGameObj* a1)
		{
			return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_UNREGISTERGAMEOBJ_OFFSET))(a1);
		}

		static ::System::Void RegisterListenerGameObj(::AkGameObj* a1)
		{
			return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_REGISTERLISTENERGAMEOBJ_OFFSET))(a1);
		}

		static ::System::Void UnregisterListenerGameObj(::AkGameObj* a1)
		{
			return ((::System::Void(*)(::AkGameObj*))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_UNREGISTERLISTENERGAMEOBJ_OFFSET))(a1);
		}

		static ::System::Void SetMaxProcessCountPerFrame(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_SETMAXPROCESSCOUNTPERFRAME_OFFSET))(a1);
		}

		static ::System::Void Update()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGAMEOBJMANAGER_UPDATE_OFFSET))();
		}

	};
