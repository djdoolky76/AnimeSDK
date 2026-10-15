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

#define BAGCMEBPMIB_AMMHPHJEMLL_OFFSET UNITYSDK_OFFSET(0x15BD1430)
#define BAGCMEBPMIB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15BD1AE0)
#define BAGCMEBPMIB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15BD1C60)
#define BAGCMEBPMIB_CBNFLHHBDDJ_OFFSET UNITYSDK_OFFSET(0x15BD1130)
#define BAGCMEBPMIB_CTOR_OFFSET UNITYSDK_OFFSET(0x15BD1DC0)
#define BAGCMEBPMIB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x15BD0C50)
#define BAGCMEBPMIB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15BD0F80)
#define BAGCMEBPMIB_FKEBMDNHDFK_OFFSET UNITYSDK_OFFSET(0x15BD1600)
#define BAGCMEBPMIB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15BD0BF0)
#define BAGCMEBPMIB_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x15BD0C10)
#define BAGCMEBPMIB_IAHKKGHGJFN_OFFSET UNITYSDK_OFFSET(0x15BD16C0)
#define BAGCMEBPMIB_IPCBFOGOKKG_OFFSET UNITYSDK_OFFSET(0x15BD1A30)
#define BAGCMEBPMIB_MAMNNIIMDIH_OFFSET UNITYSDK_OFFSET(0x15BD1320)
#define BAGCMEBPMIB_NCDLBFHOBEB_OFFSET UNITYSDK_OFFSET(0x15BD1850)
#define BAGCMEBPMIB_NGFENEOEDBC_OFFSET UNITYSDK_OFFSET(0x15BD1940)
#define BAGCMEBPMIB_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15BD0E10)
#define BAGCMEBPMIB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x15BD0C00)
#define BAGCMEBPMIB__ONBIND_OFFSET UNITYSDK_OFFSET(0x15BD0AB0)

inline static constexpr unsigned int BAGCMEBPMIB_TypeDefinitionIndex = 71381;

	class BAGCMEBPMIB : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* AFABAFFOLGO; // 0x60
		::UnityEngine::UI::Image* NMMAJIDOFHE; // 0x68
		::UnityEngine::UI::Button* OHGOGOOHGCK; // 0x70
		::UnityEngine::UI::Image* KBJDOEDBFDC; // 0x78
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x80
		::RPG::Client::LocalizedText* HCPKJEKHAPF; // 0x88
		::UnityEngine::UI::Button* HNMPOPNPDDB; // 0x90
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x98
		::Il2CppArray<::System::String*>* NBPLHLICCNN; // 0xA0
		::System::UInt32 LKGLNFBMHOG; // 0xA8
		::System::Int32 _Index_k__BackingField; // 0xAC
		::System::Int32 DGNAHHHKGKD; // 0xB0
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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGCMEBPMIB_EKGCGIDIFJJ_OFFSET))(this);
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
