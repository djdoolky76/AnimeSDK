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

#define FGBIGOJDDEE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18A7AB80)
#define FGBIGOJDDEE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18A7AC70)
#define FGBIGOJDDEE_BMKEIONMBBI_OFFSET UNITYSDK_OFFSET(0x18A7A990)
#define FGBIGOJDDEE_CTOR_OFFSET UNITYSDK_OFFSET(0x18A7AD40)
#define FGBIGOJDDEE_EHINMNKAIKH_OFFSET UNITYSDK_OFFSET(0x18A7AA60)
#define FGBIGOJDDEE_HOGLGBBBFJM_OFFSET UNITYSDK_OFFSET(0x18A7A540)
#define FGBIGOJDDEE_IMAMIONKAGO_OFFSET UNITYSDK_OFFSET(0x18A7A8C0)
#define FGBIGOJDDEE_JJBGNJFCHPL_OFFSET UNITYSDK_OFFSET(0x18A7AA00)
#define FGBIGOJDDEE_LLFMMFPFAKB_OFFSET UNITYSDK_OFFSET(0x18A7A920)
#define FGBIGOJDDEE_OPCDEPOJOAL_OFFSET UNITYSDK_OFFSET(0x18A7A6F0)
#define FGBIGOJDDEE__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x18A7A1E0)
#define FGBIGOJDDEE__ONBIND_OFFSET UNITYSDK_OFFSET(0x18A79DC0)
#define FGBIGOJDDEE__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x18A7A150)
#define FGBIGOJDDEE__ONTICK_OFFSET UNITYSDK_OFFSET(0x18A7A690)
#define FGBIGOJDDEE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18A7A300)

inline static constexpr unsigned int FGBIGOJDDEE_TypeDefinitionIndex = 74268;

	class FGBIGOJDDEE : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* FPBNLODJEHI; // 0x60
		::UnityEngine::Animation* OAEEBCCHOMM; // 0x68
		::UnityEngine::Transform* MCFJNFDKCBO; // 0x70
		::UnityEngine::Animation* APDHFBFEPOI; // 0x78
		::UnityEngine::Animation* LJKNBBIGPNL; // 0x80
		::UnityEngine::UI::Slider* EAHOJOHDFEF; // 0x88
		::UnityEngine::UI::Slider* HIFIEOGNGLG; // 0x90
		::UnityEngine::Transform* FHFPJAMHMPE; // 0x98
		::UnityEngine::UI::Slider* IJJHGHGDILF; // 0xA0
		::System::Boolean HNALEMBOBFE; // 0xA8
		::System::Boolean HAFCOEMEHNH; // 0xA9
		::System::Byte _padding0[0x2];
		::System::Single FAFIAGJFGEF; // 0xAC
		::System::Single BFKCADADNCA; // 0xB0
		::System::Single CLEBBBABPEI; // 0xB4
		::RPG::GameCore::BattleScreenEffectType MGFNJPADMPO; // 0xB8
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
