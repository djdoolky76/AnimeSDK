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

#define NHFNMFHEBKH_AMMHPHJEMLL_OFFSET UNITYSDK_OFFSET(0xBBBA890)
#define NHFNMFHEBKH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBBBAF20)
#define NHFNMFHEBKH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBBBB0A0)
#define NHFNMFHEBKH_CBNFLHHBDDJ_OFFSET UNITYSDK_OFFSET(0xBBBA1B0)
#define NHFNMFHEBKH_CTOR_OFFSET UNITYSDK_OFFSET(0xBBBB200)
#define NHFNMFHEBKH_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xBBB9CE0)
#define NHFNMFHEBKH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBBBA010)
#define NHFNMFHEBKH_FKEBMDNHDFK_OFFSET UNITYSDK_OFFSET(0xBBBAA50)
#define NHFNMFHEBKH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xBBB9C80)
#define NHFNMFHEBKH_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xBBB9CA0)
#define NHFNMFHEBKH_IAHKKGHGJFN_OFFSET UNITYSDK_OFFSET(0xBBBAB10)
#define NHFNMFHEBKH_IPCBFOGOKKG_OFFSET UNITYSDK_OFFSET(0xBBBAE70)
#define NHFNMFHEBKH_MAMNNIIMDIH_OFFSET UNITYSDK_OFFSET(0xBBBA4E0)
#define NHFNMFHEBKH_NCDLBFHOBEB_OFFSET UNITYSDK_OFFSET(0xBBBAC90)
#define NHFNMFHEBKH_NGFENEOEDBC_OFFSET UNITYSDK_OFFSET(0xBBBAD80)
#define NHFNMFHEBKH_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xBBB9EA0)
#define NHFNMFHEBKH_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xBBB9C90)
#define NHFNMFHEBKH__ONBIND_OFFSET UNITYSDK_OFFSET(0xBBB9B10)

inline static constexpr unsigned int NHFNMFHEBKH_TypeDefinitionIndex = 71382;

	class NHFNMFHEBKH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* NMMAJIDOFHE; // 0x60
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
		::UnityEngine::UI::Button* OHGOGOOHGCK; // 0x70
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x78
		::Il2CppArray<::System::String*>* NBPLHLICCNN; // 0x80
		::UnityEngine::UI::Button* HNMPOPNPDDB; // 0x88
		::RPG::Client::LocalizedText* HCPKJEKHAPF; // 0x90
		::UnityEngine::UI::Image* FALGNEHEONL; // 0x98
		::UnityEngine::UI::Image* KBJDOEDBFDC; // 0xA0
		::RPG::Client::LocalizedText* AFABAFFOLGO; // 0xA8
		::System::Int32 _Index_k__BackingField; // 0xB0
		::System::UInt32 LKGLNFBMHOG; // 0xB4
		::System::Int32 DGNAHHHKGKD; // 0xB8
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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFNMFHEBKH_EKGCGIDIFJJ_OFFSET))(this);
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
