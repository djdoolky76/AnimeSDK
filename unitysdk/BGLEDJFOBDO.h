#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/ActivityRealityShow/RealityShowMedalIconSize.h"
#include "unitysdk/RPG/Client/ActivityRealityShow/RealityShowMedalTier.h"
class EDDKLMGIMFP;
class KKCDPIJCADB;
class MGFFCMONLJG;
namespace RPG::Client { class LocalizedText; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define BGLEDJFOBDO_AIGIPIHDKPD_OFFSET UNITYSDK_OFFSET(0xBB16470)
#define BGLEDJFOBDO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBB16700)
#define BGLEDJFOBDO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBB167F0)
#define BGLEDJFOBDO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB168C0)
#define BGLEDJFOBDO_ENLLJPOIGBK_OFFSET UNITYSDK_OFFSET(0xBB165C0)
#define BGLEDJFOBDO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xBB15DA0)
#define BGLEDJFOBDO_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xBB15DC0)
#define BGLEDJFOBDO_JIDNECJOPLI_OFFSET UNITYSDK_OFFSET(0xBB16380)
#define BGLEDJFOBDO_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0xBB16120)
#define BGLEDJFOBDO_NNGNCJCDOIK_OFFSET UNITYSDK_OFFSET(0xBB16320)
#define BGLEDJFOBDO_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xBB15DB0)
#define BGLEDJFOBDO__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xBB15E00)
#define BGLEDJFOBDO__ONBIND_OFFSET UNITYSDK_OFFSET(0xBB159E0)
#define BGLEDJFOBDO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBB160B0)

inline static constexpr unsigned int BGLEDJFOBDO_TypeDefinitionIndex = 73359;

	class BGLEDJFOBDO : public ::FMPCODLIOLG
	{
	public:
		::EDDKLMGIMFP* AABBPIMGDAN; // 0x60
		::UnityEngine::UI::Slider* BOMOALPHCFH; // 0x68
		::UnityEngine::UI::Image* FPNFHBBOINO; // 0x70
		::MGFFCMONLJG* IGHAHBNLIJA; // 0x78
		::RPG::Client::LocalizedText* LEJMJEDAHLO; // 0x80
		::UnityEngine::Transform* OGDGLGDKCKH; // 0x88
		::UnityEngine::UI::Image* GPOIEJPJAKO; // 0x90
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x98
		::RPG::Client::LocalizedText* IEIPAMEDIDH; // 0xA0
		::KKCDPIJCADB* FKNBPKADNPA; // 0xA8
		::System::Boolean DOAKMCNCBGK; // 0xB0
		::System::Byte _padding0[0x3];
		::System::Int32 _Index_k__BackingField; // 0xB4
		::RPG::Client::ActivityRealityShow::RealityShowMedalTier DMOBHLMMJBL; // 0xB8
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* MHBOAIHLBAG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLEDJFOBDO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLEDJFOBDO__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLEDJFOBDO_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BGLEDJFOBDO_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLEDJFOBDO_GET_TRANS_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLEDJFOBDO__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLEDJFOBDO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NNGNCJCDOIK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGLEDJFOBDO_NNGNCJCDOIK_OFFSET))(this, a1);
		}

		::System::Void LEEEAMMHPFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGLEDJFOBDO_LEEEAMMHPFM_OFFSET))(this, a1);
		}

		::System::Void AIGIPIHDKPD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGLEDJFOBDO_AIGIPIHDKPD_OFFSET))(this, a1);
		}

		::System::Void JIDNECJOPLI(::UnityEngine::UI::Image* a1, ::RPG::Client::ActivityRealityShow::RealityShowMedalTier a2, ::RPG::Client::ActivityRealityShow::RealityShowMedalIconSize a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::RPG::Client::ActivityRealityShow::RealityShowMedalTier, ::RPG::Client::ActivityRealityShow::RealityShowMedalIconSize))((::PBYTE)hIl2Cpp + BGLEDJFOBDO_JIDNECJOPLI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ENLLJPOIGBK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGLEDJFOBDO_ENLLJPOIGBK_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLEDJFOBDO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLEDJFOBDO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
