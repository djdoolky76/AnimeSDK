#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTLOADINGVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C96BB60)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTLOADINGVIEWMODEL_FLUSHCLOSE_OFFSET UNITYSDK_OFFSET(0x1C96BDB0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTLOADINGVIEWMODEL_ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0x1C96BBD0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTLOADINGVIEWMODEL_ONREADY_OFFSET UNITYSDK_OFFSET(0x1C96BB70)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTLOADINGVIEWMODEL_REQUESTCLOSE_OFFSET UNITYSDK_OFFSET(0x1C96BD10)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTLOADINGVIEWMODEL__CLOSEIFREADY_OFFSET UNITYSDK_OFFSET(0x1C96BC90)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertLoadingViewModel_TypeDefinitionIndex = 77117;

	class ComicDessertLoadingViewModel : public ::System::Object
	{
	public:
		::System::Action* _EntranceCovered; // 0x10
		::System::Func_1<::System::Boolean>* _TryClose; // 0x18
		::System::Action* _ReadyRequested; // 0x20
		::System::Boolean _Closed; // 0x28
		::System::Boolean _EntranceAnimEnded; // 0x29
		::System::Boolean _CloseRequested; // 0x2A
		::System::Void _ctor(::System::Action* a1, ::System::Action* a2, ::System::Func_1<::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTLOADINGVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTLOADINGVIEWMODEL_ONREADY_OFFSET))(this);
		}

		::System::Void OnEntranceAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTLOADINGVIEWMODEL_ONENTRANCEANIMEND_OFFSET))(this);
		}

		::System::Void RequestClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTLOADINGVIEWMODEL_REQUESTCLOSE_OFFSET))(this);
		}

		::System::Void FlushClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTLOADINGVIEWMODEL_FLUSHCLOSE_OFFSET))(this);
		}

		::System::Void _CloseIfReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTLOADINGVIEWMODEL__CLOSEIFREADY_OFFSET))(this);
		}

	};
}
