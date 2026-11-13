#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class APKDMEEAPKJ;
class NOFHJIPIHCE;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define BAGCMEBPMIB_AMMHPHJEMLL_OFFSET UNITYSDK_OFFSET(0x199D0A00)
#define BAGCMEBPMIB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x199D10A0)
#define BAGCMEBPMIB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x199D1220)
#define BAGCMEBPMIB_CBNFLHHBDDJ_OFFSET UNITYSDK_OFFSET(0x199D06E0)
#define BAGCMEBPMIB_CTOR_OFFSET UNITYSDK_OFFSET(0x199D1380)
#define BAGCMEBPMIB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x199D0210)
#define BAGCMEBPMIB_FKEBMDNHDFK_OFFSET UNITYSDK_OFFSET(0x199D0BD0)
#define BAGCMEBPMIB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x199D01B0)
#define BAGCMEBPMIB_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x199D01D0)
#define BAGCMEBPMIB_IAHKKGHGJFN_OFFSET UNITYSDK_OFFSET(0x199D0C90)
#define BAGCMEBPMIB_IPCBFOGOKKG_OFFSET UNITYSDK_OFFSET(0x199D0FF0)
#define BAGCMEBPMIB_MAMNNIIMDIH_OFFSET UNITYSDK_OFFSET(0x199D08E0)
#define BAGCMEBPMIB_NCDLBFHOBEB_OFFSET UNITYSDK_OFFSET(0x199D0E10)
#define BAGCMEBPMIB_NGFENEOEDBC_OFFSET UNITYSDK_OFFSET(0x199D0F00)
#define BAGCMEBPMIB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x199D01C0)
#define BAGCMEBPMIB__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x199D03D0)
#define BAGCMEBPMIB__ONBIND_OFFSET UNITYSDK_OFFSET(0x199CFDD0)
#define BAGCMEBPMIB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x199D0540)

inline static constexpr unsigned int BAGCMEBPMIB_TypeDefinitionIndex = 73361;

	class BAGCMEBPMIB : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x60
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
		::UnityEngine::UI::Button* HNMPOPNPDDB; // 0x70
		::UnityEngine::UI::Image* KBJDOEDBFDC; // 0x78
		::RPG::Client::LocalizedText* AFABAFFOLGO; // 0x80
		::RPG::Client::LocalizedText* HCPKJEKHAPF; // 0x88
		::UnityEngine::UI::Button* OHGOGOOHGCK; // 0x90
		::UnityEngine::UI::Image* NMMAJIDOFHE; // 0x98
		::Il2CppArray<::System::String*>* NBPLHLICCNN; // 0xA0
		::System::Int32 DGNAHHHKGKD; // 0xA8
		::System::Int32 _Index_k__BackingField; // 0xAC
		::System::UInt32 LKGLNFBMHOG; // 0xB0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCMEBPMIB__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_GET_TRANS_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCMEBPMIB__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCMEBPMIB__SETUPVIEW_OFFSET))(this);
		}

		::System::Void MAMNNIIMDIH(::NOFHJIPIHCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOFHJIPIHCE*))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_MAMNNIIMDIH_OFFSET))(this, a1);
		}

		::System::Void AMMHPHJEMLL(::APKDMEEAPKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APKDMEEAPKJ*))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_AMMHPHJEMLL_OFFSET))(this, a1);
		}

		::System::Void FKEBMDNHDFK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_FKEBMDNHDFK_OFFSET))(this, a1);
		}

		::System::Void IAHKKGHGJFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_IAHKKGHGJFN_OFFSET))(this, a1);
		}

		::System::Void CBNFLHHBDDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_CBNFLHHBDDJ_OFFSET))(this);
		}

		::System::Void NCDLBFHOBEB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_NCDLBFHOBEB_OFFSET))(this, a1);
		}

		::System::Void NGFENEOEDBC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_NGFENEOEDBC_OFFSET))(this, a1);
		}

		::System::Void IPCBFOGOKKG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_IPCBFOGOKKG_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
