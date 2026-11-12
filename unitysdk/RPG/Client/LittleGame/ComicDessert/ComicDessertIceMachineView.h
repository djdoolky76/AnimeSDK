#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertDeviceView.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/LidAnimEvent.h"
namespace RPG::Client { class IceMachinePlaneShake; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_CONSUMELIDEVENTS_OFFSET UNITYSDK_OFFSET(0xDE89420)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xDE896D0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_IMGNJICCLID_OFFSET UNITYSDK_OFFSET(0xDE88D90)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_NFKOEFKHMJF_OFFSET UNITYSDK_OFFSET(0xDE88F40)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_REPORTLIDEVENT_OFFSET UNITYSDK_OFFSET(0xDE893C0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_RESETSTATE_OFFSET UNITYSDK_OFFSET(0xDE89490)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_SETLIDOPEN_OFFSET UNITYSDK_OFFSET(0xDE88C70)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_SETMOTIONTIME_OFFSET UNITYSDK_OFFSET(0xDE88FC0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_SETWORKING_OFFSET UNITYSDK_OFFSET(0xDE89090)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_STARTSHAKE_OFFSET UNITYSDK_OFFSET(0xDE89280)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_STOPSHAKE_OFFSET UNITYSDK_OFFSET(0xDE892F0)
#define RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_UPDATEFILLEFFECT_OFFSET UNITYSDK_OFFSET(0xDE88E10)

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int ComicDessertIceMachineView_TypeDefinitionIndex = 80088;

	class ComicDessertIceMachineView : public ::RPG::Client::LittleGame::ComicDessert::ComicDessertDeviceView
	{
	public:
		::System::Boolean JALMCDPFKOG; // 0xA8
		::System::Boolean MMKGGABLKDO; // 0xA9
		::System::Boolean NNCJLNMHBIA; // 0xAA
		::System::Boolean JGCDLINBMBL; // 0xAB
		::System::Boolean NECNFNIKMOD; // 0xAC
		::System::Boolean IEFIMFOKKLI; // 0xAD
		::System::Boolean NNNJFBIAEDA; // 0xAE
		::System::Byte _padding0[0x1];
		::UnityEngine::Animator* _Animator; // 0xB0
		::RPG::Client::IceMachinePlaneShake* _PlaneShake; // 0xB8
		::UnityEngine::GameObject* _IceFogEffect; // 0xC0
		::UnityEngine::GameObject* _FillEffect; // 0xC8
		::UnityEngine::ParticleSystem* _FillEffectRoot; // 0xD0
		::System::String* _WorkingParam; // 0xD8
		::System::String* _IsOpenParam; // 0xE0
		::System::String* _MotionTimeParam; // 0xE8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_CTOR_OFFSET))(this);
		}

		::System::Void SetLidOpen(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_SETLIDOPEN_OFFSET))(this, a1);
		}

		::System::Void IMGNJICCLID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_IMGNJICCLID_OFFSET))(this);
		}

		::System::Void UpdateFillEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_UPDATEFILLEFFECT_OFFSET))(this, a1);
		}

		::System::Void NFKOEFKHMJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_NFKOEFKHMJF_OFFSET))(this);
		}

		::System::Void SetMotionTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_SETMOTIONTIME_OFFSET))(this, a1);
		}

		::System::Void SetWorking(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_SETWORKING_OFFSET))(this, a1);
		}

		::System::Void StartShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_STARTSHAKE_OFFSET))(this);
		}

		::System::Void StopShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_STOPSHAKE_OFFSET))(this);
		}

		::System::Void ReportLidEvent(::RPG::Client::LittleGame::ComicDessert::LidAnimEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::LidAnimEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_REPORTLIDEVENT_OFFSET))(this, a1);
		}

		::System::Void ConsumeLidEvents(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_CONSUMELIDEVENTS_OFFSET))(this, a1, a2);
		}

		::System::Void ResetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_COMICDESSERT_COMICDESSERTICEMACHINEVIEW_RESETSTATE_OFFSET))(this);
		}

	};
}
