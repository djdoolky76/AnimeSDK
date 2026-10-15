#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEPHAMIADEJ_ScrollState.h"
#include "unitysdk/KEPHAMIADEJ_ScrollType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define KEPHAMIADEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xB37F1B0)
#define KEPHAMIADEJ_CNGNCJMDHEA_OFFSET UNITYSDK_OFFSET(0xB37ECD0)
#define KEPHAMIADEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB37F1A0)
#define KEPHAMIADEJ_DOBLPIBGEEL_OFFSET UNITYSDK_OFFSET(0xB37F0E0)
#define KEPHAMIADEJ_FHAPPCADGCE_1_OFFSET UNITYSDK_OFFSET(0xB37E830)
#define KEPHAMIADEJ_FHAPPCADGCE_2_OFFSET UNITYSDK_OFFSET(0xB37E960)
#define KEPHAMIADEJ_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0xB37E5B0)
#define KEPHAMIADEJ_GBABPKPIJGK_OFFSET UNITYSDK_OFFSET(0xB37EF80)
#define KEPHAMIADEJ_GGPCLOJHEBL_OFFSET UNITYSDK_OFFSET(0xB37EE80)
#define KEPHAMIADEJ_GJNPDPPKHGH_OFFSET UNITYSDK_OFFSET(0xB37EC30)
#define KEPHAMIADEJ_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xB37E3D0)
#define KEPHAMIADEJ_HKJHKOCMADI_OFFSET UNITYSDK_OFFSET(0xB37EB10)
#define KEPHAMIADEJ_HOAMFFLBPFC_OFFSET UNITYSDK_OFFSET(0xB37EFD0)
#define KEPHAMIADEJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB37DDD0)
#define KEPHAMIADEJ_KBKKOAOGEPC_OFFSET UNITYSDK_OFFSET(0xB37E560)
#define KEPHAMIADEJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB37EA30)
#define KEPHAMIADEJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB37D830)
#define KEPHAMIADEJ_LAIKHNHMMCL_OFFSET UNITYSDK_OFFSET(0xB37E0B0)
#define KEPHAMIADEJ_LFKHCJJDOAD_OFFSET UNITYSDK_OFFSET(0xB37E450)
#define KEPHAMIADEJ_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xB37EC90)
#define KEPHAMIADEJ_MNIKCCNLOKB_OFFSET UNITYSDK_OFFSET(0xB37E510)
#define KEPHAMIADEJ_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0xB37E4B0)
#define KEPHAMIADEJ_OFMPJLKKDEP_OFFSET UNITYSDK_OFFSET(0xB37DE70)
#define KEPHAMIADEJ_OLMMOJCBMEB_OFFSET UNITYSDK_OFFSET(0xB37E690)
#define KEPHAMIADEJ_PLKCHJMOLDC_OFFSET UNITYSDK_OFFSET(0xB37EF00)

inline static constexpr unsigned int KEPHAMIADEJ_TypeDefinitionIndex = 69006;

	class KEPHAMIADEJ : public ::System::Object
	{
	public:
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x10
		::System::Collections::Generic::Queue_1<::System::Object*>* GMACAFIDEFM; // 0x18
		::UnityEngine::UI::Text* GAKGGMODMNP; // 0x20
		::UnityEngine::UI::Text* COPJABODJHP; // 0x28
		::System::Action* PPNNHIGJGEP; // 0x30
		::UnityEngine::Animation* OFDFAIMLJKB; // 0x38
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x40
		::System::Single HGFCEHJJGCL; // 0x48
		::System::Int32 JJDGIADDPHM; // 0x4C
		::System::Int32 ANPAHODBCOB; // 0x50
		::System::Int32 FFNBLDFFMCN; // 0x54
		::System::Single DKOFFPPGEFI; // 0x58
		::System::Int32 EELOAMDDHBP; // 0x5C
		::KEPHAMIADEJ_ScrollType IOAANMAGJHD; // 0x60
		::KEPHAMIADEJ_ScrollState NMMHFEGBFFP; // 0x64
		::System::Int32 HAOPEJAGHDJ; // 0x68
		::System::Boolean EMHAACACFOM; // 0x6C
		::System::Boolean OMIPKAAHLDP; // 0x6D
		::System::Boolean EOJGKPIGGGN; // 0x6E
		static ::Il2CppArray<::System::String*>** StaticGet_FHIFANIIMDJ()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KEPHAMIADEJ")->GetStaticField(0x3DA30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEPHAMIADEJ_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_HCCKBPDFINA_OFFSET))(this);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Void MNIKCCNLOKB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_MNIKCCNLOKB_OFFSET))(this, a1);
		}

		::System::Void KBKKOAOGEPC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_KBKKOAOGEPC_OFFSET))(this, a1);
		}

		::System::Void FHAPPCADGCE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_FHAPPCADGCE_OFFSET))(this, a1);
		}

		::System::Void FHAPPCADGCE_1(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_FHAPPCADGCE_1_OFFSET))(this, a1);
		}

		::System::Void FHAPPCADGCE_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_FHAPPCADGCE_2_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void GJNPDPPKHGH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_GJNPDPPKHGH_OFFSET))(this, a1);
		}

		::System::Int32 MNGGAOFNGIP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_MNGGAOFNGIP_OFFSET))(this);
		}

		::System::Single CNGNCJMDHEA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_CNGNCJMDHEA_OFFSET))(this);
		}

		::System::Void GGPCLOJHEBL(::System::Single a1, ::System::Int32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_GGPCLOJHEBL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PLKCHJMOLDC(::System::Single a1, ::System::Int32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_PLKCHJMOLDC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GBABPKPIJGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_GBABPKPIJGK_OFFSET))(this);
		}

		::System::Boolean HOAMFFLBPFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_HOAMFFLBPFC_OFFSET))(this);
		}

		::System::Void LFKHCJJDOAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_LFKHCJJDOAD_OFFSET))(this);
		}

		::System::String* OLMMOJCBMEB(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_OLMMOJCBMEB_OFFSET))(this, a1);
		}

		::System::Void LAIKHNHMMCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_LAIKHNHMMCL_OFFSET))(this);
		}

		::System::String* HKJHKOCMADI(::KEPHAMIADEJ_ScrollState a1)
		{
			return ((::System::String*(*)(::PVOID, ::KEPHAMIADEJ_ScrollState))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_HKJHKOCMADI_OFFSET))(this, a1);
		}

		::System::Int32 DOBLPIBGEEL(::System::Int32 a1, ::KEPHAMIADEJ_ScrollState a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::KEPHAMIADEJ_ScrollState))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_DOBLPIBGEEL_OFFSET))(this, a1, a2);
		}

		::System::Void OFMPJLKKDEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPHAMIADEJ_OFMPJLKKDEP_OFFSET))(this);
		}

	};
