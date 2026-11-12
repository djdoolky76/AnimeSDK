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

#define NHFNMFHEBKH_AMMHPHJEMLL_OFFSET UNITYSDK_OFFSET(0xC49E4C0)
#define NHFNMFHEBKH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC49EB60)
#define NHFNMFHEBKH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC49ECE0)
#define NHFNMFHEBKH_CBNFLHHBDDJ_OFFSET UNITYSDK_OFFSET(0xC49DDE0)
#define NHFNMFHEBKH_CTOR_OFFSET UNITYSDK_OFFSET(0xC49EE40)
#define NHFNMFHEBKH_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xC49D910)
#define NHFNMFHEBKH_FKEBMDNHDFK_OFFSET UNITYSDK_OFFSET(0xC49E690)
#define NHFNMFHEBKH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xC49D8B0)
#define NHFNMFHEBKH_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xC49D8D0)
#define NHFNMFHEBKH_IAHKKGHGJFN_OFFSET UNITYSDK_OFFSET(0xC49E750)
#define NHFNMFHEBKH_IPCBFOGOKKG_OFFSET UNITYSDK_OFFSET(0xC49EAB0)
#define NHFNMFHEBKH_MAMNNIIMDIH_OFFSET UNITYSDK_OFFSET(0xC49E110)
#define NHFNMFHEBKH_NCDLBFHOBEB_OFFSET UNITYSDK_OFFSET(0xC49E8D0)
#define NHFNMFHEBKH_NGFENEOEDBC_OFFSET UNITYSDK_OFFSET(0xC49E9C0)
#define NHFNMFHEBKH_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xC49D8C0)
#define NHFNMFHEBKH__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xC49DAD0)
#define NHFNMFHEBKH__ONBIND_OFFSET UNITYSDK_OFFSET(0xC49D450)
#define NHFNMFHEBKH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC49DC40)

inline static constexpr unsigned int NHFNMFHEBKH_TypeDefinitionIndex = 73363;

	class NHFNMFHEBKH : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* HCPKJEKHAPF; // 0x60
		::UnityEngine::UI::Image* NMMAJIDOFHE; // 0x68
		::UnityEngine::UI::Image* FALGNEHEONL; // 0x70
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x78
		::RPG::Client::LocalizedText* AFABAFFOLGO; // 0x80
		::UnityEngine::UI::Image* KBJDOEDBFDC; // 0x88
		::Il2CppArray<::System::String*>* NBPLHLICCNN; // 0x90
		::UnityEngine::UI::Button* HNMPOPNPDDB; // 0x98
		::UnityEngine::UI::Button* OHGOGOOHGCK; // 0xA0
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xA8
		::System::UInt32 LKGLNFBMHOG; // 0xB0
		::System::Int32 DGNAHHHKGKD; // 0xB4
		::System::Int32 _Index_k__BackingField; // 0xB8
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNMFHEBKH__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_GET_TRANS_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNMFHEBKH__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNMFHEBKH__SETUPVIEW_OFFSET))(this);
		}

		::System::Void MAMNNIIMDIH(::NOFHJIPIHCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOFHJIPIHCE*))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_MAMNNIIMDIH_OFFSET))(this, a1);
		}

		::System::Void AMMHPHJEMLL(::APKDMEEAPKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APKDMEEAPKJ*))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_AMMHPHJEMLL_OFFSET))(this, a1);
		}

		::System::Void FKEBMDNHDFK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_FKEBMDNHDFK_OFFSET))(this, a1);
		}

		::System::Void IAHKKGHGJFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_IAHKKGHGJFN_OFFSET))(this, a1);
		}

		::System::Void CBNFLHHBDDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_CBNFLHHBDDJ_OFFSET))(this);
		}

		::System::Void NCDLBFHOBEB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_NCDLBFHOBEB_OFFSET))(this, a1);
		}

		::System::Void NGFENEOEDBC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_NGFENEOEDBC_OFFSET))(this, a1);
		}

		::System::Void IPCBFOGOKKG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_IPCBFOGOKKG_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
