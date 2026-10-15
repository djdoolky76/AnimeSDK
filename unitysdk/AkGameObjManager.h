#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkGameObj;
class AkGameObjManager;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKGAMEOBJMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F56A250)
#define AKGAMEOBJMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F569D70)
#define AKGAMEOBJMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1F569C70)
#define AKGAMEOBJMANAGER_REGISTERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x1F5674D0)
#define AKGAMEOBJMANAGER_REGISTERLISTENERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x1F548B50)
#define AKGAMEOBJMANAGER_SETMAXPROCESSCOUNTPERFRAME_OFFSET UNITYSDK_OFFSET(0x1F569E70)
#define AKGAMEOBJMANAGER_TERMINATE_OFFSET UNITYSDK_OFFSET(0x1F569DD0)
#define AKGAMEOBJMANAGER_UNREGISTERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x1F567980)
#define AKGAMEOBJMANAGER_UNREGISTERLISTENERGAMEOBJ_OFFSET UNITYSDK_OFFSET(0x1F548E80)
#define AKGAMEOBJMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F569ED0)

inline static constexpr unsigned int AkGameObjManager_TypeDefinitionIndex = 44845;

	class AkGameObjManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AkGameObj*>* m_ListenerGameObjs; // 0x10
		::System::Collections::Generic::List_1<::AkGameObj*>* m_GameObjs; // 0x18
		::System::Int32 index; // 0x20
		static ::AkGameObjManager** StaticGet_m_Instance()
		{
			return (::AkGameObjManager**)UnitySDK::FromName("", "AkGameObjManager")->GetStaticField(0xC7C0);
		}

		static ::System::Int32* StaticGet__MaxProcessCountPerFrame()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AkGameObjManager")->GetStaticField(0x2AB0);
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
