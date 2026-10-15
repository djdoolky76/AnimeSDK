#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_CHIMERARANKSWAPITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xCB58920)
#define RPG_CLIENT_CHIMERARANKSWAPITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xCB58DF0)
#define RPG_CLIENT_CHIMERARANKSWAPITEM_DOSWAP_OFFSET UNITYSDK_OFFSET(0xCB58130)
#define RPG_CLIENT_CHIMERARANKSWAPITEM_HJFNJJHDLIK_OFFSET UNITYSDK_OFFSET(0xCB58BA0)
#define RPG_CLIENT_CHIMERARANKSWAPITEM_HKGEOLEHFGI_OFFSET UNITYSDK_OFFSET(0xCB58C80)
#define RPG_CLIENT_CHIMERARANKSWAPITEM_INITSWAPRANK_OFFSET UNITYSDK_OFFSET(0xCB586B0)
#define RPG_CLIENT_CHIMERARANKSWAPITEM_SETITEMINDEX_OFFSET UNITYSDK_OFFSET(0xCB572B0)

namespace RPG::Client
{
	class ChimeraRankSwapItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIValueChangeAnimation* ValueChangeAnim; // 0x18
		::UnityEngine::UI::Slider* RankValueSlider; // 0x20
		::UnityEngine::UI::Slider* WorkValueSlider; // 0x28
		::System::Single SwapTime; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* SwapCurve; // 0x38
		::System::Boolean OJDMEFDLCCM; // 0x40
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::Queue_1<::System::Action*>* CIFOILLJFNF; // 0x48
		::System::Int32 EDJPPPILDCB; // 0x50
		::System::Single KDFKNDPFGNA; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPITEM_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPITEM_AWAKE_OFFSET))(this);
		}

		::System::Void SetItemIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPITEM_SETITEMINDEX_OFFSET))(this, a1);
		}

		::System::Void InitSwapRank(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPITEM_INITSWAPRANK_OFFSET))(this, a1, a2);
		}

		::System::Void DoSwap(::System::Single a1, ::System::Single a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPITEM_DOSWAP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HJFNJJHDLIK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPITEM_HJFNJJHDLIK_OFFSET))(this, a1);
		}

		::System::Void HKGEOLEHFGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERARANKSWAPITEM_HKGEOLEHFGI_OFFSET))(this);
		}

	};
}
