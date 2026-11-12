#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER_CTOR_OFFSET UNITYSDK_OFFSET(0xD170440)
#define RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER__INOVKE_OFFSET UNITYSDK_OFFSET(0xD1704F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER__TIMEOUTINVOKE_OFFSET UNITYSDK_OFFSET(0xD170560)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_PreloadLoadFinishCallbackWrapper_TypeDefinitionIndex = 60936;

	class BattleAssetPreload_PreloadLoadFinishCallbackWrapper : public ::System::Object
	{
	public:
		::System::String* _TimeoutMsg; // 0x10
		::System::Action* TimeoutInvokeDelg; // 0x18
		::System::Action* _OnLoadFinish; // 0x20
		::System::Action* InvokeDelg; // 0x28
		::System::Void _ctor(::System::Action* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _Inovke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER__INOVKE_OFFSET))(this);
		}

		::System::Void _TimeoutInvoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_PRELOADLOADFINISHCALLBACKWRAPPER__TIMEOUTINVOKE_OFFSET))(this);
		}

	};
}
