#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoMaskSlider_AnimStyle.h"
#include "unitysdk/RPG/Client/MonoMaskSlider_FlashLoopAnimName.h"
#include "unitysdk/RPG/Client/MonoMaskSlider_SliderDirection.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class MonoMaskSlider; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOMASKSLIDER_CTOR_OFFSET UNITYSDK_OFFSET(0xD84C700)
#define RPG_CLIENT_MONOMASKSLIDER_GETBLINGANIMATIONNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0xD84C160)
#define RPG_CLIENT_MONOMASKSLIDER_GETRATIO_OFFSET UNITYSDK_OFFSET(0xD84BDF0)
#define RPG_CLIENT_MONOMASKSLIDER_GET_LOOPANIMNAMESTR_OFFSET UNITYSDK_OFFSET(0xD84B880)
#define RPG_CLIENT_MONOMASKSLIDER_IMLPBFKEGPP_OFFSET UNITYSDK_OFFSET(0xD84C320)
#define RPG_CLIENT_MONOMASKSLIDER_NNDLMDPLBAH_OFFSET UNITYSDK_OFFSET(0xD84C520)
#define RPG_CLIENT_MONOMASKSLIDER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD84C6B0)
#define RPG_CLIENT_MONOMASKSLIDER_SETREFSLIDER_OFFSET UNITYSDK_OFFSET(0xD84BE60)
#define RPG_CLIENT_MONOMASKSLIDER_STARTFLASHLOOP_OFFSET UNITYSDK_OFFSET(0xD84C050)
#define RPG_CLIENT_MONOMASKSLIDER_STARTFLASHSPREAD_OFFSET UNITYSDK_OFFSET(0xD84BEC0)
#define RPG_CLIENT_MONOMASKSLIDER_STOPFLASHLOOPANIM_OFFSET UNITYSDK_OFFSET(0xD84C3E0)
#define RPG_CLIENT_MONOMASKSLIDER_STOPFLASHSPREADANIM_OFFSET UNITYSDK_OFFSET(0xD84C210)
#define RPG_CLIENT_MONOMASKSLIDER_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0xD84BA50)
#define RPG_CLIENT_MONOMASKSLIDER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD84C4D0)

namespace RPG::Client
{
	class MonoMaskSlider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* maskRect; // 0x18
		::UnityEngine::RectTransform* fillRect; // 0x20
		::RPG::Client::MonoMaskSlider_AnimStyle animStlye; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::Animation* LoopAnim; // 0x30
		::RPG::Client::MonoMaskSlider_FlashLoopAnimName LoopAnimName; // 0x38
		::System::Boolean LoopAnimEnable; // 0x3C
		::System::Byte _padding1[0x3];
		::UnityEngine::Animation* SpreadAnim; // 0x40
		::System::Boolean SpreadAnimEnable; // 0x48
		::System::Byte _padding2[0x7];
		::System::Action* OnCustomAnimUpdate; // 0x50
		::RPG::Client::MonoMaskSlider* EKHMMEIDHIO; // 0x58
		::UnityEngine::Transform* _fullEffect; // 0x60
		::RPG::Client::MonoMaskSlider_SliderDirection dirction; // 0x68
		::System::Single sliderGrowTime; // 0x6C
		::System::Single minValue; // 0x70
		::System::Single value; // 0x74
		::System::Single maxValue; // 0x78
		::System::Byte _padding3[0x4];
		::System::Action* onValueChanged; // 0x80
		::System::Boolean FKEBDCOLKIM; // 0x88
		::System::Boolean HDBGDLLNFHJ; // 0x89
		::System::Byte _padding4[0x6];
		::System::Collections::Generic::SortedList_2<::System::Object*, ::System::String*>* JMNNFJOLPJB; // 0x90
		// static const ::System::String* LCKEMILPCPM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_CTOR_OFFSET))(this);
		}

		::System::String* get_LoopAnimNameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_GET_LOOPANIMNAMESTR_OFFSET))(this);
		}

		::System::Void UpdateValue(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_UPDATEVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetRefSlider(::RPG::Client::MonoMaskSlider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoMaskSlider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_SETREFSLIDER_OFFSET))(this, a1);
		}

		::System::Single GetRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_GETRATIO_OFFSET))(this);
		}

		::System::Void StartFlashSpread(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_STARTFLASHSPREAD_OFFSET))(this, a1);
		}

		::System::Void StartFlashLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_STARTFLASHLOOP_OFFSET))(this);
		}

		::System::Single GetBlingAnimationNormalizedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_GETBLINGANIMATIONNORMALIZEDTIME_OFFSET))(this);
		}

		::System::Void StopFlashSpreadAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_STOPFLASHSPREADANIM_OFFSET))(this);
		}

		::System::Void StopFlashLoopAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_STOPFLASHLOOPANIM_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_UPDATE_OFFSET))(this);
		}

		::System::Void IMLPBFKEGPP(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_IMLPBFKEGPP_OFFSET))(this, a1, a2);
		}

		::System::Void NNDLMDPLBAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_NNDLMDPLBAH_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMASKSLIDER_ONDESTROY_OFFSET))(this);
		}

	};
}
