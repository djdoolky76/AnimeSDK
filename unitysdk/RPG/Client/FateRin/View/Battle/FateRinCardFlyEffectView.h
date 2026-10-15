#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FFMDBJLLDGD;
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_CANCELALL_OFFSET UNITYSDK_OFFSET(0xCFC4690)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xCFC46E0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_JAGKJANLDHE_OFFSET UNITYSDK_OFFSET(0xCFC43C0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_KEKNGBPHKAH_OFFSET UNITYSDK_OFFSET(0xCFC41D0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_PLAYDRAWFLY_OFFSET UNITYSDK_OFFSET(0xCFC4270)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_SCHEDULEAFTERDELAY_OFFSET UNITYSDK_OFFSET(0xCFC44A0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinCardFlyEffectView_TypeDefinitionIndex = 80674;

	class FateRinCardFlyEffectView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _BtnDrawTransform; // 0x18
		::System::Single _DrawFlyDurationA; // 0x20
		::System::Single _DrawFlyDurationB; // 0x24
		::UnityEngine::Vector3 _DrawFlyMidLocalOffset; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* _DrawFlyEaseNameA; // 0x38
		::System::String* _DrawFlyEaseNameB; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 KEKNGBPHKAH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_KEKNGBPHKAH_OFFSET))(this);
		}

		::System::Void PlayDrawFly(::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_PLAYDRAWFLY_OFFSET))(this, a1, a2);
		}

		::System::Void ScheduleAfterDelay(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_SCHEDULEAFTERDELAY_OFFSET))(this, a1, a2);
		}

		::System::Void CancelAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_CANCELALL_OFFSET))(this);
		}

		::FFMDBJLLDGD* JAGKJANLDHE()
		{
			return ((::FFMDBJLLDGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW_JAGKJANLDHE_OFFSET))(this);
		}

	};
}
