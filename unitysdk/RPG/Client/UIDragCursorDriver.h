#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VirtualCursorStatus.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class IVirtualCursor; }
namespace RPG::Client { class UIDragScope; }
namespace RPG::Client { class UIDragSource; }
namespace RPG::Client { class VirtualCursor; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UIDRAGCURSORDRIVER_AWAKE_OFFSET UNITYSDK_OFFSET(0xE38C9C0)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_CANCEL_OFFSET UNITYSDK_OFFSET(0xE38C860)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_CTOR_OFFSET UNITYSDK_OFFSET(0xE38D260)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_DROP_OFFSET UNITYSDK_OFFSET(0xE38C4B0)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0xE38BC60)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_GLCLHOPJBHN_OFFSET UNITYSDK_OFFSET(0xE38C020)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_HJFABBKGBFG_OFFSET UNITYSDK_OFFSET(0xE38D210)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_JOKIPKIJOMG_OFFSET UNITYSDK_OFFSET(0xE38D170)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_NDAELBBNAGK_OFFSET UNITYSDK_OFFSET(0xE38BFC0)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_ODKHLKJKAFG_OFFSET UNITYSDK_OFFSET(0xE38C400)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE38CCA0)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE38CA40)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_PICK_OFFSET UNITYSDK_OFFSET(0xE38BD30)
#define RPG_CLIENT_UIDRAGCURSORDRIVER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE38CF60)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDragCursorDriver_TypeDefinitionIndex = 73055;

	class UIDragCursorDriver : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::VirtualCursor* _CursorOverride; // 0x18
		::System::Boolean _DriveCursorStatus; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::Client::UIDragScope* OAMCDOCACHG; // 0x28
		::UnityEngine::EventSystems::PointerEventData* BFDGBAJEJMC; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* IONPJOBMNIA; // 0x38
		::UnityEngine::Vector2 OFEBPEIHNHN; // 0x40
		// static const ::System::Object GCJNNILPJMB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_GET_ISDRAGGING_OFFSET))(this);
		}

		::System::Void Pick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_PICK_OFFSET))(this);
		}

		::System::Void Drop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_DROP_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_CANCEL_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_UPDATE_OFFSET))(this);
		}

		::System::Void JOKIPKIJOMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_JOKIPKIJOMG_OFFSET))(this);
		}

		::System::Void HJFABBKGBFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_HJFABBKGBFG_OFFSET))(this);
		}

		::RPG::Client::UIDragSource* GLCLHOPJBHN(::UnityEngine::Vector2 a1)
		{
			return ((::RPG::Client::UIDragSource*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_GLCLHOPJBHN_OFFSET))(this, a1);
		}

		::RPG::Client::IVirtualCursor* NDAELBBNAGK()
		{
			return ((::RPG::Client::IVirtualCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_NDAELBBNAGK_OFFSET))(this);
		}

		::System::Void ODKHLKJKAFG(::RPG::Client::VirtualCursorStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursorStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGCURSORDRIVER_ODKHLKJKAFG_OFFSET))(this, a1);
		}

	};
}
