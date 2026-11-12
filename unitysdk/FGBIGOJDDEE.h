#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KHEOBHMINFI;
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Slider; }

#define FGBIGOJDDEE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16671860)
#define FGBIGOJDDEE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16671950)
#define FGBIGOJDDEE_BMKEIONMBBI_OFFSET UNITYSDK_OFFSET(0x16671670)
#define FGBIGOJDDEE_CTOR_OFFSET UNITYSDK_OFFSET(0x16671A20)
#define FGBIGOJDDEE_EHINMNKAIKH_OFFSET UNITYSDK_OFFSET(0x16671740)
#define FGBIGOJDDEE_HOGLGBBBFJM_OFFSET UNITYSDK_OFFSET(0x16671220)
#define FGBIGOJDDEE_IMAMIONKAGO_OFFSET UNITYSDK_OFFSET(0x166715A0)
#define FGBIGOJDDEE_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x166716E0)
#define FGBIGOJDDEE_LLFMMFPFAKB_OFFSET UNITYSDK_OFFSET(0x16671600)
#define FGBIGOJDDEE_OPCDEPOJOAL_OFFSET UNITYSDK_OFFSET(0x166713D0)
#define FGBIGOJDDEE__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x16670EC0)
#define FGBIGOJDDEE__ONBIND_OFFSET UNITYSDK_OFFSET(0x16670AA0)
#define FGBIGOJDDEE__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16670E30)
#define FGBIGOJDDEE__ONTICK_OFFSET UNITYSDK_OFFSET(0x16671370)
#define FGBIGOJDDEE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16670FE0)

inline static constexpr unsigned int FGBIGOJDDEE_TypeDefinitionIndex = 74269;

	class FGBIGOJDDEE : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* OAEEBCCHOMM; // 0x60
		::UnityEngine::UI::Slider* HIFIEOGNGLG; // 0x68
		::UnityEngine::Transform* FPBNLODJEHI; // 0x70
		::UnityEngine::Animation* LJKNBBIGPNL; // 0x78
		::UnityEngine::UI::Slider* IJJHGHGDILF; // 0x80
		::UnityEngine::Transform* FHFPJAMHMPE; // 0x88
		::UnityEngine::UI::Slider* EAHOJOHDFEF; // 0x90
		::UnityEngine::Animation* APDHFBFEPOI; // 0x98
		::UnityEngine::Transform* MCFJNFDKCBO; // 0xA0
		::System::Single CLEBBBABPEI; // 0xA8
		::System::Single FAFIAGJFGEF; // 0xAC
		::RPG::GameCore::BattleScreenEffectType MGFNJPADMPO; // 0xB0
		::System::Boolean HAFCOEMEHNH; // 0xB4
		::System::Boolean HNALEMBOBFE; // 0xB5
		::System::Byte _padding0[0x2];
		::System::Single BFKCADADNCA; // 0xB8
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::Object CDJPLPEEKND; // 0x0
		// static const ::System::Object HGBCBJKAAMM; // 0x0
		// static const ::System::String* OHPLFOMPJIP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBIGOJDDEE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBIGOJDDEE__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FGBIGOJDDEE__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBIGOJDDEE__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBIGOJDDEE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGBIGOJDDEE__ONTICK_OFFSET))(this, a1);
		}

		::System::Void IMAMIONKAGO(::KHEOBHMINFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHEOBHMINFI*))((::PBYTE)hIl2Cpp + FGBIGOJDDEE_IMAMIONKAGO_OFFSET))(this, a1);
		}

		::System::Void LLFMMFPFAKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGBIGOJDDEE_LLFMMFPFAKB_OFFSET))(this, a1);
		}

		::System::Void BMKEIONMBBI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGBIGOJDDEE_BMKEIONMBBI_OFFSET))(this, a1);
		}

		::System::Void JJBGNJFCHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGBIGOJDDEE_JJBGNJFCHPL_OFFSET))(this, a1);
		}

		::System::Void OPCDEPOJOAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBIGOJDDEE_OPCDEPOJOAL_OFFSET))(this);
		}

		::System::Void HOGLGBBBFJM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGBIGOJDDEE_HOGLGBBBFJM_OFFSET))(this, a1);
		}

		::System::Void EHINMNKAIKH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGBIGOJDDEE_EHINMNKAIKH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBIGOJDDEE_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGBIGOJDDEE_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
