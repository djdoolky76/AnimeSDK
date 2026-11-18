#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TweenBar_GJPMCHMKBOG.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class MonoMaskSlider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define MOLEMOLE_TWEENBAR_BEGIN_1_OFFSET UNITYSDK_OFFSET(0x1A0BD4F0)
#define MOLEMOLE_TWEENBAR_BEGIN_OFFSET UNITYSDK_OFFSET(0x1A0BD370)
#define MOLEMOLE_TWEENBAR_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x1A0BD0F0)
#define MOLEMOLE_TWEENBAR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A0BCA80)
#define MOLEMOLE_TWEENBAR_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1A0BD6F0)
#define MOLEMOLE_TWEENBAR_INITINFO_OFFSET UNITYSDK_OFFSET(0x1A0BD030)
#define MOLEMOLE_TWEENBAR_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x1A0BD650)
#define MOLEMOLE_TWEENBAR_NOPPGJBPFNF_OFFSET UNITYSDK_OFFSET(0x1A0BCB00)
#define MOLEMOLE_TWEENBAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A0BD1C0)
#define MOLEMOLE_TWEENBAR_PECPJKGEJKM_OFFSET UNITYSDK_OFFSET(0x1A0BD6E0)
#define MOLEMOLE_TWEENBAR_RESETSTART_OFFSET UNITYSDK_OFFSET(0x1A0BD280)
#define MOLEMOLE_TWEENBAR_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A0BCA90)
#define MOLEMOLE_TWEENBAR_START_OFFSET UNITYSDK_OFFSET(0x1A0BCFB0)
#define MOLEMOLE_TWEENBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BD630)

namespace MoleMole
{
	inline static constexpr unsigned int TweenBar_TypeDefinitionIndex = 70143;

	class TweenBar
	{
	public:
		::MoleMole::TweenBar_GJPMCHMKBOG barSliderType; // 0x88
		::System::Byte _padding0[0x4];
		::MoleMole::MonoMaskSlider* monoMaskSlider; // 0x90
		::UnityEngine::UI::Slider* imageSlider; // 0x98
		::UnityEngine::UI::Image* imageBar; // 0xA0
		::System::Single IDAFENHHAFC; // 0xA8
		::System::Boolean AOKCPCOCIAG; // 0xAC
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 OJDLCBAGGDC; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR__CTOR_OFFSET))(this);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_SET_VALUE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_START_OFFSET))(this);
		}

		::System::Void DFJPMOOOLHM(::System::Single CKELPHPMECF, ::System::Boolean GNFAABJPKPN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_DFJPMOOOLHM_OFFSET))(this, CKELPHPMECF, GNFAABJPKPN);
		}

		::System::Void InitInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_INITINFO_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_ONDISABLE_OFFSET))(this);
		}

		::System::Void ResetStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_RESETSTART_OFFSET))(this);
		}

		static ::MoleMole::TweenBar* Begin(::UnityEngine::GameObject* NJOAJLDJCCJ, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single MDPPNMIPDMP, ::System::Single DLBFEAOALML)
		{
			return ((::MoleMole::TweenBar*(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_BEGIN_OFFSET))(NJOAJLDJCCJ, KDEHMPGOCEP, PADJNMGMGHO, MDPPNMIPDMP, DLBFEAOALML);
		}

		static ::MoleMole::TweenBar* Begin_1(::MoleMole::TweenBar* HBNBIBADGNH, ::System::Single KDEHMPGOCEP, ::System::Single PADJNMGMGHO, ::System::Single MDPPNMIPDMP, ::System::Single DLBFEAOALML)
		{
			return ((::MoleMole::TweenBar*(*)(::MoleMole::TweenBar*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_BEGIN_1_OFFSET))(HBNBIBADGNH, KDEHMPGOCEP, PADJNMGMGHO, MDPPNMIPDMP, DLBFEAOALML);
		}

		::System::Void NIGDIMFIAEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_NIGDIMFIAEJ_OFFSET))(this);
		}

		::System::Void PECPJKGEJKM(::System::Single MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_PECPJKGEJKM_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void NOPPGJBPFNF(::System::Single EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_NOPPGJBPFNF_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TWEENBAR_ILHIIDBCNEC_OFFSET))(this);
		}
	};
}
