#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class UIEraseMask; }
namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_ADD_ONERASEBEGAN_OFFSET UNITYSDK_OFFSET(0xD5036D0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_ADD_ONERASEENDED_OFFSET UNITYSDK_OFFSET(0xD503790)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_BEGINERASE_OFFSET UNITYSDK_OFFSET(0xD503850)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_CTOR_OFFSET UNITYSDK_OFFSET(0xD5045D0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_ENDERASE_OFFSET UNITYSDK_OFFSET(0xD503970)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_MARKCOMPLETED_OFFSET UNITYSDK_OFFSET(0xD503B40)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD504350)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xD503B90)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xD503C50)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_REMOVE_ONERASEBEGAN_OFFSET UNITYSDK_OFFSET(0xD503730)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_REMOVE_ONERASEENDED_OFFSET UNITYSDK_OFFSET(0xD5037F0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_REVEALIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xD503A90)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD503D20)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER__BEGININTERNAL_OFFSET UNITYSDK_OFFSET(0xD5038F0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER__COMPLETE_OFFSET UNITYSDK_OFFSET(0xD503A10)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER__ENDSTROKE_OFFSET UNITYSDK_OFFSET(0xD5043A0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER__GETPROGRESS_OFFSET UNITYSDK_OFFSET(0xD504450)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER__READPOINTERUV_OFFSET UNITYSDK_OFFSET(0xD503F90)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER__TOERASEMASKUV_OFFSET UNITYSDK_OFFSET(0xD504210)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER__TRYCOMPLETE_OFFSET UNITYSDK_OFFSET(0xD504290)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertEraseInputDriver_TypeDefinitionIndex = 77148;

	class ComicDessertEraseInputDriver : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::UIEraseMask*>* Targets; // 0x18
		::UnityEngine::RectTransform* EraseRect; // 0x20
		::UnityEngine::Camera* UICamera; // 0x28
		::System::Single CompleteThreshold; // 0x30
		::System::Byte _padding0[0x4];
		::System::Action* OnEraseBegan; // 0x38
		::System::Action* OnEraseEnded; // 0x40
		::System::Boolean _Pressing; // 0x48
		::System::Boolean _Completed; // 0x49
		::System::Byte _padding1[0x2];
		::System::Int32 _PointerID; // 0x4C
		::System::Func_1<::System::Nullable_1<::UnityEngine::Vector2>>* _ExternalUvProvider; // 0x50
		::RPG::Client::UIEraseMask* _ProgressMask; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_CTOR_OFFSET))(this);
		}

		::System::Void add_OnEraseBegan(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_ADD_ONERASEBEGAN_OFFSET))(this, a1);
		}

		::System::Void remove_OnEraseBegan(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_REMOVE_ONERASEBEGAN_OFFSET))(this, a1);
		}

		::System::Void add_OnEraseEnded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_ADD_ONERASEENDED_OFFSET))(this, a1);
		}

		::System::Void remove_OnEraseEnded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_REMOVE_ONERASEENDED_OFFSET))(this, a1);
		}

		::System::Void BeginErase(::System::Func_1<::System::Nullable_1<::UnityEngine::Vector2>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Nullable_1<::UnityEngine::Vector2>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_BEGINERASE_OFFSET))(this, a1);
		}

		::System::Void EndErase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_ENDERASE_OFFSET))(this);
		}

		::System::Void RevealImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_REVEALIMMEDIATELY_OFFSET))(this);
		}

		::System::Void MarkCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_MARKCOMPLETED_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER_ONDISABLE_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Vector2> _ReadPointerUV()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER__READPOINTERUV_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 _ToEraseMaskUV(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER__TOERASEMASKUV_OFFSET))(a1);
		}

		::System::Void _BeginInternal(::System::Func_1<::System::Nullable_1<::UnityEngine::Vector2>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Nullable_1<::UnityEngine::Vector2>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER__BEGININTERNAL_OFFSET))(this, a1);
		}

		::System::Void _EndStroke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER__ENDSTROKE_OFFSET))(this);
		}

		::System::Void _TryComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER__TRYCOMPLETE_OFFSET))(this);
		}

		::System::Void _Complete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER__COMPLETE_OFFSET))(this);
		}

		::System::Single _GetProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTERASEINPUTDRIVER__GETPROGRESS_OFFSET))(this);
		}

	};
}
