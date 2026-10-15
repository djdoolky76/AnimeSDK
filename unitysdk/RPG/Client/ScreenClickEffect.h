#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_SCREENCLICKEFFECT_AWAKE_OFFSET UNITYSDK_OFFSET(0xE0A6310)
#define RPG_CLIENT_SCREENCLICKEFFECT_BGNGIDNDOOJ_OFFSET UNITYSDK_OFFSET(0xE0A64C0)
#define RPG_CLIENT_SCREENCLICKEFFECT_CCTOR_OFFSET UNITYSDK_OFFSET(0xE0A7BC0)
#define RPG_CLIENT_SCREENCLICKEFFECT_CKKFOGIDAFP_OFFSET UNITYSDK_OFFSET(0xE0A7330)
#define RPG_CLIENT_SCREENCLICKEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xE0A7BB0)
#define RPG_CLIENT_SCREENCLICKEFFECT_EFBFJDJGNPL_OFFSET UNITYSDK_OFFSET(0xE0A6F00)
#define RPG_CLIENT_SCREENCLICKEFFECT_FLGGGBOPAPJ_OFFSET UNITYSDK_OFFSET(0xE0A7700)
#define RPG_CLIENT_SCREENCLICKEFFECT_GET_SHOULDHIDE_OFFSET UNITYSDK_OFFSET(0xE0A7B90)
#define RPG_CLIENT_SCREENCLICKEFFECT_HDEMIIIDLMH_OFFSET UNITYSDK_OFFSET(0xE0A7B10)
#define RPG_CLIENT_SCREENCLICKEFFECT_ICGFIFOBPOH_OFFSET UNITYSDK_OFFSET(0xE0A7900)
#define RPG_CLIENT_SCREENCLICKEFFECT_JPBPIHMMJNA_OFFSET UNITYSDK_OFFSET(0xE0A77E0)
#define RPG_CLIENT_SCREENCLICKEFFECT_LGLOKBPCAFN_OFFSET UNITYSDK_OFFSET(0xE0A7A90)
#define RPG_CLIENT_SCREENCLICKEFFECT_NFONANMPAOD_OFFSET UNITYSDK_OFFSET(0xE0A7750)
#define RPG_CLIENT_SCREENCLICKEFFECT_OCGKMGIBKKF_OFFSET UNITYSDK_OFFSET(0xE0A6970)
#define RPG_CLIENT_SCREENCLICKEFFECT_OFKGJGJKPHP_OFFSET UNITYSDK_OFFSET(0xE0A72E0)
#define RPG_CLIENT_SCREENCLICKEFFECT_OGCFNIKIBKI_OFFSET UNITYSDK_OFFSET(0xE0A7A10)
#define RPG_CLIENT_SCREENCLICKEFFECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE0A6D50)
#define RPG_CLIENT_SCREENCLICKEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE0A6920)
#define RPG_CLIENT_SCREENCLICKEFFECT_PIFDDHAMBBE_OFFSET UNITYSDK_OFFSET(0xE0A66F0)
#define RPG_CLIENT_SCREENCLICKEFFECT_SET_SHOULDHIDE_OFFSET UNITYSDK_OFFSET(0xE0A7BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ScreenClickEffect_TypeDefinitionIndex = 69013;

	class ScreenClickEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _ShouldHide_k__BackingField; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::GameObject* _EffectMobile; // 0x20
		::UnityEngine::GameObject* _EffectPC; // 0x28
		::UnityEngine::Canvas* KNALLMEKPDH; // 0x30
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0x38
		::UnityEngine::RectTransform* IKJAKAOAFGN; // 0x40
		::UnityEngine::RectTransform* EBFBNIDMFOM; // 0x48
		::UnityEngine::Animation* EEINMICGIND; // 0x50
		::UnityEngine::Animation* MCELCFGDKHI; // 0x58
		::System::Boolean BAPAKLMLDCB; // 0x60
		static ::System::String** StaticGet_HKJBMPODDAJ()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "ScreenClickEffect")->GetStaticField(0x6EBC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void PIFDDHAMBBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_PIFDDHAMBBE_OFFSET))(this);
		}

		::System::Void BGNGIDNDOOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_BGNGIDNDOOJ_OFFSET))(this);
		}

		::System::Void OCGKMGIBKKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_OCGKMGIBKKF_OFFSET))(this);
		}

		::System::Void EFBFJDJGNPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_EFBFJDJGNPL_OFFSET))(this);
		}

		::System::Void OFKGJGJKPHP(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_OFKGJGJKPHP_OFFSET))(this, a1);
		}

		::System::Void FLGGGBOPAPJ(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_FLGGGBOPAPJ_OFFSET))(this, a1);
		}

		::System::Void NFONANMPAOD(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_NFONANMPAOD_OFFSET))(this, a1);
		}

		::System::Void JPBPIHMMJNA(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_JPBPIHMMJNA_OFFSET))(this, a1);
		}

		::System::Void CKKFOGIDAFP(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_CKKFOGIDAFP_OFFSET))(this, a1);
		}

		::System::Boolean ICGFIFOBPOH(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_ICGFIFOBPOH_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_GET_SHOULDHIDE_OFFSET))(this);
		}

		::System::Void set_ShouldHide(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_SET_SHOULDHIDE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* OGCFNIKIBKI()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_OGCFNIKIBKI_OFFSET))(this);
		}

		::UnityEngine::RectTransform* LGLOKBPCAFN()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_LGLOKBPCAFN_OFFSET))(this);
		}

		::UnityEngine::Animation* HDEMIIIDLMH()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCREENCLICKEFFECT_HDEMIIIDLMH_OFFSET))(this);
		}

	};
}
